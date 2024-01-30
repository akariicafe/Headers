@class AVVoiceController, NSString, NSObject, AVAudioFormat;
@protocol RPMessageable, RPSiriSessionDelegate, OS_dispatch_queue, OS_dispatch_source;

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
    unsigned long long _streamId;
    NSObject<OS_dispatch_source> *_recordingLimitTimer;
    BOOL _isSourcePTTEligible;
}

@property (retain, nonatomic) NSString *destinationID;
@property (retain, nonatomic) NSString *sourceID;
@property (nonatomic) BOOL isDestinationPTTEligible;
@property (retain, nonatomic) id<RPMessageable> messenger;
@property (retain, nonatomic) id<RPSiriSessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)activateWithCompletion:(id /* block */)a0;
- (void)_activateWithCompletion:(id /* block */)a0;
- (id)init;
- (void)invalidate;
- (void)_invalidate;
- (void)prewarmWithCompletion:(id /* block */)a0;
- (void)_invalidated;
- (void).cxx_destruct;
- (void)voiceControllerAudioCallback:(id)a0 forStream:(unsigned long long)a1 buffer:(id)a2;
- (void)voiceControllerDidDetectEndpoint:(id)a0 ofType:(int)a1 atTime:(double)a2;
- (void)voiceControllerDidDetectStartpoint:(id)a0;
- (void)voiceControllerDidStartRecording:(id)a0 forStream:(unsigned long long)a1 successfully:(BOOL)a2 error:(id)a3;
- (void)voiceControllerDidStopRecording:(id)a0 forStream:(unsigned long long)a1 forReason:(long long)a2;
- (void)voiceControllerEncoderErrorDidOccur:(id)a0 error:(id)a1;
- (void)voiceControllerMediaServicesWereReset:(id)a0;
- (void)_stopRecording;
- (void)_activate2;
- (void)receivedButtonUpWithCompletion:(id /* block */)a0;
- (void)_activateCompletedWithError:(id)a0;
- (void)_recordingLimitTimerFired;
- (void)_recordingLimitTimerStart:(unsigned int)a0;
- (void)_sendSiriStop;
- (void)_startActivationWithDestinationID:(id)a0 messenger:(id)a1 completion:(id /* block */)a2;
- (BOOL)voiceControllerSetupAndReturnError:(id *)a0;
- (void)voiceControllerTearDown;

@end
