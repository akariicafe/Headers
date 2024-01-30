@class NSArray, NSString, MRAVOutputDevice;

@interface MRAVOutputContext : NSObject {
    NSArray *_outputDevices;
    NSArray *_outputDevicesSnapshot;
    BOOL _postOutputDeviceChangedScheduled;
    BOOL _postOutputDevicesChangedScheduled;
    BOOL _postChangedScheduled;
}

@property (retain, nonatomic) NSArray *outputDevices;
@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) NSString *contextID;
@property (readonly, nonatomic) unsigned int type;
@property (readonly, nonatomic) NSArray *outputDevicesSnapshot;
@property (readonly, nonatomic) NSArray *outputDeviceUIDs;
@property (readonly, nonatomic) NSArray *personalDevices;
@property (readonly, nonatomic) NSArray *personalDeviceUIDs;
@property (readonly, nonatomic, getter=isVolumeControlAvailable) BOOL volumeControlAvailable;
@property (readonly, nonatomic) BOOL supportsVolumeControl;
@property (readonly, nonatomic) MRAVOutputDevice *predictedOutputDevice;
@property (nonatomic) float volume;
@property (readonly, nonatomic) BOOL supportsMultipleBluetoothOutputDevices;

+ (id)sharedSystemAudioContext;
+ (id)notificationQueue;
+ (id)sharedSystemScreenContext;
+ (id)sharedAudioPresentationContext;
+ (id)iTunesContext;

- (void)setOutputDevices:(id)a0 initiator:(id)a1 password:(id)a2 fadeAudio:(BOOL)a3 withCallbackQueue:(id)a4 block:(id /* block */)a5;
- (void)resetPredictedOutputDevice;
- (void)removeOutputDevices:(id)a0 initiator:(id)a1 fadeAudio:(BOOL)a2 withCallbackQueue:(id)a3 block:(id /* block */)a4;
- (void)setOutputDevices:(id)a0 withCallbackQueue:(id)a1 block:(id /* block */)a2;
- (void)addOutputDevices:(id)a0 withCallbackQueue:(id)a1 block:(id /* block */)a2;
- (void)setOutputDevices:(id)a0 initiator:(id)a1 withCallbackQueue:(id)a2 block:(id /* block */)a3;
- (void)setOutputDevices:(id)a0 withPassword:(id)a1 withCallbackQueue:(id)a2 block:(id /* block */)a3;
- (void)addOutputDevices:(id)a0 initiator:(id)a1 withCallbackQueue:(id)a2 block:(id /* block */)a3;
- (void)_notifyChangesInOutputDevicesWithAdded:(id)a0 removed:(id)a1 updated:(id)a2 existing:(id)a3 newDevices:(id)a4;
- (void)removeOutputDevices:(id)a0 withCallbackQueue:(id)a1 block:(id /* block */)a2;
- (void)removeOutputDevices:(id)a0 initiator:(id)a1 withCallbackQueue:(id)a2 block:(id /* block */)a3;
- (void).cxx_destruct;
- (void)_scheduleOutputContextDeviceDidChangeNotification;
- (void)_scheduleOutputContextDevicesDidChangeNotification;
- (void)_scheduleOutputContextDidChangeNotification;
- (void)_reloadWithOutputDevices:(id)a0;
- (void)addOutputDevices:(id)a0 initiator:(id)a1 fadeAudio:(BOOL)a2 withCallbackQueue:(id)a3 block:(id /* block */)a4;
- (void)removeAllOutputDevicesWithCallbackQueue:(id)a0 block:(id /* block */)a1;
- (void)_reloadOutputDevices;

@end
