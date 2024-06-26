@class NSString, SFSiriRequest, VSSpeechSynthesizer, SVXClientServiceManager, SVXDeviceSetupContext, NSObject, NSMutableArray, SVXDeviceSetupFlowScene;
@protocol OS_dispatch_queue, OS_dispatch_source, SVXClientDeviceServicing;

@interface SFSiriClient : NSObject <VSSpeechSynthesizerDelegate, SVXClientSessionServiceDelegate> {
    BOOL _invalidateCalled;
    unsigned int _invalidateFlags;
    SFSiriRequest *_currentRequest;
    NSObject<OS_dispatch_source> *_currentTimer;
    NSString *_languageCode;
    NSMutableArray *_requests;
    VSSpeechSynthesizer *_speechSynthesizer;
    SVXDeviceSetupContext *_siriDeviceSetupContext;
    SVXClientServiceManager *_siriDeviceSetupManager;
    id<SVXClientDeviceServicing> _siriDeviceSetupService;
    SVXDeviceSetupFlowScene *_deviceSetupSceneIntro;
    SVXDeviceSetupFlowScene *_deviceSetupSceneDialogA;
    SVXDeviceSetupFlowScene *_deviceSetupSceneDialogB;
    SVXDeviceSetupFlowScene *_deviceSetupSceneDialogC;
    SVXDeviceSetupFlowScene *_deviceSetupSceneOutro;
    SVXClientServiceManager *_siriServiceManager;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) id /* block */ siriDialogHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_deviceSetupEnd;
- (void)_speakPasscode:(id)a0 instructions:(id)a1 languageCode:(id)a2 voiceName:(id)a3 flags:(unsigned int)a4 completion:(id /* block */)a5;
- (void)speakText:(id)a0 rate:(double)a1 completion:(id /* block */)a2;
- (void)_speakText:(id)a0 languageCode:(id)a1 flags:(unsigned int)a2 rate:(double)a3 delay:(double)a4 startHandler:(id /* block */)a5 completion:(id /* block */)a6;
- (void)_deviceSetupPrepareGreetingFlow:(id)a0 error:(id)a1 completion:(id /* block */)a2;
- (void)_deviceSetupSaveIntroTimings:(id)a0 details:(id)a1;
- (void)_deviceSetupSaveDialogATimings:(id)a0 details:(id)a1;
- (void)_deviceSetupSaveDialogBTimings:(id)a0 details:(id)a1;
- (void)_deviceSetupSaveDialogCTimings:(id)a0 details:(id)a1;
- (void)_deviceSetupPlayGreetingID:(int)a0 completion:(id /* block */)a1;
- (void)speechSynthesizer:(id)a0 withRequest:(id)a1 didReceiveTimingInfo2:(id)a2;
- (void)speechSynthesizer:(id)a0 didFinishSynthesisRequest:(id)a1 withInstrumentMetrics:(id)a2 error2:(id)a3;
- (void)startDelayedRequest:(id)a0;
- (void)preWarmDeviceSetupWelcomePhaseWithCompletion:(id /* block */)a0;
- (void)speakDeviceSetupWelcomePhaseWithCompletion:(id /* block */)a0;
- (void)speakText:(id)a0 completion:(id /* block */)a1;
- (void)speakText:(id)a0 languageCode:(id)a1 completion:(id /* block */)a2;
- (void)_invalidate;
- (void)invalidateWithFlags:(unsigned int)a0;
- (void)_completeRequest:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (void)activate;
- (id)init;
- (void)_activate;
- (void)deviceSetupEnd;
- (void)speakPasscode:(id)a0 instructions:(id)a1 languageCode:(id)a2 voiceName:(id)a3 flags:(unsigned int)a4 completion:(id /* block */)a5;
- (void)deviceSetupPlayGreetingID:(int)a0 completion:(id /* block */)a1;
- (void)deviceSetupBegin:(unsigned long long)a0;
- (void)deviceSetupPrepareGreeting:(id /* block */)a0;
- (void)speakText:(id)a0 flags:(unsigned int)a1 rate:(double)a2 delay:(double)a3 startHandler:(id /* block */)a4 completion:(id /* block */)a5;
- (void)invalidate;
- (void)speechSynthesizer:(id)a0 didStartSpeakingRequest:(id)a1;
- (void)speechSynthesizer:(id)a0 withRequest:(id)a1 didReceiveTimingInfo:(id)a2;
- (void)speechSynthesizer:(id)a0 didFinishSpeakingRequest:(id)a1 successfully:(BOOL)a2 phonemesSpoken:(id)a3 withError:(id)a4;
- (void)speechSynthesizer:(id)a0 didFinishSynthesisRequest:(id)a1 withInstrumentMetrics:(id)a2 error:(id)a3;
- (void)_processQueuedRequests;
- (void)stopSpeaking;
- (void)_completeAllRequestsWithError:(id)a0;
- (void)speechSynthesizer:(id)a0 didFinishSpeakingRequest:(id)a1 successfully:(BOOL)a2 withError2:(id)a3;
- (void)sessionService:(id)a0 willChangeStateFrom:(long long)a1 to:(long long)a2;
- (void)sessionService:(id)a0 didChangeStateFrom:(long long)a1 to:(long long)a2;
- (void)sessionService:(id)a0 willPresentFeedbackWithDialogIdentifier:(id)a1;
- (void)sessionService:(id)a0 willStartSoundWithID:(long long)a1;
- (void)sessionService:(id)a0 didStartSoundWithID:(long long)a1;
- (void)sessionService:(id)a0 didStopSoundWithID:(long long)a1 error:(id)a2;
- (void)sessionService:(id)a0 willBecomeActiveWithActivationContext:(id)a1;
- (void)sessionService:(id)a0 didBecomeActiveWithActivationContext:(id)a1;
- (void)sessionService:(id)a0 willResignActiveWithOptions:(unsigned long long)a1 duration:(double)a2;
- (void)sessionService:(id)a0 didResignActiveWithDeactivationContext:(id)a1;
- (void)sessionService:(id)a0 didNotStartSoundWithID:(long long)a1 error:(id)a2;

@end
