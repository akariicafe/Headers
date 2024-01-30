@class SFDeviceOperationHomeKitSetup, SFDevice, NSObject, TROperationQueue, UIViewController, NSMutableArray, SFDeviceOperationCDPSetup, AAUIGenericTermsRemoteUI, NSString, TRSession, SFSession, HMHomeManager, ACAccountStore;
@protocol OS_dispatch_queue;

@interface SFAuthenticateAccountsSession : NSObject <AAUIGenericTermsRemoteUIDelegate> {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    unsigned long long _startTicks;
    int _accountsState;
    ACAccountStore *_accountStore;
    int _iCloudTermsState;
    AAUIGenericTermsRemoteUI *_termsRemoteUI;
    SFSession *_sfSession;
    int _sfSessionState;
    BOOL _sessionSecured;
    int _pairVerifyState;
    int _pairSetupState;
    int _infoExchangeState;
    unsigned int _targetedAccountTypes;
    unsigned long long _problemFlags;
    unsigned long long _peerFeatureFlags;
    HMHomeManager *_homeManager;
    int _trSessionState;
    TRSession *_trSession;
    NSMutableArray *_trOperations;
    TROperationQueue *_trOperationQueue;
    BOOL _trAuthenticationEnabled;
    int _trAuthenticationState;
    SFDeviceOperationCDPSetup *_cdpSetupOperation;
    int _cdpState;
    SFDeviceOperationHomeKitSetup *_homeKitSetupOperation;
    int _homeKitSetupState;
    int _finishState;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) SFDevice *peerDevice;
@property (retain, nonatomic) UIViewController *presentingViewController;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (copy, nonatomic) id /* block */ promptForPINHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_myGameCenterAccount;

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
- (void)__runFinishWithSFSession:(id)a0;
- (int)__validateAccountsWithAccountStore:(id)a0;
- (id)_availableAccountsToSignIn;
- (void)_handleShowTermsUI:(id)a0 responseHandler:(id /* block */)a1;
- (void)_presentiCloudTermsUIWithAccount:(id)a0;
- (int)_runHomeKitSetup;
- (int)_runInfoExchange;
- (void)_runInfoExchangeRequest;
- (int)_runPairSetup;
- (int)_runPairVerify;
- (int)_runRepairCDP;
- (int)_runSFSessionStart;
- (int)_runTRAuthentication;
- (int)_runTRSessionStart;
- (id)_trTargetedServices;
- (int)_validateAccounts;
- (int)_validateiCloudAccountTerms;
- (void)genericTermsRemoteUI:(id)a0 didFinishWithSuccess:(BOOL)a1;

@end
