@class NSString, NSArray, AAUISignInFlowControllerDelegate, NSDictionary, CDPUIController, UMUserPersonaContext, AAUISpinnerViewController, UMUserPersona;
@protocol AIDAServiceOwnerProtocol, AAUISignInControllerDelegate, AAUICDPSignInDelegate;

@interface AAUISignInController : UINavigationController <AAUISignInViewControllerInternalDelegate, UIAdaptivePresentationControllerDelegate> {
    NSDictionary *_authenticationResults;
    id<AIDAServiceOwnerProtocol> _serviceOwnersManager;
    BOOL _shouldSkipDismiss;
    long long _aidaOperationUIPermissions;
    CDPUIController *_cdpUIController;
    AAUISignInFlowControllerDelegate *_flowControllerDelegate;
    UMUserPersona *_originalPersona;
    UMUserPersonaContext *_originalPersonaContext;
    long long _currentStyle;
}

@property (retain, nonatomic) AAUISpinnerViewController *spinnerViewController;
@property (retain, nonatomic, setter=_setAuthenticationResults:) NSDictionary *_authenticationResults;
@property (retain, nonatomic, setter=_setServiceOwnersManager:) id<AIDAServiceOwnerProtocol> _serviceOwnersManager;
@property (nonatomic, setter=_setShouldSkipDismiss:) BOOL _shouldSkipDismiss;
@property (nonatomic, setter=_setShouldForceOperation:) BOOL _shouldForceOperation;
@property (copy, nonatomic) NSString *username;
@property (nonatomic) BOOL canEditUsername;
@property (nonatomic) BOOL allowSkip;
@property (weak, nonatomic) id<AAUISignInControllerDelegate> delegate;
@property (weak, nonatomic) id<AAUICDPSignInDelegate> cdpDelegate;
@property (retain, nonatomic) NSString *serviceType;
@property (retain, nonatomic) NSArray *serviceTypes;
@property (copy, nonatomic) NSArray *privacyLinkIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)presentationControllerDidDismiss:(id)a0;
- (void)_commonInit;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (void)prepareInViewController:(id)a0 completion:(id /* block */)a1;
- (void)_updateStyleIfNeeded;
- (BOOL)_allowsAccountCreationForService:(id)a0;
- (void)_attemptSignInForCloudAndInactiveStoreWithContext:(id)a0 completion:(id /* block */)a1;
- (void)_attemptSignInForService:(id)a0 withAuthenticationResults:(id)a1 parentViewController:(id)a2 completion:(id /* block */)a3;
- (void)_attemptSignInForServices:(id)a0 withAuthenticationResults:(id)a1 parentViewController:(id)a2;
- (id)_continueUsingControllerForAccount:(id)a0 serviceType:(id)a1 inViewController:(id)a2 completion:(id /* block */)a3;
- (void)_delegate_signInControllerDidCancel;
- (void)_delegate_signInControllerDidCompleteWithSuccess:(BOOL)a0 error:(id)a1;
- (void)_delegate_signInControllerDidSkip;
- (void)_delegate_signInControllerFinishedWithResults:(id)a0;
- (BOOL)_isAuthenticatingPrimary:(id)a0;
- (void)_mainQueue_continueSignInWithAuthenticationResults:(id)a0 parentViewController:(id)a1;
- (void)_mainQueue_presentAlertForError:(id)a0 inViewController:(id)a1 completion:(id /* block */)a2;
- (void)_mainQueue_presentContinueUsingInViewController:(id)a0 account:(id)a1 serviceType:(id)a2 completion:(id /* block */)a3;
- (void)_mainQueue_presentSpinnerViewControllerInParentViewController:(id)a0 withCompletion:(id /* block */)a1;
- (id)_messageStringForService:(id)a0;
- (void)_performAuthenticationForAccount:(id)a0 serviceType:(id)a1 inViewController:(id)a2 completion:(id /* block */)a3;
- (BOOL)_showsServiceIconsForService:(id)a0;
- (id)_signInViewController;
- (id)_spinnerMessageForService:(id)a0;
- (id)_spinnerViewController;
- (id)serviceContextWithResults:(id)a0 parentViewController:(id)a1;
- (void)signInViewController:(id)a0 didCompleteWithAuthenticationResults:(id)a1;
- (void)signInViewControllerDidCancel:(id)a0;
- (void)signInViewControllerDidSkip:(id)a0;
- (void)willAuthenticateWithContext:(id)a0;

@end
