@class AVRoutingSessionManager, NSString, MPAVEndpointRoute, NSArray, MPMRAVOutputContextWrapper, MRAVRoutingDiscoverySessionConfiguration, NSObject;
@protocol OS_dispatch_queue;

@interface MPAVOutputDeviceRoutingDataSource : MPAVRoutingDataSource {
    NSObject<OS_dispatch_queue> *_serialQueue;
    BOOL _attemptedToInitializeAppOutputContext;
    void *_discoverySession;
    void *_callbackToken;
    BOOL _devicePresenceDetected;
    NSArray *_outputDeviceRoutes;
    BOOL _shouldSourceOutputDevicesFromAVODDS;
    AVRoutingSessionManager *_routingSessionManager;
}

@property (retain, nonatomic) MPMRAVOutputContextWrapper *applicationOutputContext;
@property (readonly, nonatomic) MRAVRoutingDiscoverySessionConfiguration *discoverySessionConfiguration;
@property (copy, nonatomic) NSString *routingContextUID;
@property (nonatomic) BOOL supportsMultipleSelection;
@property (nonatomic) BOOL detachesRoutesToGroup;
@property (nonatomic) BOOL supportsQueueHandoff;
@property (retain, nonatomic) MPAVEndpointRoute *endpointRoute;
@property (retain, nonatomic) NSString *initiator;
@property (nonatomic) BOOL supportsRoutePrediction;

+ (id)_globalAudioSessionLock;

- (void)setDiscoveryMode:(long long)a0;
- (void)_setShouldSourceOutputDevicesFromAVODDS:(BOOL)a0;
- (void)addRouteToGroup:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (void).cxx_destruct;
- (BOOL)routeIsLeaderOfEndpoint:(id)a0;
- (void)_unregisterNotifications;
- (void)dealloc;
- (void)createGroupFromOutputDevices:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)_endpointsDidChangeNotification:(id)a0;
- (void)_outputDevicesDidChangeNotification:(id)a0;
- (void)removeRoutesFromGroup:(id)a0 completion:(id /* block */)a1;
- (id)getRoutesForCategory:(id)a0;
- (id)routingSessionManager;
- (BOOL)_shouldDetachOutputDevicesToGroup:(id)a0;
- (BOOL)devicePresenceDetected;
- (long long)discoveryMode;
- (void)removeRouteFromGroup:(id)a0 completion:(id /* block */)a1;
- (void)setPickedRoute:(id)a0 withPassword:(id)a1 completion:(id /* block */)a2;
- (void)_registerNotifications;
- (void)_outputDevicesDidChange:(id)a0;
- (void)addRoutesToGroup:(id)a0 completion:(id /* block */)a1;
- (void)_routeStatusDidChangeNotification:(id)a0;
- (id)outputDevicesForRoutes:(id)a0;
- (id)_outputDeviceRouteWithUID:(id)a0;

@end
