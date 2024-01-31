@class NSString, ASPasswordCredential, ASCredentialServiceIdentifier, _ASAccountAuthenticationModificationHostViewController;

@interface ASAccountAuthenticationModificationServiceViewController : UIViewController <_ASAccountAuthenticationModificationHostViewControllerDelegate, ASAccountAuthenticationModificationServiceViewControllerProtocol> {
    _ASAccountAuthenticationModificationHostViewController *_accountModificationHostViewController;
    BOOL _isPerformingAppInitiatedUpgrade;
    ASPasswordCredential *_existingCredential;
    ASCredentialServiceIdentifier *_serviceIdentifierForUpgrade;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (void).cxx_destruct;
- (void)accountModificationHostViewController:(id)a0 didFinishWithCredential:(id)a1 userInfo:(id)a2 completion:(id /* block */)a3;
- (void)accountModificationHostViewController:(id)a0 requestCanceledWithError:(id)a1 completion:(id /* block */)a2;
- (void)accountModificationHostViewControllerDidCompleteUpgradeToSignInWithApple:(id)a0 userInfo:(id)a1 completion:(id /* block */)a2;
- (void)dismissUIForAccountModificationHostViewController:(id)a0;
- (void)presentUIForAccountModificationHostViewController:(id)a0;
- (void)_deleteExistingKeychainCredentialIfPossible;
- (BOOL)_ensureHostHasAccountModificationEntitlement;
- (void)_findExtensionSupportingUpgrade:(id)a0 withCompletionHandler:(id /* block */)a1;
- (BOOL)_isKeychainSyncEnabled;
- (void)_updateCredential:(id)a0 forServiceIdentifier:(id)a1 userInfo:(id)a2 extension:(id)a3;
- (void)_updateKeychainWithNewCredential:(id)a0;
- (void)_upgradeCredentialToSignInWithApple:(id)a0 forServiceIdentifier:(id)a1 userInfo:(id)a2 extension:(id)a3;
- (void)updateCredential:(id)a0 forServiceIdentifier:(id)a1 userInfo:(id)a2 extensionUUID:(id)a3;
- (void)upgradeCredentialToSignInWithApple:(id)a0 forServiceIdentifier:(id)a1 userInfo:(id)a2 extensionUUID:(id)a3;

@end
