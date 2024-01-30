@interface SeymourUI.SessionTimerView : UIView {
    void /* unknown type, empty encoding */ presenter;
    void /* unknown type, empty encoding */ metricBuilder;
    void /* unknown type, empty encoding */ timerIconView;
    void /* unknown type, empty encoding */ label;
    void /* unknown type, empty encoding */ animator;
    void /* unknown type, empty encoding */ currentRotationAngle;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (void)updateDuration:(double)a0 remainingDuration:(double)a1;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)updateDuration:(double)a0;

@end
