@class NSArray, NSMutableDictionary, NSXPCConnection, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface MRAVDistantRoutingDiscoverySession : MRAVRoutingDiscoverySession <MRAVDistantRoutingDiscoveryClientProtocol> {
    NSObject<OS_dispatch_queue> *_serialQueue;
    unsigned int _endpointFeatures;
    unsigned int _discoveryMode;
    BOOL _enableThrottling;
    NSArray *_distantEndpoints;
    NSArray *_distantOutputDevices;
    NSString *_routingContextUID;
    int _serviceResetNotifyToken;
    BOOL _hostedRoutingConnectionDidInitialize;
}

@property (retain, nonatomic) NSXPCConnection *hostedRoutingSessionConnection;
@property (retain, nonatomic) NSArray *distantEndpoints;
@property (retain, nonatomic) NSArray *distantOutputDevices;
@property (retain, nonatomic) NSMutableDictionary *distantExternalDevices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clientInterface;
+ (id)serviceInterface;

- (void)_initializeHostedRoutingConnectionWithCompletion:(id /* block */)a0;
- (BOOL)devicePresenceDetected;
- (unsigned int)endpointFeatures;
- (id)availableOutputDevices;
- (unsigned int)discoveryMode;
- (id)availableEndpoints;
- (void)setDiscoveryMode:(unsigned int)a0;
- (void)setRoutingContextUID:(id)a0;
- (void)_reloadAvailableDistantEndpointsWithEndpoints:(id)a0;
- (void)_reloadAvailableDistantOutputDevices;
- (BOOL)_shouldAddLocalEndpoint;
- (id)initWithConfiguration:(id)a0;
- (id)routingContextUID;
- (void).cxx_destruct;
- (void)availableEndpointsDidChange:(id)a0;
- (void)_reloadAvailableDistantEndpoints;
- (id)_hostedRoutingConnection;
- (void)availableOutputDevicesDidChange:(id)a0;
- (void)dealloc;
- (void)_reloadAvailableDistantOutputDevicesWithOutputDevices:(id)a0;
- (void)_reloadHostedRoutingServiceDiscoveryMode;

@end
