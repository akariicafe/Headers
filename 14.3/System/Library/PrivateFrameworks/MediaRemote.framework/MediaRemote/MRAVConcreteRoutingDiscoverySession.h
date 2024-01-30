@class NSArray, NSString, AVOutputDeviceDiscoverySession, NSObject;
@protocol OS_dispatch_queue;

@interface MRAVConcreteRoutingDiscoverySession : MRAVRoutingDiscoverySession {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_reloadQueue;
    AVOutputDeviceDiscoverySession *_avDiscoverySession;
    unsigned int _endpointFeatures;
    unsigned int _discoveryMode;
    unsigned int _targetAudioSessionID;
    NSString *_routingContextUID;
    NSArray *_availableOutputDevices;
    BOOL _scheduledAvailableOutputDevicesReload;
    int _airplayActiveNotificationToken;
    BOOL _isLocalDeviceBeingAirplayedTo;
}

@property (class, retain, nonatomic) NSArray *daemonVirtualDevices;

@property (retain, nonatomic) NSArray *availableEndpoints;
@property (retain, nonatomic) NSArray *availableOutputDevices;
@property (readonly, nonatomic) NSArray *virtualOutputDevices;

- (void)setRoutingContextUID:(id)a0;
- (id)routingContextUID;
- (void)setDiscoveryMode:(unsigned int)a0;
- (void)setAvailableOutputDevices:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)availableEndpoints;
- (void)setTargetAudioSessionID:(unsigned int)a0;
- (void)_scheduleAvailableOutputDevicesReload;
- (BOOL)_shouldCreateClusterOutputDevices;
- (unsigned int)endpointFeatures;
- (id)initWithConfiguration:(id)a0;
- (id)description;
- (void)_onQueue_reloadAvailableOutputDevices;
- (BOOL)devicePresenceDetected;
- (unsigned int)discoveryMode;
- (void)_onQueue_reload;
- (id)availableOutputDevices;
- (unsigned int)targetAudioSessionID;
- (void)_availableOutputDevicesDidChangeNotification:(id)a0;
- (void)_scheduleReload;

@end
