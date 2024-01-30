@interface ACUIAddOtherAccountsViewController : ACUIAddAccountViewController

- (id)specifiers;
- (id)_specifiersForOtherMailAccounts;
- (id)_specifiersForOtherContactsAccounts;
- (id)_specifiersForOtherCalendarAccounts;
- (id)_specifiersForRemoteManagmentAccount;

@end
