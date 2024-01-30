@class _ASIncomingCallObserver, NSString, SFPasswordPickerViewController, NSURL, _ASPasswordCredentialAuthenticationViewController, _SFAuthenticationContext, NSArray;

@interface SFPasswordPickerServiceViewController : SFPasswordServiceViewController <SFCredentialProviderExtensionManagerObserver, _ASCredentialListViewControllerDelegate, _ASPasswordCredentialAuthenticationViewControllerDelegate, UIPresentationControllerDelegatePrivate, _SFAuthenticationClient, _SFAuthenticationContextDelegate, SFPasswordPickerServiceViewControllerProtocol> {
    _ASPasswordCredentialAuthenticationViewController *_externalCredentialViewController;
    SFPasswordPickerViewController *_passwordPickerViewController;
    BOOL _presentInPopover;
    BOOL _hasAuthenticationForOtherPasswords;
    NSURL *_webViewURL;
    _SFAuthenticationContext *_context;
    NSString *_remoteAppID;
    NSString *_remoteLocalizedAppName;
    NSString *_remoteUnlocalizedAppName;
    NSArray *_externallyVerifiedAssociatedDomains;
    double _authenticationGracePeriod;
    id /* block */ _presentCredentialsHandler;
    _ASIncomingCallObserver *_callObserver;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (id)_context;
- (id)authenticationMessageForContext:(id)a0;
- (void).cxx_destruct;
- (id)authenticationCustomUIProgressObserverForContext:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)displayMessageAsTitleForContext:(id)a0;
- (void)presentationControllerDidDismiss:(id)a0;
- (void)_presentCredentialListForExtension:(id)a0;
- (void)_authenticateAndSetPresentCredentialsHandlerWithCompletion:(id /* block */)a0;
- (void)_sendCredentialToClientAndDismiss:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)setWebViewURL:(id)a0;
- (void)setRemoteAppID:(id)a0;
- (void)setRemoteLocalizedAppName:(id)a0;
- (void)setRemoteUnlocalizedAppName:(id)a0;
- (void)setExternallyVerifiedAndApprovedSharedWebCredentialsDomains:(id)a0;
- (void)authenticateToPresentInPopover:(BOOL)a0 completion:(id /* block */)a1;
- (id)passcodePromptForContext:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)_authenticateToViewOtherPasswordsWithCompletion:(id /* block */)a0;
- (void)_fillCredential:(id)a0 needsAuthentication:(BOOL)a1;
- (id)_actionForPresentingPasswordManagerExtension:(id)a0;
- (void)credentialListViewController:(id)a0 didFinishWithCredential:(id)a1 completion:(id /* block */)a2;
- (void)presentUIForPasswordCredentialAuthenticationViewController:(id)a0;
- (void)passwordCredentialAuthenticationViewController:(id)a0 didFinishWithCredential:(id)a1 error:(id)a2 completion:(id /* block */)a3;
- (BOOL)contextRequiresSessionBasedAuthentication:(id)a0;
- (BOOL)contextShouldAllowPasscodeFallback:(id)a0;
- (BOOL)contextShouldAllowMultipleBiometricFailures:(id)a0;
- (void)_dismiss;
- (void)credentialProviderExtensionManagerExtensionListDidChange:(id)a0;
- (void)setAuthenticationGracePeriod:(double)a0;

@end
