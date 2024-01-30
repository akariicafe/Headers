@class NSLock, ACAccountType, NSString, NSMutableDictionary, AAUIGenericTermsRemoteUI, CUMessageSession, UIViewController, ACAccountStore;

@interface AAUISignInFlowController : NSObject <AAUIGenericTermsRemoteUIDelegate, AAUISignInOperationDelegate> {
    ACAccountStore *_accountStore;
    ACAccountType *_appleAccountType;
    AAUIGenericTermsRemoteUI *_genericTermsRemoteUI;
    id /* block */ _pendingCompletion;
    NSMutableDictionary *_cdpContextsByAccountID;
    NSLock *_cdpContextsByAccountIDLock;
}

@property (nonatomic) BOOL ignoreLockAssertErrors;
@property (retain, nonatomic) CUMessageSession *messageSession;
@property (nonatomic) unsigned long long activationAction;
@property (nonatomic) BOOL shouldStashLoginResponse;
@property (nonatomic) BOOL shouldHideActivationLockAlert;
@property (weak, nonatomic) UIViewController *presentingViewController;
@property (nonatomic) BOOL shouldAutomaticallySaveSignInResults;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_saveAccount:(id)a0 withAllDataclassesEnabledIfPossibleWithCompletion:(id /* block */)a1;
- (void)_updateAppleAccountIfNecessary:(id)a0 withAltDSID:(id)a1 rawPassword:(id)a2;
- (void)prewarmOperationsWithCompletion:(id /* block */)a0;
- (void)signInWithIDMSAuthenticationResults:(id)a0 completion:(id /* block */)a1;
- (void)genericTermsRemoteUI:(id)a0 didFinishWithSuccess:(BOOL)a1;
- (id)_appleAccountType;
- (void)_hasActivationLockSupportedWatchWithCompletion:(id /* block */)a0;
- (id)_messageForErrorAlert:(long long)a0;
- (void)_presentExistingAccountAlert:(id)a0;
- (void)_presentUnableToSaveAccountAlert;
- (void)_presentValidationErrorAlert:(id)a0 forAccount:(id)a1 completion:(id /* block */)a2;
- (void)_promptToEnableFindMyIfPossibleWithAccount:(id)a0 completion:(id /* block */)a1;
- (void)_showGenericTermsUIforAccount:(id)a0 completion:(id /* block */)a1;
- (void)_stashLoginResponseWithAuthenticationResults:(id)a0 completion:(id /* block */)a1;
- (id)_titleForError:(id)a0 account:(id)a1;
- (void)_validateCDPStateForAccount:(id)a0 withCDPContext:(id)a1 completion:(id /* block */)a2;
- (void)_verifyLoginResponseForiCloudAccount:(id)a0 withSuccess:(BOOL)a1 response:(id)a2 error:(id)a3 completion:(id /* block */)a4;
- (void)signInOperationManager:(id)a0 didSaveAccount:(id)a1 error:(id)a2;

@end
