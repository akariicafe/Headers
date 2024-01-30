@class ACAccountStore, NSMutableArray;

@interface AAAccountManager : NSObject {
    ACAccountStore *_accountStore;
    NSMutableArray *_accounts;
    NSMutableArray *_originalAccounts;
    id _accountStoreDidChangeObserver;
}

@property (class, readonly) AAAccountManager *sharedManager;

- (void)addAccount:(id)a0;
- (id)accounts;
- (void)reloadAccounts;
- (void).cxx_destruct;
- (void)_stopObservingAccountStoreDidChangeNotification;
- (id)accountsEnabledForDataclass:(id)a0;
- (id)accountWithUsername:(id)a0;
- (id)accountWithPersonID:(id)a0;
- (void)saveAllAccounts;
- (void)dealloc;
- (id)primaryAccount;
- (void)_beginObservingAccountStoreDidChangeNotification;
- (id)_accountStore;
- (void)removeAccount:(id)a0;
- (id)accountWithIdentifier:(id)a0;
- (void)updateAccount:(id)a0;

@end
