@class TRSession, NSString, NSMutableArray, TROperationQueue, SFDevice, SFSession, NSObject, UIViewController, SFDeviceOperationWiFiSetup, SFDeviceOperationCDPSetup, SFDeviceOperationHomeKitSetup;
@protocol OS_dispatch_queue;

@interface SFDeviceRepairSession : NSObject {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    unsigned long long _startTicks;
    int _preflightWiFiEarlyState;
    int _preflightWiFiState;
    SFSession *_sfSession;
    int _sfSessionState;
    int _pairVerifyState;
    int _getProblemsState;
    unsigned long long _problemFlags;
    BOOL _cdpEnabled;
    SFDeviceOperationCDPSetup *_cdpSetupOperation;
    double _cdpSetupSecs;
    int _cdpState;
    SFDeviceOperationHomeKitSetup *_homeKitSetupOperation;
    int _homeKitSetupState;
    SFDeviceOperationWiFiSetup *_wifiSetupOperation;
    int _wifiSetupState;
    double _wifiSetupSecs;
    int _trSessionState;
    TRSession *_trSession;
    NSMutableArray *_trOperations;
    TROperationQueue *_trOperationQueue;
    int _trAuthenticationState;
    unsigned long long _trAuthenticationStartTicks;
    double _trAuthenticationSecs;
    int _finishState;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly, copy, nonatomic) NSString *idsIdentifier;
@property (retain, nonatomic) SFDevice *peerDevice;
@property (retain, nonatomic) UIViewController *presentingViewController;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (nonatomic) unsigned int repairFlags;
@property (nonatomic) unsigned long long triggerMs;

- (void)_cleanup;
- (void)_reportError:(id)a0;
- (int)_runSFSessionStart;
- (void).cxx_destruct;
- (void)activate;
- (int)_runPreflightWiFiEarly;
- (int)_runGetProblems;
- (int)_runPreflightWiFiFull;
- (int)_runWiFiSetup;
- (int)_runCDPSetup;
- (id)init;
- (void)invalidate;
- (void)_run;
- (void)dealloc;
- (int)_runPairVerify;
- (int)_runTRSessionStart;
- (int)_runTRAuthentication;
- (int)_runHomeKitSetup;
- (int)_runFinish;

@end
