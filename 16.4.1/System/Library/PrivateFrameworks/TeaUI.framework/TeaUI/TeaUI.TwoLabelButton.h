@interface TeaUI.TwoLabelButton : UIControl <CAAnimationDelegate> {
    void /* unknown type, empty encoding */ highlightMask;
    void /* unknown type, empty encoding */ animationState;
    void /* unknown type, empty encoding */ buttonState;
    void /* unknown type, empty encoding */ animationTrigger;
    void /* unknown type, empty encoding */ titleLabelNormal;
    void /* unknown type, empty encoding */ titleLabelHighlighted;
    void /* unknown type, empty encoding */ labelNormal;
    void /* unknown type, empty encoding */ labelHighlighted;
    void /* unknown type, empty encoding */ borderColor;
    void /* unknown type, empty encoding */ backgroundColorNormal;
    void /* unknown type, empty encoding */ backgroundColorHighlighted;
    void /* unknown type, empty encoding */ onTap;
    void /* unknown type, empty encoding */ currentBorderColor;
    void /* unknown type, empty encoding */ currentBackgroundColorNormal;
    void /* unknown type, empty encoding */ currentBackgroundColorHighlighted;
}

- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
