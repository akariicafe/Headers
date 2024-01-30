@interface TeaUI.MotionDebugView : UIView <TUMotionManagerObserver> {
    void /* unknown type, empty encoding */ label;
    void /* unknown type, empty encoding */ labelBackgroundView;
}

- (void)motionManager:(id)a0 didUpdateMotionData:(id)a1;
- (void)motionManager:(id)a0 motionEnabled:(BOOL)a1;
- (void)safeAreaInsetsDidChange;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
