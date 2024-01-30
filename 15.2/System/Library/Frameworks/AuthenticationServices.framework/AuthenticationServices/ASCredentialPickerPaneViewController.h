@class NSString, ASCAuthorizationPresentationContext, AKASAuthorizationProvider, UIWindow, ASCredentialRequestImageSubPane, NSObject, ASCPasswordCredential, ASCredentialRequestConfirmButtonSubPane, _ASPasswordCredentialAuthenticationViewController;
@protocol OS_dispatch_queue, ASCLoginChoiceProtocol;

@interface ASCredentialPickerPaneViewController : ASCredentialRequestPaneViewController <SFCredentialProviderExtensionManagerObserver, _ASPasswordCredentialAuthenticationViewControllerDelegate, _ASAuthenticationPresentationProvider, ASCredentialRequestSubPaneConfirmButtonDelegate, UITableViewDataSource> {
    ASCAuthorizationPresentationContext *_presentationContext;
    ASCredentialRequestImageSubPane *_imageSubPane;
    ASCredentialRequestConfirmButtonSubPane *_confirmButtonSubPane;
    long long _currentlySelectedRow;
    id<ASCLoginChoiceProtocol> _previouslySelectedLoginChoice;
    AKASAuthorizationProvider *_authKitAuthorizationProvider;
    NSObject<OS_dispatch_queue> *_alertQueue;
    _ASPasswordCredentialAuthenticationViewController *_credentialProviderViewController;
    ASCPasswordCredential *_externalPasswordCredentialForSelectedLoginChoice;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIWindow *presentationAnchor;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)_serviceName;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)credentialProviderExtensionManagerExtensionListDidChange:(id)a0;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)_cellForRow:(long long)a0;
- (void)presentUIForPasswordCredentialAuthenticationViewController:(id)a0;
- (void)passwordCredentialAuthenticationViewController:(id)a0 didFinishWithCredential:(id)a1 error:(id)a2 completion:(id /* block */)a3;
- (id)initWithPresentationContext:(id)a0;
- (void)performAuthorization:(id)a0 withAuthenticatedLAContext:(id)a1;
- (void)performPasswordAuthentication:(id)a0;
- (void)userTappedContinueButton;
- (BOOL)validateReadyForAuthorization:(id)a0;
- (void)confirmButtonSubPaneDidEnterProcessingState:(id)a0 withAuthenticatedContext:(id)a1;
- (void)confirmButtonSubPaneDidFailBiometry:(id)a0;
- (void)_selectInitialLoginChoice;
- (void)_selectPreviouslySelectedLoginChoiceIfPossible:(id)a0;
- (void)_setUpView;
- (void)_configureAuthenticationPaneForSelectedLoginChoice:(id)a0;
- (void)_setUpIconViewIfNecessary;
- (void)_setUpInfoLabel;
- (void)_addAuthorizationButtonToPaneContext:(id)a0;
- (void)_addUseSecurityKeyButtonIfNeeded;
- (void)_addManuallyEnterPasswordButtonIfNeeded;
- (void)_createIconViewWithIconImage:(id)a0;
- (id)_localizedInfoString;
- (void)_useSecurityKeyButtonTapped;
- (double)_secondaryButtonBottomMargin;
- (void)_manuallyEnterPasswordButtonTapped;
- (BOOL)_shouldShowLoginChoicesInTableView;
- (void)_updateSelectedRow:(long long)a0;
- (id)_infoLabelStringForPassword;
- (id)_infoLabelStringForSignInWithApple;
- (id)_infoLabelStringForPlatformPublicKeyCredentialRegistration;
- (id)_infoLabelStringForPlatformPublicKeyCredentialAssertion;
- (id)_infoLabelStringForSecurityKeyCredentialAssertion;
- (long long)numberOfTableRows;
- (void)_setCancelButtonEnabled:(BOOL)a0;
- (BOOL)_errorIsPINRequiredError:(id)a0;
- (void)_performAuthorizationWithAuthenticatedContext:(id)a0 completionHandler:(id /* block */)a1;
- (void)_userSelectedExternalPasswordCredential;
- (void)_presentAlert:(id)a0 primaryAction:(id /* block */)a1 alternateAction:(id /* block */)a2;
- (void)authenticationProvider:(id)a0 showViewController:(id)a1;
- (void)authenticationProvider:(id)a0 hideViewController:(id)a1;
- (void)authenticationProvider:(id)a0 presentAlert:(id)a1 primaryAction:(id /* block */)a2 alternateAction:(id /* block */)a3;
- (void)reloadLoginChoices;
- (long long)_numberOfPasswordLoginChoices;

@end
