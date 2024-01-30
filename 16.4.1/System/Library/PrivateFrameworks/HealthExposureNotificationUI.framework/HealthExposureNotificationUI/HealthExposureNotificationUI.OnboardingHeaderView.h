@interface HealthExposureNotificationUI.OnboardingHeaderView : UIView {
    void /* unknown type, empty encoding */ insets;
    void /* unknown type, empty encoding */ proxyDisabled;
    void /* unknown type, empty encoding */ imageViewWidthConstraint;
    void /* unknown type, empty encoding */ labelContainerLeadingConstraint;
    void /* unknown type, empty encoding */ imageWidthConstraint;
    void /* unknown type, empty encoding */ imageHeightConstraint;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ imageView;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ header;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithHeader:(id)a0 insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 proxyDisabled:(BOOL)a2 corners:(unsigned long long)a3;

@end
