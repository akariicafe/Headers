@class SFDeviceOperationCDPSetup, SFDeviceOperationHomeKitSetup, NSSet, SFDevice, SFSession, TRSession, NSMutableArray, TROperationQueue, NSObject, UIViewController;
@protocol OS_dispatch_queue;

@interface SFDeviceSetupWHASession : NSObject {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    SFSession *_sfSession;
    int _sfSessionState;
    BOOL _sessionSecured;
    int _pairVerifyState;
    int _pairSetupState;
    int _infoExchangeState;
    unsigned long long _peerFeatureFlags;
    unsigned long long _peerProblemsFlags;
    int _trSessionState;
    TRSession *_trSession;
    NSMutableArray *_trOperations;
    TROperationQueue *_trOperationQueue;
    BOOL _trSetupConfigurationEnabled;
    int _trSetupConfigurationState;
    NSSet *_trUnauthServices;
    BOOL _trAuthenticationEnabled;
    int _trAuthenticationState;
    BOOL _cdpEnabled;
    SFDeviceOperationCDPSetup *_cdpSetupOperation;
    double _cdpSetupSecs;
    int _cdpState;
    SFDeviceOperationHomeKitSetup *_homeKitSetup;
    int _homeKitState;
    BOOL _homeKitDoFullSetup;
    int _finishState;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) SFDevice *peerDevice;
@property (retain, nonatomic) UIViewController *presentingViewController;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (copy, nonatomic) id /* block */ promptForHomeHandler;
@property (copy, nonatomic) id /* block */ promptForPINHandler;
@property (copy, nonatomic) id /* block */ promptForRoomHandler;

- (void)_cleanup;
- (void)_run;
- (void)dealloc;
- (id)init;
- (void)_reportError:(id)a0;
- (void)activate;
- (void)invalidate;
- (void).cxx_destruct;
- (int)_runFinish;
- (void)pairSetupTryPIN:(id)a0;
- (void)_runInfoExchangeResponse:(id)a0 error:(id)a1;
- (int)_runCDPSetup;
- (int)_runHomeKitSetup;
- (int)_runInfoExchange;
- (void)_runInfoExchangeRequest;
- (int)_runPairSetup;
- (int)_runPairVerify;
- (int)_runSFSessionStart;
- (int)_runTRAuthentication;
- (int)_runTRSessionStart;
- (int)_runTRSetupConfiguration;
- (BOOL)_verifyiCloudMatch:(unsigned long long)a0 error:(id *)a1;
- (void)homeKitSelectHome:(id)a0;
- (void)homeKitSelectRoom:(id)a0;

@end
