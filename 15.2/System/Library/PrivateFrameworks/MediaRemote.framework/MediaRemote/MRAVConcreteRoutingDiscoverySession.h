@class MRCompanionConnectionController, NSArray, MRAVOutputDevice, NSString, AVOutputDeviceDiscoverySession, NSObject, MRAVRoutingDiscoverySession;
@protocol OS_dispatch_queue;

@interface MRAVConcreteRoutingDiscoverySession : MRAVRoutingDiscoverySession <MRCompanionConnectionControllerDelegate, MRExpanseManagerObserver> {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_reloadQueue;
    AVOutputDeviceDiscoverySession *_avDiscoverySession;
    MRAVRoutingDiscoverySession *_idsDiscoverySession;
    unsigned int _endpointFeatures;
    unsigned int _discoveryMode;
    unsigned int _targetAudioSessionID;
    BOOL _hasClientProvidedTargetAudioSessionID;
    BOOL _hasRegisteredForExpanseMonitoring;
    NSString *_routingContextUID;
    NSArray *_availableOutputDevices;
    BOOL _scheduledAvailableOutputDevicesReload;
    int _airplayActiveNotificationToken;
    BOOL _isLocalDeviceBeingAirplayedTo;
    MRCompanionConnectionController *_companionController;
    MRAVRoutingDiscoverySession *_companionDiscoverySession;
}

@property (class, retain, nonatomic) NSArray *daemonVirtualDevices;

@property (retain, nonatomic) NSArray *availableEndpoints;
@property (retain, nonatomic) NSArray *availableOutputDevices;
@property (retain, nonatomic) NSArray *unclusteredOutputDevices;
@property (retain, nonatomic) MRAVOutputDevice *unclusteredLocalOutputDevice;
@property (readonly, nonatomic) NSArray *virtualOutputDevices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setTargetAudioSessionID:(unsigned int)a0;
- (BOOL)devicePresenceDetected;
- (unsigned int)endpointFeatures;
- (id)availableOutputDevices;
- (unsigned int)targetAudioSessionID;
- (unsigned int)discoveryMode;
- (void)_handleDidJoinExpanse;
- (void)expanseManagerDidJoinExpanseSession:(id)a0;
- (void)_scheduleReload;
- (void)expanseManagerDidLeaveExpanseSession:(id)a0;
- (id)availableEndpoints;
- (void)_scheduleAvailableOutputDevicesReload;
- (void)setDiscoveryMode:(unsigned int)a0;
- (BOOL)_shouldCreateClusterOutputDevices;
- (void)setRoutingContextUID:(id)a0;
- (void)_onQueue_reload;
- (id)initWithConfiguration:(id)a0;
- (id)routingContextUID;
- (void)controller:(id)a0 didDiscoverCompanion:(id)a1;
- (void).cxx_destruct;
- (void)setAvailableOutputDevices:(id)a0;
- (void)_availableOutputDevicesDidChangeNotification:(id)a0;
- (void)controllerDidUndiscoverCompanion:(id)a0;
- (void)_setTargetAudioSessionID:(unsigned int)a0;
- (void)_onQueue_reloadAvailableOutputDevices;
- (void)dealloc;

@end
