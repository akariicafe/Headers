@class NSArray, WBSPasswordBreachHelperProxy;

@interface WBSRecentlyBreachedPasswordProvider : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    WBSPasswordBreachHelperProxy *_helperProxy;
    BOOL _recentlyBreachedSavedAccountsLookupStarted;
    NSArray *_recentlyBreachedSavedAccounts;
}

@property (class, readonly, nonatomic) WBSRecentlyBreachedPasswordProvider *sharedProvider;

@property (readonly, copy, nonatomic) NSArray *recentlyBreachedSavedAccountsIfAvailable;

- (void)_accountStoreDidChange:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_getRecentlyBreachedSavedAccountsWithCompletionHandler:(id /* block */)a0;
- (void)clearRecentlyBreachedSavedAccounts;

@end
