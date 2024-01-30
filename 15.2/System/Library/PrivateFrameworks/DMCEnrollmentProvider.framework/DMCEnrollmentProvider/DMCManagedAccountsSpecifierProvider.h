@class NSArray;

@interface DMCManagedAccountsSpecifierProvider : DMCSpecifierProvider

@property (retain, nonatomic) NSArray *managedAccounts;

- (id)specifiers;
- (void).cxx_destruct;
- (void)_accountCellWasTappedWithSpecifier:(id)a0;
- (void)reloadNotificationPosted:(id)a0;
- (void)_reloadManagedAccounts;

@end
