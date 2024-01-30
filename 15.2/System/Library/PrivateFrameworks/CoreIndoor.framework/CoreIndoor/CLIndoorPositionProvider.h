@class NSString, ServiceState;

@interface CLIndoorPositionProvider : CLIndoorXPCProvider <CLIndoorXPCProviderImplementation>

@property (retain, nonatomic) ServiceState *state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopUpdatingLocation;
- (void)withinQueueReinitializeRemoteState;
- (id)withinQueuePermanentShutdownReason;
- (id)initWithConnection:(id)a0;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (id)remoteObjectProtocol;
- (void)withinQueueReconnectInvalidatedConnectionFailed:(id)a0;
- (BOOL)withinQueueCanReinitializeRemoteState;
- (void)withinQueueInvalidateState;
- (id)endpointName;
- (void)setApiKey:(id)a0;
- (void)startUpdatingLocationAtLocation:(id)a0;
- (void)outdoorLocationAvailable:(id)a0;
- (void)gpsEstimateAvailable:(id)a0;
- (void)gpsSignalQualityAvailable:(id)a0;
- (void)clVisionNotificationAvailable:(id)a0;
- (void)setApiKey:(id)a0 onServer:(id)a1;
- (void)playbackDatarun:(id)a0;
- (void)withinQueueSetDelegate:(id)a0;
- (id)initWithApiKey:(id)a0;
- (id)initWithApiKey:(id)a0 onServer:(id)a1;

@end
