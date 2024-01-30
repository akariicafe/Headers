@class NSArray, NSString, MRAVOutputDeviceSourceInfo, NSObject, AVOutputContext;
@protocol OS_dispatch_queue;

@interface MRAVOutputContext : NSObject {
    NSArray *_outputDevices;
    NSArray *_outputDevicesSnapshot;
    MRAVOutputDeviceSourceInfo *_outputDeviceSourceInfo;
    NSObject<OS_dispatch_queue> *_serialQueue;
    BOOL _isVolumeControlAvailable;
    BOOL _attemptingLogicalDeviceRecovery;
    BOOL _postOutputDeviceChangedScheduled;
    BOOL _postOutputDevicesChangedScheduled;
    BOOL _handleOutputDeviceChangedScheduled;
    BOOL _handleOutputDevicesChangedScheduled;
    BOOL _handleDiscoverySessionOutputDevicesChangedScheduled;
    BOOL _handlingAirPlayDevicesTimeOut;
}

@property (copy, nonatomic) NSArray *outputDevices;
@property (readonly, nonatomic) unsigned int type;
@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) AVOutputContext *avOutputContext;
@property (readonly, nonatomic) NSArray *outputDeviceUIDs;
@property (readonly, nonatomic) NSArray *personalDevices;
@property (readonly, nonatomic) NSArray *personalDeviceUIDs;
@property (readonly, nonatomic) NSArray *outputDevicesSnapshot;
@property (readonly, nonatomic, getter=isVolumeControlAvailable) BOOL volumeControlAvailable;
@property (readonly, nonatomic) BOOL supportsVolumeControl;
@property (nonatomic) float volume;

+ (id)createOutputContextWithUniqueIdentifier:(id)a0;
+ (id)sharedSystemScreenContext;
+ (id)sharedAudioPresentationContext;
+ (id)sharedSystemAudioContext;

- (void)removeOutputDevices:(id)a0 withCallbackQueue:(id)a1 block:(id /* block */)a2;
- (void)attemptLogicalDeviceRecovery;
- (void)setOutputDevices:(id)a0 withCallbackQueue:(id)a1 block:(id /* block */)a2;
- (void).cxx_destruct;
- (void)_handleOutputDevicesDidChangeNotification:(id)a0;
- (void)_handleOutputDeviceSupportsVolumeDidChangeNotification:(id)a0;
- (void)removeAllOutputDevicesWithCallbackQueue:(id)a0 block:(id /* block */)a1;
- (void)dealloc;
- (void)removeOutputDevices:(id)a0 initiator:(id)a1 withCallbackQueue:(id)a2 block:(id /* block */)a3;
- (void)_handleOutputDeviceCanSetVolumeDidChangeNotification:(id)a0;
- (void)_outputContextChangeInitiatedNotification:(id)a0;
- (void)addOutputDevices:(id)a0 withCallbackQueue:(id)a1 block:(id /* block */)a2;
- (id)description;
- (void)addOutputDevices:(id)a0 initiator:(id)a1 fadeAudio:(BOOL)a2 withCallbackQueue:(id)a3 block:(id /* block */)a4;
- (void)removeOutputDevices:(id)a0 initiator:(id)a1 fadeAudio:(BOOL)a2 withCallbackQueue:(id)a3 block:(id /* block */)a4;
- (void)_handleOutputDeviceDidChangeNotification:(id)a0;
- (id)initWithAVOutputContext:(id)a0 type:(unsigned int)a1;
- (void)_handleOutputDeviceVolumeDidChangeNotification:(id)a0;
- (void)addOutputDevices:(id)a0 initiator:(id)a1 withCallbackQueue:(id)a2 block:(id /* block */)a3;
- (void)_handleDiscoverySessionOutputDevicesDidChangeNotification:(id)a0;
- (void)setOutputDevices:(id)a0 initiator:(id)a1 fadeAudio:(BOOL)a2 withCallbackQueue:(id)a3 block:(id /* block */)a4;
- (void)setOutputDevices:(id)a0 initiator:(id)a1 withCallbackQueue:(id)a2 block:(id /* block */)a3;

@end
