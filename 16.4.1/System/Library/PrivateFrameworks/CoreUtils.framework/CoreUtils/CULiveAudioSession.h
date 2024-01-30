@class AVVoiceController, NSArray, NSString, NSMutableSet, RPCompanionLinkClient, NSObject;
@protocol OS_dispatch_queue;

@interface CULiveAudioSession : NSObject <AVVoiceControllerRecordDelegate, CUActivatable> {
    BOOL _activateCalled;
    id /* block */ _activateCompletion;
    unsigned long long _activateTicks;
    BOOL _clinkActivated;
    RPCompanionLinkClient *_clinkClient;
    NSArray *_destinationDevices;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    BOOL _peersActivated;
    NSMutableSet *_peerSessionSet;
    CULiveAudioSession *_selfRef;
    int _sessionState;
    BOOL _sentTimingInfo;
    int _startRecordingState;
    int _stopRecordingState;
    AVVoiceController *_voiceController;
}

@property (copy, nonatomic) NSArray *destinationIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ invalidationHandler;

- (void)activateWithCompletion:(id /* block */)a0;
- (void)_run;
- (id)init;
- (void)invalidate;
- (void)_invalidate;
- (void)_invalidated;
- (void).cxx_destruct;
- (void)_reportError:(id)a0 where:(const char *)a1;
- (void)_runCLinkActivateCompleted;
- (void)_runCLinkActivateStart;
- (void)_runCLinkPeersActivateStart;
- (BOOL)_voiceControllerSetup;
- (BOOL)_voiceControllerStart;
- (void)_voiceControllerTearDown;
- (void)voiceControllerDidDetectEndpoint:(id)a0 ofType:(int)a1 atTime:(double)a2;
- (void)voiceControllerDidDetectStartpoint:(id)a0;
- (void)voiceControllerDidStartRecording:(id)a0 successfully:(BOOL)a1 error:(id)a2;
- (void)voiceControllerDidStopRecording:(id)a0 forReason:(long long)a1;
- (void)voiceControllerEncoderErrorDidOccur:(id)a0 error:(id)a1;
- (void)voiceControllerMediaServicesWereReset:(id)a0;
- (void)voiceControllerRecordBufferAvailable:(id)a0 buffer:(id)a1;

@end
