@class SVXClientServiceConnection, NSString, NSMutableDictionary, NSMutableSet, AVAudioSession, NSObject, RPCompanionLinkClient;
@protocol OS_dispatch_queue;

@interface CULiveAudioServer : NSObject <SVXClientServiceConnectionDelegate, SVXClientSessionServiceDelegate> {
    NSMutableSet *_audioSessionClients;
    AVAudioSession *_audioSession;
    RPCompanionLinkClient *_messenger;
    BOOL _prefSiriLED;
    BOOL _prefSiriVOX;
    NSMutableDictionary *_sessionMap;
    SVXClientServiceConnection *_siriManager;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)liveActionPerformRequest:(id)a0 completion:(id /* block */)a1;
+ (void)liveActionSetupRequest:(id)a0 completion:(id /* block */)a1;

- (void)_activateWithCompletion:(id /* block */)a0;
- (void)activateWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (void)dealloc;
- (void)sessionService:(id)a0 willChangeStateFrom:(long long)a1 to:(long long)a2;
- (void)sessionService:(id)a0 didChangeStateFrom:(long long)a1 to:(long long)a2;
- (void)sessionService:(id)a0 willPresentFeedbackWithDialogIdentifier:(id)a1;
- (void)_audioSessionStart:(id)a0;
- (void)sessionService:(id)a0 willStartSoundWithID:(long long)a1;
- (void)sessionService:(id)a0 didStartSoundWithID:(long long)a1;
- (void)sessionService:(id)a0 didStopSoundWithID:(long long)a1 error:(id)a2;
- (void)sessionService:(id)a0 willBecomeActiveWithActivationContext:(id)a1;
- (void)peerDisconnected:(id)a0;
- (void)sessionService:(id)a0 didBecomeActiveWithActivationContext:(id)a1;
- (void)sessionService:(id)a0 willResignActiveWithOptions:(unsigned long long)a1 duration:(double)a2;
- (void)sessionService:(id)a0 didResignActiveWithDeactivationContext:(id)a1;
- (void)_audioSessionEnd:(id)a0;
- (void)clientServiceConnectionDidInvalidate:(id)a0;
- (id)clientServiceConnection:(id)a0 performerForComponent:(long long)a1;
- (void)_handleActionPrepare:(id)a0 options:(id)a1 responseHandler:(id /* block */)a2;
- (void)_prepareAlert:(long long)a0 senderID:(id)a1 completion:(id /* block */)a2;
- (void)_handleDataEvent:(id)a0 options:(id)a1;
- (void)_prepareSpeakText:(id)a0 senderID:(id)a1 completion:(id /* block */)a2;
- (void)_handleActionRequest:(id)a0 options:(id)a1 responseHandler:(id /* block */)a2;
- (void)_handleActionPlayAlert:(int)a0 senderID:(id)a1 completion:(id /* block */)a2;
- (void)_handleActionSpeakText:(id)a0 senderID:(id)a1 completion:(id /* block */)a2;
- (void)_handleStartRequest:(id)a0 options:(id)a1 responseHandler:(id /* block */)a2;
- (void)_handleStopRequest:(id)a0 options:(id)a1 responseHandler:(id /* block */)a2;
- (void)sessionService:(id)a0 didNotStartSoundWithID:(long long)a1 error:(id)a2;

@end
