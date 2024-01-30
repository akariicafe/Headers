@interface SeymourMedia.CountdownRingView : UIView <ARUICountdownAnimatorDelegate> {
    void /* unknown type, empty encoding */ onCountdownStep;
    void /* unknown type, empty encoding */ onCountdownWindUp;
    void /* unknown type, empty encoding */ onCountdownFadeOut;
    void /* unknown type, empty encoding */ onCountdownCompleted;
    void /* unknown type, empty encoding */ animator;
    void /* unknown type, empty encoding */ countdownView;
}

- (void)countdownAnimator:(id)a0 performingAnimation:(id)a1 withDuration:(double)a2;
- (void)countdownAnimatorDidFinishAnimating:(id)a0;
- (void)accessibilityUpdateCountdownToStep:(long long)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
