@class NSMutableArray, NSString, TROperationQueue, SFDevice, SFSession, AAUIGenericTermsRemoteUI, NSObject, UIViewController, TRSession, ACAccountStore;
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
    int _trSessionState;
    TRSession *_trSession;
    NSMutableArray *_trOperations;
    TROperationQueue *_trOperationQueue;
    BOOL _trAuthenticationEnabled;
    int _trAuthenticationState;
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

- (void)_run;
- (id)init;
- (void).cxx_destruct;
- (void)_cleanup;
- (void)dealloc;
- (void)_reportError:(id)a0;
- (void)activate;
- (int)_runFinish;
- (void)pairSetupTryPIN:(id)a0;
- (int)_runSFSessionStart;
- (int)_validateAccounts;
- (int)_validateiCloudAccountTerms;
- (int)_runPairVerify;
- (int)_runPairSetup;
- (int)_runInfoExchange;
- (int)_runTRSessionStart;
- (int)_runTRAuthentication;
- (void)_handleShowTermsUI:(id)a0 responseHandler:(id /* block */)a1;
- (void)_runInfoExchangeRequest;
- (id)_availableAccountsToSignIn;
- (void)_runInfoExchangeResponse:(id)a0 error:(id)a1;
- (id)_trTargetedServices;
- (void)_presentiCloudTermsUIWithAccount:(id)a0;
- (void)genericTermsRemoteUI:(id)a0 didFinishWithSuccess:(BOOL)a1;
- (void)__runFinishWithSFSession:(id)a0;
- (int)__validateAccountsWithAccountStore:(id)a0;
- (void)invalidate;

@end
