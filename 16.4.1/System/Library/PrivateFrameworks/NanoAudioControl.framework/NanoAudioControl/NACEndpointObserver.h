@class NSObject, _NACAVRoutingDiscoverySession;
@protocol OS_dispatch_queue;

@interface NACEndpointObserver : NSObject {
    NSObject<OS_dispatch_queue> *_serialQueue;
    _NACAVRoutingDiscoverySession *_nacDiscoverySession;
}

@property (class, readonly, nonatomic) NACEndpointObserver *sharedObserver;

- (id)init;
- (void).cxx_destruct;
- (void)fetchRouteForOriginIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)invalidateDiscoverySession;

@end
