#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

int main() {
	string password, username;
	int age;

	cout << "your username: ";
	cin >> username;

	cout << "your password: ";
	cin >> password;

	bool namecorrect = (username == "ztreoa");
	bool passcorrect = (password == "1234");

	if (namecorrect && passcorrect) {
		cout << "login succesfull.\n";
		Sleep(2000);
		system("cls");
		cout << "your age";
		cin >> age;


		if (age < 18) {
		cout << "no entry, you are too young!\n";
		Sleep(2000);
		exit(0);
}
		else if (age >= 18 && age < 21) {
		Sleep(2000);
		cout << "disabled entry!\n";
}

		else {
		cout << "full entry!";
		Sleep(2000);
		}


	}
	else {
		cout << "false data, no entry!\n";
		Sleep(2000);
		exit(0);
	}





	return 0;
}