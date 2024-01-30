@class AVAudioDeviceList, AVAudioDevice, AVConferenceXPCClient, NSCondition, NSObject;
@protocol OS_dispatch_queue;

@interface AVAudioClient : NSObject {
    unsigned int _connectionAttempts;
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
+ (void)startAudioSession;
+ (id)defaultInputDevice;
+ (id)defaultOutputDevice;
+ (id)currentInputDevice;
+ (id)currentOutputDevice;
+ (void)setMixingVoiceWithMediaEnabled:(BOOL)a0;
+ (BOOL)hasActiveAudioSession;
+ (int)registerForMutedTalkerNotifications:(id /* block */)a0;
+ (void)setAudioSessionProperties:(id)a0;
+ (int)unregisterFromMutedTalkerNotifications;
+ (BOOL)isMicrophoneMuted;
+ (void)setMicrophoneMuted:(BOOL)a0;
+ (BOOL)setOutputDevice:(id)a0;
+ (BOOL)setInputDevice:(id)a0;
+ (BOOL)isMixingVoiceWithMediaEnabled;
+ (void)registerSecureMicrophoneEngagedHandler:(id /* block */)a0;
+ (void)resetAudioSessionOutputPortOverride;
+ (void)setFollowSystemInputEnabled:(BOOL)a0;
+ (void)setFollowSystemOutputEnabled:(BOOL)a0;
+ (void)startAudioSessionWithCompletionHandler:(id /* block */)a0;
+ (void)stopAudioSession;

- (id)devices;
- (id)inputDevices;
- (BOOL)setupXPCConnection;
- (id)initSharedInstance;
- (id)outputDevices;
- (void)dealloc;
- (id)init;
- (BOOL)hasActiveAudioSession;
- (int)registerForMutedTalkerNotifications:(id /* block */)a0;
- (void)setAudioSessionProperties:(id)a0;
- (int)unregisterFromMutedTalkerNotifications;
- (BOOL)setOutputDevice:(id)a0;
- (BOOL)setInputDevice:(id)a0;
- (void)cleanupMutedTalkerNotificationHandler;
- (void)cleanupSecureMicrophoneEngagedHandler;
- (void)cleanupXPCConnection;
- (void)handleMutedTalkerNotificationWithXPCArguments:(id)a0;
- (void)registerBlocksForDelegateNotifications;
- (void)registerSecureMicrophoneEngagedHandler:(id /* block */)a0;
- (BOOL)reregisterMutedTalkerNotificationOverXPC;
- (void)resetAudioSessionOutputPortOverride;
- (void)resetXPCConnection;
- (void)sendMessageAsync:(char *)a0 arguments:(id)a1 reply:(id /* block */)a2;
- (id)sendMessageSync:(char *)a0 arguments:(id)a1;
- (void)setFollowSystemInputEnabled:(BOOL)a0;
- (void)setFollowSystemOutputEnabled:(BOOL)a0;
- (void)startAudioSessionWithCompletionHandler:(id /* block */)a0;
- (void)stopAudioSession;
- (void)unregisterBlocksForDelegateNotifications;

@end
