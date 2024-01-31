@class ASAccountAuthenticationModificationExtensionContext;

@interface ASAccountAuthenticationModificationViewController : UIViewController

@property (readonly, nonatomic) ASAccountAuthenticationModificationExtensionContext *extensionContext;

- (void)cancelRequest;
- (void)changePasswordWithoutUserInteractionForServiceIdentifier:(id)a0 existingCredential:(id)a1 newPassword:(id)a2 userInfo:(id)a3;
- (void)convertAccountToSignInWithAppleWithoutUserInteractionForServiceIdentifier:(id)a0 existingCredential:(id)a1 userInfo:(id)a2;
- (void)prepareInterfaceToChangePasswordForServiceIdentifier:(id)a0 existingCredential:(id)a1 newPassword:(id)a2 userInfo:(id)a3;
- (void)prepareInterfaceToConvertAccountToSignInWithAppleForServiceIdentifier:(id)a0 existingCredential:(id)a1 userInfo:(id)a2;

@end
