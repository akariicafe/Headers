@class AVVoiceController, NSString, NSDictionary, CKAudioAnalyzer, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, CKVoiceControllerDelegate;

@interface CKVoiceController : NSObject <AVVoiceControllerRecordDelegate>

@property (nonatomic, setter=_setActivationMode:) long long _activationMode;
@property (copy, nonatomic) NSDictionary *recordSettings;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *powerUpdateTimer;
@property (retain, nonatomic) AVVoiceController *voiceController;
@property (retain, nonatomic) CKAudioAnalyzer *audioAnalyzer;
@property (weak, nonatomic) id<CKVoiceControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)playAlertSoundForType:(int)a0;
- (void).cxx_destruct;
- (void)cleanup;
- (void)dealloc;
- (void)stop;
- (void)messageSent:(id)a0;
- (void)voiceControllerDidStopRecordingForClientError;
- (void)stopUpdatingPower;
- (void)voiceControllerDidDetectStartpoint:(id)a0;
- (void)startUpdatingPower;
- (void)voiceControllerRecordBufferAvailable:(id)a0 buffer:(id)a1;
- (void)voiceControllerDidStopRecording:(id)a0 forReason:(long long)a1;
- (void)voiceControllerDidStartRecording:(id)a0 successfully:(BOOL)a1;
- (void)releaseAudioSession;
- (id)initWithActivationMode:(long long)a0 recordSettings:(id)a1 queue:(id)a2;
- (void)record;
- (void)setActivationMode:(long long)a0;

@end
