@class NSDictionary, NSXPCStoreServerPerConnectionCache;

@interface NSXPCStoreConnectionInfo : NSObject {
    NSDictionary *_entitlements;
    NSXPCStoreServerPerConnectionCache *_cache;
    struct { unsigned int val[8]; } _token;
    id _userInfo;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (struct { unsigned int x0[8]; })auditToken;
- (id)initForToken:(struct { unsigned int x0[8]; })a0 entitlementNames:(id)a1 cache:(id)a2;
- (id)entitlements;
- (void)dealloc;
- (id)userInfo;
- (id)description;
- (id)persistentStoreCoordinator;

@end
