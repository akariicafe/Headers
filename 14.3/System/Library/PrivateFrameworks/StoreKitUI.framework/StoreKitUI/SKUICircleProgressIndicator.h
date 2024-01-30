@class UIColor, UIImageView, UIImage, CADisplayLink;

@interface SKUICircleProgressIndicator : UIView {
    double _animatedValue;
    double _animationEndTime;
    double _animationStartTime;
    double _animationStartValue;
    UIImage *_borderImage;
    CADisplayLink *_displayLink;
    UIImage *_fillImage;
    UIImageView *_indeterminateView;
    BOOL _isAnimating;
    UIColor *_unhighlightedBackgroundColor;
}

@property (retain, nonatomic) UIImage *image;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } imageInsets;
@property (nonatomic, getter=isIndeterminate) BOOL indeterminate;
@property (nonatomic) double progress;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;

+ (id)_fillImage;
+ (id)_borderImage;
+ (id)_indeterminateImage;

- (void)tintColorDidChange;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setBackgroundColor:(id)a0;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_startIndeterminateAnimation;
- (void)_animateValueOnDisplayLink:(id)a0;
- (void)_setHidesBorderView:(BOOL)a0;
- (void)setProgress:(double)a0 animated:(BOOL)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
