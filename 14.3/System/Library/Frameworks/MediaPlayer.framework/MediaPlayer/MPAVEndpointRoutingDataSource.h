@class NSMutableDictionary, NSString, MRAVRoutingDiscoverySessionConfiguration, NSObject;
@protocol OS_dispatch_queue;

@interface MPAVEndpointRoutingDataSource : MPAVRoutingDataSource {
    void *_discoverySession;
    void *_callbackToken;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) NSMutableDictionary *endpoints;
@property (readonly, nonatomic) MRAVRoutingDiscoverySessionConfiguration *discoverySessionConfiguration;
@property (copy, nonatomic) NSString *routingContextUID;

- (void)setDiscoveryMode:(long long)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_endpointsDidChange:(id)a0;
- (id)getRoutesForCategory:(id)a0;
- (id)initWithThrottlingEnabled:(BOOL)a0;
- (BOOL)devicePresenceDetected;
- (long long)discoveryMode;
- (void)setPickedRoute:(id)a0 withPassword:(id)a1 completion:(id /* block */)a2;

@end
