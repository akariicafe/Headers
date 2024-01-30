@class NSArray;

@interface DMCManagedAccountsSpecifierProvider : DMCSpecifierProvider

@property (retain, nonatomic) NSArray *managedAccounts;
@property (nonatomic) BOOL isReloadingManagedAccounts;

- (void)reloadNotificationPosted:(id)a0;
- (void)_accountCellWasTappedWithSpecifier:(id)a0;
- (void)_reloadManagedAccounts;
- (id)initWithAccountManager:(id)a0;
- (id)specifiers;
- (void).cxx_destruct;

@end
