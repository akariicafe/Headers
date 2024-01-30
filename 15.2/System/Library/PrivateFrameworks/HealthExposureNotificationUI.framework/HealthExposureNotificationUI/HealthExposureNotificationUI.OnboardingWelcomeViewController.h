@interface HealthExposureNotificationUI.OnboardingWelcomeViewController : UIViewController <UIScrollViewDelegate> {
    void /* unknown type, empty encoding */ flow;
    void /* unknown type, empty encoding */ isFromAvailabilityAlert;
    void /* unknown type, empty encoding */ notificationPreview;
    void /* unknown type, empty encoding */ primaryButton;
    void /* unknown type, empty encoding */ secondaryButton;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ subtitleLabel;
    void /* unknown type, empty encoding */ howItWorksButton;
    void /* unknown type, empty encoding */ footerLabel;
    void /* unknown type, empty encoding */ scrollView;
    void /* unknown type, empty encoding */ scrollViewContentSizeObserver;
    void /* unknown type, empty encoding */ buttonTray;
}

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)didTapDone;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)didTapPrimaryButton;
- (void)didTapSecondaryButton;
- (void)didTapHowExposureNotificationsWork;
- (void)didTapFooterLabel;

@end
