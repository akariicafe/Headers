@interface HealthExposureNotificationUI.OnboardingWelcomeViewController : UIViewController {
    void /* unknown type, empty encoding */ flow;
    void /* unknown type, empty encoding */ isFromAvailabilityAlert;
    void /* unknown type, empty encoding */ notificationPreview;
    void /* unknown type, empty encoding */ primaryButton;
    void /* unknown type, empty encoding */ secondaryButton;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)didTapDone;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)didTapPrimaryButton;
- (void)didTapSecondaryButton;
- (void)didTapHowExposureNotificationsWork;
- (void)didTapFooterLabel;

@end
