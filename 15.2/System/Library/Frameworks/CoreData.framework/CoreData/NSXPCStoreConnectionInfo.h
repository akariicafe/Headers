@class NSDictionary, NSXPCStoreServerPerConnectionCache;

@interface NSXPCStoreConnectionInfo : NSObject {
    NSDictionary *_entitlements;
    NSXPCStoreServerPerConnectionCache *_cache;
    struct { unsigned int val[8]; } _token;
    id _userInfo;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (id)userInfo;
- (struct { unsigned int x0[8]; })auditToken;
- (id)description;
- (id)persistentStoreCoordinator;
- (id)entitlements;
- (void)dealloc;
- (id)initForToken:(struct { unsigned int x0[8]; })a0 entitlementNames:(id)a1 cache:(id)a2;

@end
