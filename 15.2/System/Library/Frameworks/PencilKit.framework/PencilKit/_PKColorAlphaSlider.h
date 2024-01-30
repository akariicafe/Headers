@class CAGradientLayer, UIColor, UIView, _PKCheckerGridView, _PKSliderKnobView;
@protocol _PKColorAlphaSliderDelegate;

@interface _PKColorAlphaSlider : UIControl

@property (retain, nonatomic) UIView *colorView;
@property (retain, nonatomic) CAGradientLayer *colorViewMaskLayer;
@property (retain, nonatomic) _PKCheckerGridView *alphaGridView;
@property (retain, nonatomic) CAGradientLayer *alphaGridViewMaskLayer;
@property (retain, nonatomic) _PKSliderKnobView *sliderKnobView;
@property (weak, nonatomic) id<_PKColorAlphaSliderDelegate> delegate;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) long long colorUserInterfaceStyle;
@property (nonatomic) double minAlpha;
@property (nonatomic) double maxAlpha;

+ (id)rgbaColorFromColorIfPossible:(id)a0;
+ (void)_layoutGradientMaskLayer:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 isReversed:(BOOL)a2;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (long long)_uiColorUserInterfaceStyle;
- (void)setColor:(id)a0 animated:(BOOL)a1;
- (void)_colorViewTapGestureHandler:(id)a0;
- (void)didPanSliderKnob:(id)a0;
- (void)_setColorNoLayout:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_knobViewFrameForColorAlpha:(double)a0;
- (double)colorAlphaForSliderKnobXPosition:(double)a0;
- (double)_sliderKnobViewWidth;
- (double)sliderKnobXPositionForColorAlpha:(double)a0;

@end
