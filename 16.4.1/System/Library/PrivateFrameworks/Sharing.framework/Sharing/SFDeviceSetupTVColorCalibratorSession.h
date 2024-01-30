@class TVLDisplayColorCalibrator, SFSession, SFDevice, NSObject;
@protocol OS_dispatch_queue;

@interface SFDeviceSetupTVColorCalibratorSession : NSObject {
    BOOL _activateCalled;
    int _finishState;
    BOOL _invalidateCalled;
    int _pairSetupState;
    int _pairVerifyState;
    BOOL _sessionSecured;
    unsigned long long _startTicks;
    SFSession *_sfSession;
    int _sfSessionState;
    int _tvLatencySetupState;
    TVLDisplayColorCalibrator *_tvColorCalibrator;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) SFDevice *peerDevice;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (copy, nonatomic) id /* block */ promptForPINHandler;
@property (nonatomic) unsigned long long triggerMs;

- (void)_cleanup;
- (void)_run;
- (id)init;
- (void)_reportError:(id)a0;
- (void)activate;
- (void)invalidate;
- (void).cxx_destruct;
- (int)_runFinish;
- (void)pairSetupTryPIN:(id)a0;
- (int)_runPairVerify:(BOOL)a0;
- (void)_handleSetupActionRequest:(id)a0 responseHandler:(id /* block */)a1;
- (int)_runPairSetup;
- (void)_runSFSessionActivated;
- (int)_runSFSessionStart;
- (void)_runTVColorCalibratorProgressEvent:(unsigned long long)a0 info:(id)a1;
- (void)_runTVColorCalibratorSetup;
- (int)_runTVLatencySetup;
- (void)_runTVLatencySetupRequest;
- (void)tryAgain;

@end
