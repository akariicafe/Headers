@class NSString, AKAuthorization, ASCredentialServiceIdentifier, ASPasswordCredential, NSDictionary;
@protocol _ASAccountAuthenticationModificationHostViewControllerDelegate, _ASAccountAuthenticationModificationExtensionContextProtocol;

@interface _ASAccountAuthenticationModificationHostViewController : _ASExtensionViewController <_ASAccountAuthenticationModificationExtensionHostContextDelegate> {
    ASCredentialServiceIdentifier *_serviceIdentifier;
    ASPasswordCredential *_existingCredential;
    NSString *_newPassword;
    long long _accountModificationOperation;
    AKAuthorization *_signInWithAppleAuthorization;
    id<_ASAccountAuthenticationModificationExtensionContextProtocol> _accountModificationExtensionContextProxy;
    NSDictionary *_userInfo;
}

@property (weak, nonatomic) id<_ASAccountAuthenticationModificationHostViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)willMoveToParentViewController:(id)a0;
- (void)_cancelButtonPressed;
- (void)_nonUIRequestDidRequireUserInteraction;
- (void)_requestDidFailWithError:(id)a0 completion:(id /* block */)a1;
- (BOOL)_shouldUseNonUIRequestTimer;
- (void)dismissRequestUI:(id)a0;
- (void)getSignInWithAppleAuthorizationWithState:(id)a0 nonce:(id)a1 completion:(id /* block */)a2;
- (id)initWithExtension:(id)a0 serviceIdentifier:(id)a1;
- (void)prepareToCancelRequestWithHostContext:(id)a0 error:(id)a1 completion:(id /* block */)a2;
- (void)prepareToCompleteRequestWithHostContext:(id)a0 updatedCredential:(id)a1 userInfo:(id)a2 completion:(id /* block */)a3;
- (void)prepareToCompleteUpgradeToSignInWithAppleRequestWithHostContext:(id)a0 userInfo:(id)a1 completion:(id /* block */)a2;
- (void)updateCredential:(id)a0 withNewPassword:(id)a1 userInfo:(id)a2;
- (void)upgradeCredentialToSignInWithApple:(id)a0 userInfo:(id)a1;

@end
