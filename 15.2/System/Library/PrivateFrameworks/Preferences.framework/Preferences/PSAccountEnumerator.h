@class NSArray, ACAccountStore;

@interface PSAccountEnumerator : NSObject {
    NSArray *_accounts;
    ACAccountStore *_accountStore;
    id _accountStoreDidChangeObserver;
}

@property (readonly, nonatomic) NSArray *accounts;

- (void)_beginObservingAccountStoreDidChangeNotification;
- (void)_accountStoreDidChange:(id)a0;
- (void)_stopObservingAccountStoreDidChangeNotification;
- (void).cxx_destruct;
- (void)_loadAccountsWithCompletion:(id /* block */)a0;
- (id)accountsForcingRefresh:(BOOL)a0;
- (id)_visibleAccountTypeIDs;
- (void)dealloc;
- (id)_accountStore;

@end
