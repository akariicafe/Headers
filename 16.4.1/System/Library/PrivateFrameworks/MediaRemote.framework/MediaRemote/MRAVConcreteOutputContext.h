@class MRAVConcreteOutputDevice, NSArray, NSString, MRAVOutputDeviceSourceInfo, NSMutableDictionary, NSObject, AVOutputContext;
@protocol OS_dispatch_queue;

@interface MRAVConcreteOutputContext : MRAVOutputContext {
    NSString *_uniqueIdentifier;
    unsigned int _type;
    NSArray *_concreteOutputDevices;
    MRAVConcreteOutputDevice *_predictedOutputDevice;
    MRAVOutputDeviceSourceInfo *_outputDeviceSourceInfo;
    NSObject<OS_dispatch_queue> *_serialQueue;
    BOOL _attemptingLogicalDeviceRecovery;
    BOOL _handlingAirPlayDevicesTimeOut;
    AVOutputContext *_avOutputContext;
    NSMutableDictionary *_notifications;
}

@property (class, readonly, nonatomic) AVOutputContext *outputContextForLocalDevice;
@property (class, copy, nonatomic) id /* block */ outputContextForLocalDeviceDataSource;

@property (retain, nonatomic) AVOutputContext *avOutputContext;
@property (copy, nonatomic) NSArray *concreteOutputDevices;
@property (nonatomic) BOOL isVolumeControlAvailable;

+ (id)sharedAudioPresentationContext;
+ (id)iTunesContext;
+ (id)sharedSystemScreenContext;
+ (id)createOutputContextWithUniqueIdentifier:(id)a0;
+ (id)sharedSystemAudioContext;

- (id)predictedOutputDevice;
- (unsigned int)volumeControlCapabilities;
- (void)resetPredictedOutputDevice;
- (void)adjustVolume:(long long)a0;
- (void)_handleOutputDeviceCanSetVolumeDidChangeNotification:(id)a0;
- (void)addOutputDevices:(id)a0 initiator:(id)a1 fadeAudio:(BOOL)a2 withCallbackQueue:(id)a3 block:(id /* block */)a4;
- (id)contextID;
- (void)_handlePredictedOutputDeviceDidChangeNotification:(id)a0;
- (void)removeAllOutputDevicesWithCallbackQueue:(id)a0 block:(id /* block */)a1;
- (void)_handleOutputDevicesDidChangeNotification:(id)a0;
- (unsigned int)type;
- (void)removeOutputDevices:(id)a0 initiator:(id)a1 fadeAudio:(BOOL)a2 withCallbackQueue:(id)a3 block:(id /* block */)a4;
- (BOOL)supportsMultipleBluetoothOutputDevices;
- (void)setVolume:(float)a0;
- (void)_handleLocalDeviceDidChangeOutputContextNotification:(id)a0;
- (void)_handleClusterMemberVolumeControlTypeDidChangeNotification:(id)a0;
- (void)_outputContextChangeInitiatedNotification:(id)a0;
- (id)debugDescription;
- (void)dealloc;
- (void)setOutputDevices:(id)a0 initiator:(id)a1 password:(id)a2 fadeAudio:(BOOL)a3 withCallbackQueue:(id)a4 block:(id /* block */)a5;
- (void)_handleOutputDeviceVolumeDidChangeNotification:(id)a0;
- (void)_reloadOutputDevices;
- (BOOL)supportsVolumeControl;
- (id)description;
- (float)volume;
- (void)_handleClusterMemberVolumeDidChangeNotification:(id)a0;
- (void)_handleOutputDeviceDidChangeNotification:(id)a0;
- (void)attemptLogicalDeviceRecovery;
- (void).cxx_destruct;
- (void)_handleOutputContextSupportsVolumeDidChangeNotification:(id)a0;
- (id)initWithAVOutputContext:(id)a0 type:(unsigned int)a1;
- (id)uniqueIdentifier;

@end
