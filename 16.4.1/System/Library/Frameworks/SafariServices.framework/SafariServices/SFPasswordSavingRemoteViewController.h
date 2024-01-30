@class ASAccountAuthenticationModificationController;

@interface SFPasswordSavingRemoteViewController : SFPasswordRemoteViewController {
    ASAccountAuthenticationModificationController *_accountAuthenticationModificationController;
}

+ (id)serviceViewControllerInterface;
+ (id)passwordServiceViewControllerName;

- (void).cxx_destruct;
- (void)performUpgradeToSignInWithAppleForCredential:(id)a0 serviceIdentifier:(id)a1;
- (id)_accountAuthenticationModificationController;
- (void)accountAuthenticationModificationController:(id)a0 didFailRequest:(id)a1 withError:(id)a2;
- (void)accountAuthenticationModificationController:(id)a0 didSuccessfullyCompleteRequest:(id)a1 withUserInfo:(id)a2;
- (void)performUpgradeToStrongPasswordForCredential:(id)a0 serviceIdentifier:(id)a1;
- (id)presentationAnchorForAccountAuthenticationModificationController:(id)a0;

@end
