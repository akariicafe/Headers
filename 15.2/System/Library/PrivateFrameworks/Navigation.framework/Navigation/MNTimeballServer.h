@class MNTimeballCache, NSString, NSLock, MNRouteRefreshPolicyScheduler, MNTimeballRoutingProvider, NSObject, NSXPCListener, MNTimeballLocationManager, NSMutableSet;
@protocol OS_dispatch_queue;

@interface MNTimeballServer : NSObject <NSXPCListenerDelegate> {
    NSXPCListener *_listener;
    NSObject<OS_dispatch_queue> *_xpcQueue;
    MNTimeballCache *_cache;
    MNRouteRefreshPolicyScheduler *_scheduler;
    MNTimeballRoutingProvider *_routingProvider;
    MNTimeballLocationManager *_locationManager;
    NSLock *_proxyLock;
    NSMutableSet *_proxies;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultServer;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)_cache;
- (void)dealloc;
- (id)_scheduler;
- (id)_routingProvider;
- (id)_navd_localProxyForClient:(id)a0;
- (void)_navd_addProxy:(id)a0;
- (void)_navd_removeProxy:(id)a0;
- (id)_localProxyForPeer:(id)a0;
- (void)_peerDidConnectWithProxy:(id)a0;
- (void)_peerDidDisconnectWithProxy:(id)a0;

@end
