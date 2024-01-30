@interface SeymourUI.SessionTimeProgressView : UIView {
    void /* unknown type, empty encoding */ presenter;
    void /* unknown type, empty encoding */ label;
    void /* unknown type, empty encoding */ ringGroup;
    void /* unknown type, empty encoding */ ringsView;
    void /* unknown type, empty encoding */ formatter;
    void /* unknown type, empty encoding */ behavior;
}

@property (nonatomic, readonly) BOOL accessibilityShowRemaining;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (void)accessibilityDidUpdateTimer:(double)a0 percentage:(float)a1;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
