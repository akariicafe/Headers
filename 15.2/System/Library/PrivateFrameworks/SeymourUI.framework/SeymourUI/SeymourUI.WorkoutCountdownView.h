@interface SeymourUI.WorkoutCountdownView : UIView {
    void /* unknown type, empty encoding */ onCountdownStep;
    void /* unknown type, empty encoding */ onCountdownWindUp;
    void /* unknown type, empty encoding */ onCountdownFadeOut;
    void /* unknown type, empty encoding */ onCountdownCompleted;
    void /* unknown type, empty encoding */ readyLabel;
    void /* unknown type, empty encoding */ oneLabel;
    void /* unknown type, empty encoding */ twoLabel;
    void /* unknown type, empty encoding */ threeLabel;
    void /* unknown type, empty encoding */ countdownRingView;
}

- (void)accessibilityUpdateCountdownToStep:(long long)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
