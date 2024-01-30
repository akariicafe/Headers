@interface SeymourUI.SessionIntroSequenceView : UIView {
    void /* unknown type, empty encoding */ presenter;
    void /* unknown type, empty encoding */ countdownPosition;
    void /* unknown type, empty encoding */ countdownView;
    void /* unknown type, empty encoding */ playButtonView;
    void /* unknown type, empty encoding */ spinnerView;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;

- (void)accessibilityUpdateCountdownToStep:(long long)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didTouchDownPlayIcon:(id)a0;
- (void)didTouchUpInsidePlayIcon:(id)a0;
- (void)didTouchUpOutsidePlayIcon:(id)a0;

@end
