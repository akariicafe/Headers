@class NSRecursiveLock;

@interface NSHTTPCookieStorageInternal : NSObject {
    struct OpaqueCFHTTPCookieStorage { } *storage;
    struct OpaqueCFHTTPCookieStorage { } *privateStorage;
    NSRecursiveLock *dataLock;
    BOOL privateBrowsing;
}

- (void)_syncCookies;
- (void)dealloc;
- (void)registerForPostingNotificationsWithContext:(id)a0;

@end
