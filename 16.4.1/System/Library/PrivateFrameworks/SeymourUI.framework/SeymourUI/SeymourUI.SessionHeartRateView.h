@interface SeymourUI.SessionHeartRateView : UIView {
    void /* unknown type, empty encoding */ presenter;
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ metricBuilder;
    void /* unknown type, empty encoding */ heartView;
    void /* unknown type, empty encoding */ label;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (void)accessibilityDidUpdateHeartRate:(BOOL)a0 lastKnownHR:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
