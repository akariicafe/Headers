@class NSString;

@interface ASAccountAuthenticationModificationExtensionContext : NSExtensionContext <_ASAccountAuthenticationModificationExtensionContextProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)cancelRequestWithError:(id)a0;
- (void)cancelRequest;
- (void)completeChangePasswordRequestWithUpdatedCredential:(id)a0 userInfo:(id)a1;
- (void)completeUpgradeToSignInWithAppleWithUserInfo:(id)a0;
- (void)getSignInWithAppleUpgradeAuthorizationWithState:(id)a0 nonce:(id)a1 completionHandler:(id /* block */)a2;
- (void)prepareInterfaceToUpdatePasswordForServiceIdentifier:(id)a0 existingCredential:(id)a1 newPassword:(id)a2 userInfo:(id)a3 completion:(id /* block */)a4;
- (void)prepareInterfaceToUpgradeCredentialToSignInWithApple:(id)a0 serviceIdentifier:(id)a1 userInfo:(id)a2 completion:(id /* block */)a3;
- (void)updatePasswordForServiceIdentifier:(id)a0 existingCredential:(id)a1 newPassword:(id)a2 userInfo:(id)a3;
- (void)upgradeCredentialToSignInWithApple:(id)a0 serviceIdentifier:(id)a1 userInfo:(id)a2;

@end
