@interface HealthExposureNotificationUI.AuthorizationFooterView : UIView {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ primaryButton;
    void /* unknown type, empty encoding */ secondaryButton;
    void /* unknown type, empty encoding */ footerLabel;
    void /* unknown type, empty encoding */ visualEffectView;
}

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)didTapPrimaryButton;
- (void)didTapSecondaryButton;

@end
