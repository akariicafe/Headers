@interface SeymourUI.SessionTimerView : UIView {
    void /* unknown type, empty encoding */ presenter;
    void /* unknown type, empty encoding */ metricBuilder;
    void /* unknown type, empty encoding */ circle;
    void /* unknown type, empty encoding */ label;
    void /* unknown type, empty encoding */ animator;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)updateDuration:(double)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
