@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface MPAVTelevisionRoutingDataSource : MPAVRoutingDataSource {
    void *_discoveryController;
    NSMutableArray *_discoveredTelevisions;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

- (void)setDiscoveryMode:(long long)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)getRoutesForCategory:(id)a0;
- (BOOL)devicePresenceDetected;
- (id)_discoveredTelevisions;
- (void)getPickedRouteHasVolumeControlWithCompletion:(id /* block */)a0;
- (void)_onQueue_controllerDidDiscoverTelevision:(void *)a0;
- (void)_onQueue_controllerDidRemoveTelevision:(void *)a0;

@end
