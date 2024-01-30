@class TRSession, NSString, NSMutableArray, TROperationQueue, SFDeviceOperationHomeKitSetup, SFDevice, SFSession, AAUIGenericTermsRemoteUI, NSObject, UIViewController, HMHomeManager, ACAccountStore;
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
    HMHomeManager *_homeManager;
    int _trSessionState;
    TRSession *_trSession;
    NSMutableArray *_trOperations;
    TROperationQueue *_trOperationQueue;
    BOOL _trAuthenticationEnabled;
    int _trAuthenticationState;
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

- (void)_cleanup;
- (void)pairSetupTryPIN:(id)a0;
- (void)_reportError:(id)a0;
- (int)_runSFSessionStart;
- (int)_runPairSetup;
- (void).cxx_destruct;
- (void)activate;
- (id)init;
- (void)invalidate;
- (void)_run;
- (void)dealloc;
- (int)_validateAccounts;
- (int)_validateiCloudAccountTerms;
- (int)_runPairVerify;
- (int)_runInfoExchange;
- (int)_runTRSessionStart;
- (int)_runTRAuthentication;
- (int)_runHomeKitSetup;
- (void)_handleShowTermsUI:(id)a0 responseHandler:(id /* block */)a1;
- (id)_trTargetedServices;
- (int)_runFinish;
- (void)_runInfoExchangeRequest;
- (id)_availableAccountsToSignIn;
- (void)_runInfoExchangeResponse:(id)a0 error:(id)a1;
- (void)_presentiCloudTermsUIWithAccount:(id)a0;
- (void)genericTermsRemoteUI:(id)a0 didFinishWithSuccess:(BOOL)a1;
- (void)__runFinishWithSFSession:(id)a0;
- (int)__validateAccountsWithAccountStore:(id)a0;

@end
