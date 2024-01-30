@class ACAccountStore, NSMutableArray;

@interface AAAccountManager : NSObject {
    ACAccountStore *_accountStore;
    NSMutableArray *_accounts;
    NSMutableArray *_originalAccounts;
    id _accountStoreDidChangeObserver;
}

@property (class, readonly) AAAccountManager *sharedManager;

- (void)removeAccount:(id)a0;
- (id)accounts;
- (id)primaryAccount;
- (void)addAccount:(id)a0;
- (void)updateAccount:(id)a0;
- (void)_beginObservingAccountStoreDidChangeNotification;
- (void)reloadAccounts;
- (id)accountWithIdentifier:(id)a0;
- (id)accountsEnabledForDataclass:(id)a0;
- (void)_stopObservingAccountStoreDidChangeNotification;
- (void)saveAllAccounts;
- (void).cxx_destruct;
- (void)dealloc;
- (id)accountWithPersonID:(id)a0;
- (id)_accountStore;
- (id)accountWithUsername:(id)a0;

@end
