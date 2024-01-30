@interface HealthExposureNotificationUI.OnboardingAnalyticsViewController : OBWelcomeController {
    void /* unknown type, empty encoding */ flow;
    void /* unknown type, empty encoding */ healthAgencyModel;
    void /* unknown type, empty encoding */ primaryButton;
    void /* unknown type, empty encoding */ secondaryButton;
}

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 contentLayout:(long long)a3;
- (void)viewDidLoad;
- (void)didTapLearnMore;
- (void)didTapPrimaryButton;
- (void)didTapSecondaryButton;

@end
