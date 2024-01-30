@interface PassKitUI.AuthenticatorWrapper : NSObject <AKAppleIDAuthenticationInAppContextDelegate, AKSignInViewControllerDelegate, PKAuthenticatorDelegate> {
    void /* unknown type, empty encoding */ _authenticatorModel;
    void /* unknown type, empty encoding */ authenticator;
    void /* unknown type, empty encoding */ delegate;
}

- (void)signInViewController:(id)a0 didAuthenticateWithResults:(id)a1 error:(id)a2;
- (BOOL)signInViewController:(id)a0 shouldContinueWithAuthenticationResults:(id)a1 error:(id)a2 forContext:(id)a3;
- (void)dismissPassphraseViewController;
- (void)authenticator:(id)a0 didTransitionToCoachingState:(long long)a1;
- (void)authenticator:(id)a0 didTransitionToEvaluationStateWithEvent:(struct { long long x0; long long x1; })a1;
- (void)contextWillBeginPresentingSecondaryUI:(id)a0;
- (void)dismissPasscodeViewController;
- (void)presentPasscodeViewController:(id)a0 completionHandler:(id /* block */)a1 reply:(id /* block */)a2;
- (void)presentPassphraseViewController:(id)a0 completionHandler:(id /* block */)a1 reply:(id /* block */)a2;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
