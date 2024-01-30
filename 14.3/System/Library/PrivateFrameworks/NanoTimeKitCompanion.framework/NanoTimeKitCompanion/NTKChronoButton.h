@class UIColor, UIImageView;

@interface NTKChronoButton : UIControl {
    UIImageView *_ringView;
    UIImageView *_fillView;
    struct CGPoint { double x; double y; } _originalCenter;
}

@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) UIColor *swapColor;
@property (retain, nonatomic) UIColor *highlightColor;
@property (retain, nonatomic) UIColor *ringColor;
@property (retain, nonatomic) UIColor *ringSwapColor;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } touchEdgeInsets;

- (void).cxx_destruct;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)setEnabled:(BOOL)a0;
- (void)_updateColors;
- (void)_performTouchAnimationThroughColor:(id)a0 toColor:(id)a1 toRingColor:(id)a2;

@end
