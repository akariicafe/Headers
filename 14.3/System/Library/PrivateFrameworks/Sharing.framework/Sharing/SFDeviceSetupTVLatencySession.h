@class TVLAudioLatencyEstimator, SFSession, SFDevice, NSObject;
@protocol OS_dispatch_queue;

@interface SFDeviceSetupTVLatencySession : NSObject {
    BOOL _activateCalled;
    int _finishState;
    BOOL _invalidateCalled;
    int _pairSetupState;
    int _pairVerifyState;
    BOOL _sessionSecured;
    unsigned long long _startTicks;
    SFSession *_sfSession;
    int _sfSessionState;
    TVLAudioLatencyEstimator *_tvLatencyEstimator;
    int _tvLatencySetupState;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) SFDevice *peerDevice;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (copy, nonatomic) id /* block */ promptForPINHandler;
@property (nonatomic) unsigned long long triggerMs;

- (void)_run;
- (id)init;
- (void).cxx_destruct;
- (void)_cleanup;
- (int)_runTVLatencySetup;
- (void)_reportError:(id)a0;
- (void)_runTVLatencySetupRequest;
- (void)_runTVLatencySetupEstimate;
- (void)_runTVLatencySetupProgressEvent:(unsigned long long)a0 info:(id)a1;
- (void)activate;
- (int)_runFinish;
- (void)_handleSetupActionRequest:(id)a0 responseHandler:(id /* block */)a1;
- (void)tryAgain;
- (void)_runSFSessionActivated;
- (int)_runPairVerify:(BOOL)a0;
- (void)pairSetupTryPIN:(id)a0;
- (int)_runSFSessionStart;
- (int)_runPairSetup;
- (void)invalidate;

@end
