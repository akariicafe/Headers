@class UILabel, TPRevealingRingView;

@interface SBUIRingViewLabelButton : UIControl

@property (readonly, nonatomic) TPRevealingRingView *backgroundRing;
@property (readonly, nonatomic) UILabel *label;

- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;

@end
