@class UIImageView, SKUIShapeView;

@interface SKUIPreviewProgressIndicator : UIControl {
    SKUIShapeView *_backgroundView;
    UIImageView *_cancelImageView;
    SKUIShapeView *_foregroundView;
}

@property (readonly, nonatomic, getter=isIndeterminate) BOOL indeterminate;
@property (nonatomic) float progress;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)tintColorDidChange;
- (void)setBackgroundColor:(id)a0;
- (void).cxx_destruct;
- (void)setProgress:(float)a0 animated:(BOOL)a1;
- (void)beginIndeterminateAnimation;
- (void)endIndeterminateAnimation;
- (void)_beginIndeterminateAnimation;
- (id)_newShapeViewWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 lineWidth:(double)a1;
- (void)reloadWithPlayerStatus:(id)a0 animated:(BOOL)a1;

@end
