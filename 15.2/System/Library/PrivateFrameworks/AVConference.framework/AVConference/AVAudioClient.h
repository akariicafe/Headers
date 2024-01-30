@class AVAudioDeviceList, AVAudioDevice, AVConferenceXPCClient, NSCondition, NSObject;
@protocol OS_dispatch_queue;

@interface AVAudioClient : NSObject {
    id /* block */ _mutedTalkerNotificationHandler;
    NSObject<OS_dispatch_queue> *_clientAudioSessionQueue;
    id /* block */ _secureMicrophoneEngagedHandler;
    BOOL _audioSessionIsActive;
    BOOL _audioSessionIsStarted;
    NSCondition *_audioSessionRefCondVar;
    AVConferenceXPCClient *_xpcConnection;
    BOOL _mixingVoiceWithMediaEnabled;
    BOOL _followSystemInputEnabled;
    BOOL _followSystemOutputEnabled;
    int _processId;
}

@property (retain, nonatomic) AVAudioDeviceList *deviceList;
@property (readonly, nonatomic) AVAudioDevice *currentInputDevice;
@property (readonly, nonatomic) AVAudioDevice *currentOutputDevice;
@property (nonatomic, getter=isMicrophoneMuted) BOOL microphoneMuted;
@property (nonatomic, getter=isMixingVoiceWithMediaEnabled) BOOL mixingVoiceWithMediaEnabled;
@property (nonatomic) id /* block */ changeListener;

+ (id)sharedInstance;
+ (void)setMixingVoiceWithMediaEnabled:(BOOL)a0;
+ (id)currentInputDevice;
+ (id)currentOutputDevice;
+ (id)defaultOutputDevice;
+ (void)setAudioSessionProperties:(id)a0;
+ (BOOL)isMixingVoiceWithMediaEnabled;
+ (BOOL)setOutputDevice:(id)a0;
+ (BOOL)setInputDevice:(id)a0;
+ (void)setMicrophoneMuted:(BOOL)a0;
+ (id)defaultInputDevice;
+ (void)stopAudioSession;
+ (BOOL)isMicrophoneMuted;
+ (int)registerForMutedTalkerNotifications:(id /* block */)a0;
+ (int)unregisterFromMutedTalkerNotifications;
+ (BOOL)hasActiveAudioSession;
+ (void)startAudioSession;
+ (void)startAudioSessionWithCompletionHandler:(id /* block */)a0;
+ (void)resetAudioSessionOutputPortOverride;
+ (void)setFollowSystemInputEnabled:(BOOL)a0;
+ (void)setFollowSystemOutputEnabled:(BOOL)a0;
+ (void)registerSecureMicrophoneEngagedHandler:(id /* block */)a0;

- (id)outputDevices;
- (id)devices;
- (void)setAudioSessionProperties:(id)a0;
- (BOOL)setOutputDevice:(id)a0;
- (BOOL)setupXPCConnection;
- (id)initSharedInstance;
- (id)init;
- (BOOL)setInputDevice:(id)a0;
- (id)inputDevices;
- (void)dealloc;
- (void)stopAudioSession;
- (int)registerForMutedTalkerNotifications:(id /* block */)a0;
- (int)unregisterFromMutedTalkerNotifications;
- (BOOL)hasActiveAudioSession;
- (id)sendMessageSync:(char *)a0 arguments:(id)a1;
- (void)sendMessageAsync:(char *)a0 arguments:(id)a1 reply:(id /* block */)a2;
- (void)startAudioSessionWithCompletionHandler:(id /* block */)a0;
- (void)registerBlocksForDelegateNotifications;
- (void)cleanupXPCConnection;
- (void)cleanupSecureMicrophoneEngagedHandler;
- (void)cleanupMutedTalkerNotificationHandler;
- (void)unregisterBlocksForDelegateNotifications;
- (void)handleMutedTalkerNotificationWithXPCArguments:(id)a0;
- (void)resetAudioSessionOutputPortOverride;
- (void)setFollowSystemInputEnabled:(BOOL)a0;
- (void)setFollowSystemOutputEnabled:(BOOL)a0;
- (void)registerSecureMicrophoneEngagedHandler:(id /* block */)a0;

@end
