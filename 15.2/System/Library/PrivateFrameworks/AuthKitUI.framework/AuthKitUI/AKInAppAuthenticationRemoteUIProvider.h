@class RemoteUIControllerPreferences, NSString, UINavigationController, AKBasicLoginViewController, AKBasicLoginAlertController, AKAppleIDAuthenticationInAppContext, RemoteUIController, AKInAppAuthenticationRemoteUIDelegate;

@interface AKInAppAuthenticationRemoteUIProvider : NSObject <AKBasicLoginControllerDelegate, AKInAppAuthenticationUIProvider> {
    AKBasicLoginAlertController *_basicLoginAlertController;
    AKBasicLoginViewController *_basicLoginViewController;
    UINavigationController *_navController;
}

@property (weak, nonatomic) AKAppleIDAuthenticationInAppContext *context;
@property (retain, nonatomic) RemoteUIController *remoteUIController;
@property (retain, nonatomic) RemoteUIControllerPreferences *ruiPreferences;
@property (readonly, nonatomic) AKInAppAuthenticationRemoteUIDelegate *remoteUIControllerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContext:(id)a0;
- (void)_updateReason;
- (void)_startAnimating;
- (void).cxx_destruct;
- (void)presentKeepUsingUIForAppleID:(id)a0 completion:(id /* block */)a1;
- (void)dismissKeepUsingUIWithCompletion:(id /* block */)a0;
- (void)presentBasicLoginUIWithCompletion:(id /* block */)a0;
- (void)dismissBasicLoginUIWithCompletion:(id /* block */)a0;
- (void)presentLoginAlertWithError:(id)a0 title:(id)a1 message:(id)a2 completion:(id /* block */)a3;
- (void)presentSecondFactorUIWithCompletion:(id /* block */)a0;
- (void)dismissSecondFactorUIWithCompletion:(id /* block */)a0;
- (void)presentSecondFactorAlertWithError:(id)a0 title:(id)a1 message:(id)a2 completion:(id /* block */)a3;
- (void)presentBiometricOrPasscodeValidationForAppleID:(id)a0 completion:(id /* block */)a1;
- (void)presentServerProvidedUIWithConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)dismissServerProvidedUIWithCompletion:(id /* block */)a0;
- (void)presentNativeRecoveryUIWithContext:(id)a0 completion:(id /* block */)a1;
- (void)dismissNativeRecoveryUIWithCompletion:(id /* block */)a0;
- (id)_navController;
- (void)dealloc;
- (void)willPresentModalNavigationController:(id)a0;
- (void)basicLoginControllerDidPresent:(id)a0;
- (void)basicLoginControllerWillDismiss:(id)a0;
- (void)basicLoginControllerDidDismiss:(id)a0;
- (void)_clearRemoteUIController;
- (BOOL)_shouldShowAsView;
- (void)presentBasicLoginUIAsViewWithCompletion:(id /* block */)a0;
- (void)presentBasicLoginUIAsAlertWithCompletion:(id /* block */)a0;
- (BOOL)_shouldUsePasswordDelegate;
- (id)_actionsForLoginWithCompletion:(id /* block */)a0;
- (void)presentLoginAlertUIAsViewWithError:(id)a0 title:(id)a1 message:(id)a2 waitForInteraction:(BOOL)a3 completion:(id /* block */)a4;
- (void)presentLoginAlertWithError:(id)a0 title:(id)a1 message:(id)a2 waitForInteraction:(BOOL)a3 completion:(id /* block */)a4;
- (void)cleanUpBasicLoginWithCompletion:(id /* block */)a0;
- (id)_secondFactorActionsForAlert:(id)a0 completion:(id /* block */)a1;
- (void)_contextWillDismissLoginAlertController;
- (void)_contextDidPresentLoginController;
- (void)_contextDidDismissLoginAlertController;
- (void)_showMaxAttemptAlertWithCompletion:(id /* block */)a0;
- (void)presentIDPProvidedUIWithConfiguration:(id)a0 completion:(id /* block */)a1;

@end
