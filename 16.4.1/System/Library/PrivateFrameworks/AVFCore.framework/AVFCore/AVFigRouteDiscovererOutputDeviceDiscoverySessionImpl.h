@class AVOutputDeviceDiscoverySessionAvailableOutputDevices, NSString, AVOutputDeviceDiscoverySession, AVAudioSession, AVWeakReference;

@interface AVFigRouteDiscovererOutputDeviceDiscoverySessionImpl : NSObject <AVOutputDeviceDiscoverySessionImpl> {
    id /* block */ _routeDiscovererCreator;
    struct OpaqueAPSyncController { } *_syncController;
    AVWeakReference *_weakObserver;
}

@property (readonly, nonatomic) struct OpaqueFigRouteDiscoverer { } *routeDiscoverer;
@property (weak) AVOutputDeviceDiscoverySession *parentOutputDeviceDiscoverySession;
@property (retain, nonatomic) AVAudioSession *targetAudioSession;
@property (readonly, nonatomic) AVOutputDeviceDiscoverySessionAvailableOutputDevices *availableOutputDevicesObject;
@property (readonly, nonatomic) BOOL devicePresenceDetected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_serverDied;
- (void)_availableGroupsChanged;
- (id)initWithFigRouteDiscovererCreator:(id /* block */)a0 syncController:(struct OpaqueAPSyncController { } *)a1;
- (void)dealloc;
- (void)_routePresentChanged;
- (void)_availableRoutesChanged;
- (void)outputDeviceDiscoverySessionDidChangeDiscoveryMode:(id)a0 forClientIdentifiers:(id)a1;
- (id)init;
- (void)_endpointDescriptorChanged;
- (void).cxx_destruct;

@end
