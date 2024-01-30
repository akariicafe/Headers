@interface HealthExposureNotificationUI.OnboardingLegalConsentViewController : OBWelcomeController {
    void /* unknown type, empty encoding */ flow;
    void /* unknown type, empty encoding */ healthAgencyModel;
    void /* unknown type, empty encoding */ showsTurnOnExposureNotificationsAlert;
    void /* unknown type, empty encoding */ shouldSetActiveRegion;
    void /* unknown type, empty encoding */ primaryButton;
    void /* unknown type, empty encoding */ secondaryButton;
}

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 contentLayout:(long long)a3;
- (void)didTapCancel;
- (void)viewDidLoad;
- (void)didTapPrimaryButton;
- (void)didTapSecondaryButton;
- (void)didConfirmAgree;
- (void)didConfirmDontAgree;

@end
