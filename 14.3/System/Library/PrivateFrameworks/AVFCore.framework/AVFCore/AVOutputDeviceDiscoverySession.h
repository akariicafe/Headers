@class NSArray, AVOutputDeviceDiscoverySessionAvailableOutputDevices, AVAudioSession, AVOutputDeviceDiscoverySessionInternal;

@interface AVOutputDeviceDiscoverySession : NSObject {
    AVOutputDeviceDiscoverySessionInternal *_outputDeviceDiscoverySession;
}

@property (readonly) struct OpaqueFigRouteDiscoverer { } *routeDiscoverer;
@property (nonatomic) long long discoveryMode;
@property (retain, nonatomic) AVAudioSession *targetAudioSession;
@property (readonly, nonatomic) NSArray *availableOutputDevices;
@property (readonly, nonatomic) AVOutputDeviceDiscoverySessionAvailableOutputDevices *availableOutputDevicesObject;
@property (readonly, nonatomic) NSArray *availableOutputDeviceGroups;
@property (readonly, nonatomic) BOOL devicePresenceDetected;

+ (void)initialize;
+ (id)outputDeviceDiscoverySessionFactory;

- (id)impl;
- (id)init;
- (void)dealloc;
- (void)outputDeviceDiscoverySessionImplDidChangeAvailableOutputDevices:(id)a0;
- (id)initWithDeviceFeatures:(unsigned long long)a0;
- (void)outputDeviceDiscoverySessionImpl:(id)a0 didExpireWithReplacement:(id)a1;
- (id)initWithOutputDeviceDiscoverySessionImpl:(id)a0;
- (void)outputDeviceDiscoverySessionImplDidChangeAvailableOutputDeviceGroups:(id)a0;

@end
