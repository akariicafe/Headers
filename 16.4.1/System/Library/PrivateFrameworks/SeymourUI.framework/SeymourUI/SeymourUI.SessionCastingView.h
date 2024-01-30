@interface SeymourUI.SessionCastingView : UIView {
    void /* unknown type, empty encoding */ presenter;
    void /* unknown type, empty encoding */ blurView;
    void /* unknown type, empty encoding */ exitControlItem;
    void /* unknown type, empty encoding */ airplayControlItem;
    void /* unknown type, empty encoding */ playControlItem;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ castingLabel;
    void /* unknown type, empty encoding */ castingStackView;
}

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)playButtonTapped;
- (void)airplayButtonTapped;
- (void)exitButtonTapped;

@end
