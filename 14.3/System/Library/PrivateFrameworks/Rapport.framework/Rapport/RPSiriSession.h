@class AVVoiceController, NSString, NSObject, AVAudioFormat;
@protocol OS_dispatch_queue, RPMessageable;

@interface RPSiriSession : NSObject <AVVoiceControllerRecordDelegate> {
    id /* block */ _activateCompletion;
    int _activateState;
    AVAudioFormat *_audioFormat;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    RPSiriSession *_selfRef;
    int _startRecordingState;
    int _stopRecordingState;
    AVVoiceController *_voiceController;
}

@property (retain, nonatomic) NSString *destinationID;
@property (retain, nonatomic) id<RPMessageable> messenger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)_activate2;
- (void)_activateWithCompletion:(id /* block */)a0;
- (void)voiceControllerDidDetectStartpoint:(id)a0;
- (void)voiceControllerRecordBufferAvailable:(id)a0 buffer:(id)a1;
- (void)voiceControllerDidStopRecording:(id)a0 forReason:(long long)a1;
- (void)voiceControllerDidStartRecording:(id)a0 successfully:(BOOL)a1 error:(id)a2;
- (void)voiceControllerDidDetectEndpoint:(id)a0 ofType:(int)a1 atTime:(double)a2;
- (void)voiceControllerEncoderErrorDidOccur:(id)a0 error:(id)a1;
- (void)voiceControllerMediaServicesWereReset:(id)a0;
- (void)_invalidated;
- (void)_invalidate;
- (void)invalidate;
- (void)_activateCompletedWithError:(id)a0;
- (BOOL)voiceControllerSetupAndReturnError:(id *)a0;
- (void)voiceControllerTearDown;

@end
