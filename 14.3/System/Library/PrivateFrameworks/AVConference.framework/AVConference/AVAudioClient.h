@class AVAudioDeviceList;

@interface AVAudioClient : NSObject

@property (retain, nonatomic) AVAudioDeviceList *deviceList;
@property (nonatomic) id /* block */ changeListener;

+ (id)currentOutputDevice;
+ (void)stopAudioSession;
+ (BOOL)hasActiveAudioSession;
+ (id)defaultOutputDevice;
+ (id)currentInputDevice;
+ (id)defaultInputDevice;
+ (BOOL)setOutputDevice:(id)a0;
+ (BOOL)isMicrophoneMuted;
+ (void)setMicrophoneMuted:(BOOL)a0;
+ (void)setAudioSessionProperties:(id)a0;
+ (void)startAudioSession;
+ (void)startAudioSessionWithCompletionHandler:(id /* block */)a0;
+ (BOOL)setInputDevice:(id)a0;
+ (void)initializeAudioSessionQ;
+ (void)resetAudioSessionOutputPortOverride;

- (id)outputDevices;
- (id)init;
- (void)dealloc;
- (id)devices;
- (id)inputDevices;

@end
