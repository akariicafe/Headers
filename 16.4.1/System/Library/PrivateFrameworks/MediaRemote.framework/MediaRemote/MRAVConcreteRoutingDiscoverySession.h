@class MRCompanionConnectionController, NSArray, NSSet, NSString, AVOutputDeviceDiscoverySession, NSObject, MRAVRoutingDiscoverySession;
@protocol OS_dispatch_queue;

@interface MRAVConcreteRoutingDiscoverySession : MRAVRoutingDiscoverySession <MRCompanionConnectionControllerDelegate, MRExpanseManagerObserver> {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_reloadQueue;
    AVOutputDeviceDiscoverySession *_avDiscoverySession;
    MRAVRoutingDiscoverySession *_companionDiscoverySession;
    unsigned int _endpointFeatures;
    unsigned int _discoveryMode;
    unsigned int _targetAudioSessionID;
    unsigned int _clientProvidedTargetAudioSessionID;
    BOOL _hasRegisteredForExpanseMonitoring;
    NSString *_routingContextUID;
    NSArray *_availableOutputDevices;
    BOOL _scheduledAvailableOutputDevicesReload;
    int _airplayActiveNotificationToken;
    BOOL _isLocalDeviceBeingAirplayedTo;
    MRCompanionConnectionController *_companionController;
    MRAVRoutingDiscoverySession *_externalDiscoverySession;
    id _externalDiscoverySessionToken;
}

@property (class, retain, nonatomic) NSArray *daemonVirtualDevices;

@property (retain, nonatomic) NSArray *availableEndpoints;
@property (retain, nonatomic) NSArray *availableOutputDevices;
@property (readonly, nonatomic) NSArray *virtualOutputDevices;
@property (retain, nonatomic) NSSet *lastReportedClientIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)devicePresenceDetected;
- (void)setRoutingContextUID:(id)a0;
- (id)routingContextUID;
- (void)setTargetAudioSessionID:(unsigned int)a0;
- (unsigned int)discoveryMode;
- (unsigned int)targetAudioSessionID;
- (id)availableEndpoints;
- (unsigned int)endpointFeatures;
- (void)setDiscoveryMode:(unsigned int)a0;
- (id)availableOutputDevices;
- (void)_setupProxiedDiscoveryWithDestinationEndpoint:(id)a0;
- (void)controller:(id)a0 didDiscoverCompanion:(id)a1;
- (void)_scheduleAvailableOutputDevicesReload;
- (void)controllerDidUndiscoverCompanion:(id)a0;
- (void)_scheduleReload;
- (void)_onQueue_setTargetAudioSessionID:(unsigned int)a0;
- (BOOL)_shouldUseStandaloneDiscovery;
- (void)_deviceInfoDidChange:(id)a0;
- (void)_handleDidJoinExpanse;
- (void)setDiscoveryMode:(unsigned int)a0 forClientIdentifiers:(id)a1;
- (void)expanseManagerDidJoinExpanseSession:(id)a0;
- (void)_onQueue_reload;
- (void)setAvailableOutputDevices:(id)a0;
- (void)_setupStandaloneDiscovery;
- (id)initWithConfiguration:(id)a0;
- (id)_onQueue_reloadAvailableOutputDevices;
- (void)expanseManagerDidLeaveExpanseSession:(id)a0;
- (void).cxx_destruct;
- (void)_availableOutputDevicesDidChangeNotification:(id)a0;

@end
