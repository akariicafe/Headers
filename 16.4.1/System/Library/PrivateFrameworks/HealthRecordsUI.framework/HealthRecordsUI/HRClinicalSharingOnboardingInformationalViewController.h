@interface HRClinicalSharingOnboardingInformationalViewController : OBWelcomeController <HKClinicalAccountStoreStateChangeListener> {
    void /* unknown type, empty encoding */ onboardingSession;
    void /* unknown type, empty encoding */ flowType;
    void /* unknown type, empty encoding */ selectedAccount;
    void /* unknown type, empty encoding */ accountIconProvider;
    void /* unknown type, empty encoding */ gatewayProxyToTry;
    void /* unknown type, empty encoding */ delegate;
}

- (void)clinicalAccountStore:(id)a0 accountDidChange:(id)a1 changeType:(long long)a2;
- (void)didReceiveClinicalAccountOnboardingCompletionWithNotification:(id)a0;
- (void)didReceiveOAuthCompletionWithNotification:(id)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)cancelButtonTapped:(id)a0;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 contentLayout:(long long)a3;
- (id)initWithTitle:(id)a0 detailText:(id)a1 symbolName:(id)a2 contentLayout:(long long)a3;
- (id)initWithOnboardingSession:(id)a0 flowType:(long long)a1 selectedAccount:(id)a2 delegate:(id)a3;
- (void)nextButtonTappedForAccountLogin:(id)a0;
- (void)nextButtonTappedForAuthorizationSelection:(id)a0;
- (void)nextButtonTappedForProviderSearch:(id)a0;
- (void)skipButtonTappedForAuthorizationSelection:(id)a0;

@end
