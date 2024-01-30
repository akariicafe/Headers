@class NSArray, NSString, MRAVOutputDeviceSourceInfo, NSMutableDictionary, NSObject, AVOutputContext;
@protocol OS_dispatch_queue;

@interface MRAVConcreteOutputContext : MRAVOutputContext {
    NSString *_uniqueIdentifier;
    unsigned int _type;
    NSArray *_concreteOutputDevices;
    MRAVOutputDeviceSourceInfo *_outputDeviceSourceInfo;
    NSObject<OS_dispatch_queue> *_serialQueue;
    BOOL _attemptingLogicalDeviceRecovery;
    BOOL _handlingAirPlayDevicesTimeOut;
    NSMutableDictionary *_notifications;
}

@property (class, readonly, nonatomic) AVOutputContext *outputContextForLocalDevice;
@property (class, copy, nonatomic) id /* block */ outputContextForLocalDeviceDataSource;

@property (retain, nonatomic) AVOutputContext *avOutputContext;
@property (copy, nonatomic) NSArray *concreteOutputDevices;
@property (nonatomic) BOOL isVolumeControlAvailable;

+ (id)sharedSystemAudioContext;
+ (id)sharedSystemScreenContext;
+ (id)createOutputContextWithUniqueIdentifier:(id)a0;
+ (id)sharedAudioPresentationContext;
+ (id)iTunesContext;

- (void)setVolume:(float)a0;
- (float)volume;
- (void)setOutputDevices:(id)a0 initiator:(id)a1 password:(id)a2 fadeAudio:(BOOL)a3 withCallbackQueue:(id)a4 block:(id /* block */)a5;
- (BOOL)supportsVolumeControl;
- (void)resetPredictedOutputDevice;
- (void)removeOutputDevices:(id)a0 initiator:(id)a1 fadeAudio:(BOOL)a2 withCallbackQueue:(id)a3 block:(id /* block */)a4;
- (void)_handleLocalDeviceDidChangeOutputContextNotification:(id)a0;
- (id)predictedOutputDevice;
- (id)initWithAVOutputContext:(id)a0 type:(unsigned int)a1;
- (void)_handleOutputContextSupportsVolumeDidChangeNotification:(id)a0;
- (id)uniqueIdentifier;
- (void)_handlePredictedOutputDeviceDidChangeNotification:(id)a0;
- (id)contextID;
- (id)description;
- (void)_handleOutputDeviceVolumeDidChangeNotification:(id)a0;
- (void).cxx_destruct;
- (void)_outputContextChangeInitiatedNotification:(id)a0;
- (void)_handleOutputDeviceCanSetVolumeDidChangeNotification:(id)a0;
- (void)_handleOutputDevicesDidChangeNotification:(id)a0;
- (BOOL)supportsMultipleBluetoothOutputDevices;
- (void)_handleOutputDeviceDidChangeNotification:(id)a0;
- (void)addOutputDevices:(id)a0 initiator:(id)a1 fadeAudio:(BOOL)a2 withCallbackQueue:(id)a3 block:(id /* block */)a4;
- (unsigned int)type;
- (void)dealloc;
- (void)removeAllOutputDevicesWithCallbackQueue:(id)a0 block:(id /* block */)a1;
- (void)attemptLogicalDeviceRecovery;
- (void)_reloadOutputDevices;
- (id)debugDescription;

@end
