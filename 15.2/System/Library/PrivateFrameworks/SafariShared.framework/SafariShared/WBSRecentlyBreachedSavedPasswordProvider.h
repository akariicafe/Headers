@class NSArray, WBSPasswordBreachHelperProxy;

@interface WBSRecentlyBreachedSavedPasswordProvider : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    WBSPasswordBreachHelperProxy *_helperProxy;
    BOOL _recentlyBreachedSavedPasswordsLookupStarted;
    NSArray *_recentlyBreachedSavedPasswords;
}

@property (class, readonly, nonatomic) WBSRecentlyBreachedSavedPasswordProvider *sharedProvider;

@property (readonly, copy, nonatomic) NSArray *recentlyBreachedSavedPasswordsIfAvailable;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_passwordStoreDidChange:(id)a0;
- (void)_getRecentlyBreachedSavedPasswordsWithCompletionHandler:(id /* block */)a0;
- (void)clearRecentlyBreachedSavedPasswords;

@end
