@class SSXPCConnection, SSVSubscriptionEntitlements, NSObject;
@protocol OS_dispatch_queue;

@interface SSVSubscriptionEntitlementsCoordinator : NSObject {
    SSVSubscriptionEntitlements *_cachedEntitlements;
    SSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

+ (id)sharedCoordinator;

- (id)_connection;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)_cachedSubscriptionEntitlements;
- (void)getSubscriptionEntitlementsIgnoreCaches:(BOOL)a0 entitlementsBlock:(id /* block */)a1;
- (id)_loadSubscriptionEntitlementsIgnoreCaches:(BOOL)a0 error:(id *)a1;
- (void)_setCachedSubscriptionEntitlements:(id)a0;
- (void)getSubscriptionEntitlements:(id /* block */)a0;

@end
