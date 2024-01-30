@interface SeymourUI.AnalyticsConsentViewController : SMUOBTextWelcomeController {
    void /* unknown type, empty encoding */ privacyPreferenceClient;
    void /* unknown type, empty encoding */ version;
    void /* unknown type, empty encoding */ isPurchaser;
    void /* unknown type, empty encoding */ eventHub;
    void /* unknown type, empty encoding */ metricPage;
    void /* unknown type, empty encoding */ onConsent;
    void /* unknown type, empty encoding */ onDismiss;
}

- (id)initWithTitle:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 detailText:(id)a1 symbolName:(id)a2 contentLayout:(long long)a3;
- (void)didTapLearnMoreButton;
- (void)didTapOptInButton;
- (void)didTapOptOutButton;

@end
