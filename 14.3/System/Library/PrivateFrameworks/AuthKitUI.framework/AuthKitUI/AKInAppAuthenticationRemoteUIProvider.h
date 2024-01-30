@class RemoteUIController, NSString, AKBasicLoginViewController, UINavigationController, AKInAppAuthenticationRemoteUIDelegate, AKAppleIDAuthenticationInAppContext, AKBasicLoginAlertController;

@interface AKInAppAuthenticationRemoteUIProvider : NSObject <AKBasicLoginControllerDelegate, AKInAppAuthenticationUIProvider> {
    AKBasicLoginAlertController *_basicLoginAlertController;
    AKBasicLoginViewController *_basicLoginViewController;
    UINavigationController *_navController;
}

@property (weak, nonatomic) AKAppleIDAuthenticationInAppContext *context;
@property (retain, nonatomic) RemoteUIController *remoteUIController;
@property (readonly, nonatomic) AKInAppAuthenticationRemoteUIDelegate *remoteUIControllerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContext:(id)a0;
- (void)presentServerProvidedUIWithConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)_startAnimating;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_navController;
- (void)dismissSecondFactorUIWithCompletion:(id /* block */)a0;
- (void)presentSecondFactorAlertWithError:(id)a0 title:(id)a1 message:(id)a2 completion:(id /* block */)a3;
- (void)willPresentModalNavigationController:(id)a0;
- (void)dismissKeepUsingUIWithCompletion:(id /* block */)a0;
- (void)dismissNativeRecoveryUIWithCompletion:(id /* block */)a0;
- (void)presentBiometricOrPasscodeValidationForAppleID:(id)a0 completion:(id /* block */)a1;
- (void)presentKeepUsingUIForAppleID:(id)a0 completion:(id /* block */)a1;
- (void)presentBasicLoginUIWithCompletion:(id /* block */)a0;
- (void)presentNativeRecoveryUIWithContext:(id)a0 completion:(id /* block */)a1;
- (void)presentLoginAlertWithError:(id)a0 title:(id)a1 message:(id)a2 completion:(id /* block */)a3;
- (void)dismissServerProvidedUIWithCompletion:(id /* block */)a0;
- (void)dismissBasicLoginUIWithCompletion:(id /* block */)a0;
- (void)presentSecondFactorUIWithCompletion:(id /* block */)a0;
- (void)basicLoginControllerDidPresent:(id)a0;
- (void)basicLoginControllerWillDismiss:(id)a0;
- (void)basicLoginControllerDidDismiss:(id)a0;
- (void)_clearRemoteUIController;
- (BOOL)_shouldShowAsView;
- (void)presentBasicLoginUIAsViewWithCompletion:(id /* block */)a0;
- (void)presentBasicLoginUIAsAlertWithCompletion:(id /* block */)a0;
- (void)presentLoginAlertUIAsViewWithError:(id)a0 title:(id)a1 message:(id)a2 waitForInteraction:(BOOL)a3 completion:(id /* block */)a4;
- (void)presentLoginAlertWithError:(id)a0 title:(id)a1 message:(id)a2 waitForInteraction:(BOOL)a3 completion:(id /* block */)a4;
- (void)cleanUpBasicLoginWithCompletion:(id /* block */)a0;
- (id)_secondFactorActionsForAlert:(id)a0 completion:(id /* block */)a1;
- (void)_contextWillDismissLoginAlertController;
- (void)_contextDidPresentLoginController;
- (void)_contextDidDismissLoginAlertController;
- (void)_updateReason;
- (id)_actionsForLoginWithCompletion:(id /* block */)a0;
- (void)_showMaxAttemptAlertWithCompletion:(id /* block */)a0;
- (void)presentIDPProvidedUIWithConfiguration:(id)a0 completion:(id /* block */)a1;

@end
