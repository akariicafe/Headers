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
- (long long)discoveryMode;
- (unsigned int)targetSessionID;
- (void)setPickedRoute:(id)a0 withPassword:(id)a1 completion:(id /* block */)a2;
- (id)getRoutesForCategory:(id)a0;
- (void)setTargetSessionID:(unsigned int)a0;
- (void)setDiscoveryMode:(long long)a0;
- (id)initWithThrottlingEnabled:(BOOL)a0;
- (void)_endpointsDidChange:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
