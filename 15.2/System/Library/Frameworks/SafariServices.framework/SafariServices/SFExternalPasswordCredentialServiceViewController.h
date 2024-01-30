@class NSString, _ASPasswordCredentialAuthenticationViewController, _SFAuthenticationContext;

@interface SFExternalPasswordCredentialServiceViewController : SFPasswordServiceViewController <SFCredentialProviderExtensionManagerObserver, _ASPasswordCredentialAuthenticationViewControllerDelegate, _SFAuthenticationClient, _SFAuthenticationContextDelegate, SFExternalPasswordCredentialServiceViewControllerProtocol> {
    _SFAuthenticationContext *_authenticationContext;
    _ASPasswordCredentialAuthenticationViewController *_extensionController;
    long long _completionAction;
    id /* block */ _getCredentialCompletion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (void)credentialProviderExtensionManagerExtensionListDidChange:(id)a0;
- (id)authenticationMessageForContext:(id)a0;
- (id)_authenticationContext;
- (BOOL)displayMessageAsTitleForContext:(id)a0;
- (id)passcodePromptForContext:(id)a0;
- (void).cxx_destruct;
- (id)authenticationCustomUIProgressObserverForContext:(id)a0;
- (void)_dismiss;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)autoFillWithCredentialIdentity:(id)a0;
- (void)getCredentialForCredentialIdentity:(id)a0 completion:(id /* block */)a1;
- (void)presentUIForPasswordCredentialAuthenticationViewController:(id)a0;
- (void)passwordCredentialAuthenticationViewController:(id)a0 didFinishWithCredential:(id)a1 error:(id)a2 completion:(id /* block */)a3;
- (BOOL)contextRequiresSessionBasedAuthentication:(id)a0;
- (BOOL)contextShouldAllowPasscodeFallback:(id)a0;
- (BOOL)contextShouldAllowMultipleBiometricFailures:(id)a0;
- (void)_finishRequestToAutoFillCredential:(id)a0 extensionShowedUI:(BOOL)a1 error:(id)a2 completion:(id /* block */)a3;
- (void)_finishRequestToReturnCredential:(id)a0 extensionShowedUI:(BOOL)a1 error:(id)a2 completion:(id /* block */)a3;

@end
