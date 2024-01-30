@class ACAccountStore, NSMutableArray;

@interface AAAccountManager : NSObject {
    ACAccountStore *_accountStore;
    NSMutableArray *_accounts;
    NSMutableArray *_originalAccounts;
    id _accountStoreDidChangeObserver;
}

@property (class, readonly) AAAccountManager *sharedManager;

- (void)reloadAccounts;
- (void)removeAccount:(id)a0;
- (void)addAccount:(id)a0;
- (id)accounts;
- (id)accountWithIdentifier:(id)a0;
- (void)_beginObservingAccountStoreDidChangeNotification;
- (void)saveAllAccounts;
- (id)_accountStore;
- (id)accountWithPersonID:(id)a0;
- (void)_stopObservingAccountStoreDidChangeNotification;
- (id)primaryAccount;
- (id)accountWithUsername:(id)a0;
- (void)dealloc;
- (void)updateAccount:(id)a0;
- (id)accountsEnabledForDataclass:(id)a0;
- (void).cxx_destruct;

@end
