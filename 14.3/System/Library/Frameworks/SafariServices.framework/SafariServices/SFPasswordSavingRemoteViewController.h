@class ASAccountAuthenticationModificationController;

@interface SFPasswordSavingRemoteViewController : SFPasswordRemoteViewController {
    ASAccountAuthenticationModificationController *_accountAuthenticationModificationController;
}

+ (id)passwordServiceViewControllerName;
+ (id)serviceViewControllerInterface;

- (void)performUpgradeToSignInWithAppleForCredential:(id)a0 serviceIdentifier:(id)a1;
- (void)performUpgradeToStrongPasswordForCredential:(id)a0 serviceIdentifier:(id)a1;
- (void)accountAuthenticationModificationController:(id)a0 didSuccessfullyCompleteRequest:(id)a1 withUserInfo:(id)a2;
- (void)accountAuthenticationModificationController:(id)a0 didFailRequest:(id)a1 withError:(id)a2;
- (id)presentationAnchorForAccountAuthenticationModificationController:(id)a0;
- (void).cxx_destruct;
- (id)_accountAuthenticationModificationController;

@end
