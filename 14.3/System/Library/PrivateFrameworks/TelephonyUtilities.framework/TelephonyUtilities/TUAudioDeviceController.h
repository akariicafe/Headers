@class AVAudioClient, AVAudioDevice, NSHashTable, NSArray, NSObject, NSString;
@protocol OS_dispatch_queue, TUAudioDeviceControllerActions;

@interface TUAudioDeviceController : NSObject <TUAudioDeviceControllerActions>

@property (retain, nonatomic) AVAudioClient *audioClient;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) NSHashTable *delegates;
@property (weak, nonatomic) id<TUAudioDeviceControllerActions> actionsDelegate;
@property (retain, nonatomic) AVAudioDevice *currentInputDevice;
@property (retain, nonatomic) AVAudioDevice *currentOutputDevice;
@property (readonly, nonatomic) NSArray *devices;
@property (readonly, nonatomic) NSArray *inputDevices;
@property (readonly, nonatomic) NSArray *outputDevices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeDelegate:(id)a0;
- (oneway void)setCurrentAudioOutputDeviceToDeviceWithUID:(id)a0;
- (void)addDelegate:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (oneway void)setCurrentAudioInputDeviceToDeviceWithUID:(id)a0;
- (id)initWithActionsDelegate:(id)a0 serialQueue:(id)a1;

@end
