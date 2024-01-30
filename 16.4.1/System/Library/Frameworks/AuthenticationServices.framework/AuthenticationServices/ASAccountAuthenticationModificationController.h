@class NSString, ASAccountAuthenticationModificationRequest, _ASAccountAuthenticationModificationRemoteViewController, NSExtension;
@protocol ASAccountAuthenticationModificationControllerPresentationContextProviding, ASAccountAuthenticationModificationControllerDelegate;

@interface ASAccountAuthenticationModificationController : NSObject <_ASAccountAuthenticationModificationRemoteViewControllerDelegate> {
    _ASAccountAuthenticationModificationRemoteViewController *_accountAuthenticationModificationRemoteViewController;
    ASAccountAuthenticationModificationRequest *_request;
    ASAccountAuthenticationModificationController *_referenceToSelf;
    NSExtension *_helperExtension;
}

@property (weak, nonatomic) id<ASAccountAuthenticationModificationControllerDelegate> delegate;
@property (weak, nonatomic) id<ASAccountAuthenticationModificationControllerPresentationContextProviding> presentationContextProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)performRequest:(id)a0;
- (void)_invalidate;
- (void).cxx_destruct;
- (id)_viewControllerToPresentFrom;
- (void)_failRequestWithError:(id)a0;
- (void)_performReplacePasswordWithSignInWithAppleRequest:(id)a0;
- (void)_performUpgradePasswordToStrongPasswordRequest:(id)a0;
- (void)_requestRemoteViewController:(id /* block */)a0;
- (void)_showUpgradeToStrongPasswordPromptForRequest:(id)a0;
- (void)accountModificationRemoteViewController:(id)a0 didFinishWithCredential:(id)a1 userInfo:(id)a2 completion:(id /* block */)a3;
- (void)accountModificationRemoteViewController:(id)a0 requestCanceledWithError:(id)a1 completion:(id /* block */)a2;
- (void)accountModificationRemoteViewController:(id)a0 viewServiceDidTerminateWithError:(id)a1;
- (void)accountModificationRemoteViewControllerDidFinishUpgradeToSignInWithApple:(id)a0 userInfo:(id)a1 completion:(id /* block */)a2;
- (void)dismissAccountModificationRemoteViewController:(id)a0;
- (void)presentAccountModificationRemoteViewController:(id)a0;

@end
