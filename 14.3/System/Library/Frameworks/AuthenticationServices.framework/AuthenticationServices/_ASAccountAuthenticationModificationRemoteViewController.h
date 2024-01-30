@protocol _ASAccountAuthenticationModificationRemoteViewControllerDelegate;

@interface _ASAccountAuthenticationModificationRemoteViewController : _UIRemoteViewController <ASAccountAuthenticationModificationRemoteViewControllerProtocol>

@property (weak, nonatomic) id<_ASAccountAuthenticationModificationRemoteViewControllerDelegate> delegate;

+ (id)requestViewControllerWithConnectionHandler:(id /* block */)a0;
+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)upgradeCredentialToSignInWithApple:(id)a0 forServiceIdentifier:(id)a1 userInfo:(id)a2 extension:(id)a3;
- (void)updateCredential:(id)a0 forServiceIdentifier:(id)a1 userInfo:(id)a2 extension:(id)a3;
- (void)requestToUpgradeToSignInWithAppleDidFinishWithUserInfo:(id)a0 completion:(id /* block */)a1;
- (void)requestDidFinishWithCredential:(id)a0 userInfo:(id)a1 completion:(id /* block */)a2;
- (void)requestDidFailWithError:(id)a0 completion:(id /* block */)a1;
- (void)presentAccountModificationRemoteViewController;
- (void)dismissAccountModificationRemoteViewController;

@end
