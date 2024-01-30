@class NSArray, ACAccountStore;

@interface PSAccountEnumerator : NSObject {
    NSArray *_accounts;
    ACAccountStore *_accountStore;
    id _accountStoreDidChangeObserver;
}

@property (readonly, nonatomic) NSArray *accounts;

- (void)_accountStoreDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_stopObservingAccountStoreDidChangeNotification;
- (id)accountsForcingRefresh:(BOOL)a0;
- (void)_loadAccountsWithCompletion:(id /* block */)a0;
- (void)dealloc;
- (void)_beginObservingAccountStoreDidChangeNotification;
- (id)_accountStore;
- (id)_visibleAccountTypeIDs;

@end
