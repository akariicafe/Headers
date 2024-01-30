@class NSString, ServiceState;

@interface CLIndoorPositionProvider : CLIndoorXPCProvider <CLIndoorXPCProviderImplementation>

@property (retain, nonatomic) ServiceState *state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)withinQueueReinitializeRemoteState;
- (id)endpointName;
- (id)remoteObjectProtocol;
- (void)stopUpdatingLocation;
- (void)withinQueueReconnectInvalidatedConnectionFailed:(id)a0;
- (void)setDelegate:(id)a0;
- (id)withinQueuePermanentShutdownReason;
- (id)initWithConnection:(id)a0;
- (void)withinQueueInvalidateState;
- (void).cxx_destruct;
- (BOOL)withinQueueCanReinitializeRemoteState;
- (id)initWithApiKey:(id)a0;
- (void)clVisionNotificationAvailable:(id)a0;
- (void)gpsEstimateAvailable:(id)a0;
- (void)gpsSignalQualityAvailable:(id)a0;
- (id)initWithApiKey:(id)a0 onServer:(id)a1;
- (void)outdoorLocationAvailable:(id)a0;
- (void)playbackDatarun:(id)a0;
- (void)setApiKey:(id)a0;
- (void)setApiKey:(id)a0 onServer:(id)a1;
- (void)startUpdatingLocationAtLocation:(id)a0;
- (void)withinQueueSetDelegate:(id)a0;

@end
