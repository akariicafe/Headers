@class NSMutableDictionary, NSString, MRAVRoutingDiscoverySession, MRAVRoutingDiscoverySessionConfiguration, NSObject;
@protocol OS_dispatch_queue;

@interface MPAVEndpointRoutingDataSource : MPAVRoutingDataSource {
    MRAVRoutingDiscoverySession *_discoverySession;
    id _callbackToken;
    unsigned int _targetSessionID;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) NSMutableDictionary *endpoints;
@property (readonly, nonatomic) MRAVRoutingDiscoverySessionConfiguration *discoverySessionConfiguration;
@property (copy, nonatomic) NSString *routingContextUID;

- (BOOL)devicePresenceDetected;
- (void)setTargetSessionID:(unsigned int)a0;
- (long long)discoveryMode;
- (void)setDiscoveryMode:(long long)a0;
- (unsigned int)targetSessionID;
- (void).cxx_destruct;
- (void)_endpointsDidChange:(id)a0;
- (id)getRoutesForCategory:(id)a0;
- (id)init;
- (id)initWithThrottlingEnabled:(BOOL)a0;
- (void)dealloc;
- (void)setPickedRoute:(id)a0 withPassword:(id)a1 completion:(id /* block */)a2;

@end
