@class UIColor, CAMShutterButtonRingView, UIImageView, CAMTimelapseShutterRingView, UIView;
@protocol CAMShutterButtonDelegate;

@interface CUShutterButton : UIButton

@property (readonly, nonatomic) CAMShutterButtonRingView *_outerView;
@property (readonly, nonatomic) UIImageView *_outerImageView;
@property (readonly, nonatomic) CAMTimelapseShutterRingView *_timelapseOuterView;
@property (readonly, nonatomic) UIView *_innerView;
@property (readonly, nonatomic) UIView *_innerViewContrastView;
@property (retain, nonatomic) UIView *_stopModeBackground;
@property (retain, nonatomic) UIView *_spinnerView;
@property (nonatomic) long long layoutStyle;
@property (nonatomic) struct CAMShutterButtonSpec { double outerRingDiameter; double outerRingStrokeWidth; double stopSquareSideLength; double stopSquareCornerRadius; double interRingSpacing; } spec;
@property (nonatomic) long long mode;
@property (weak, nonatomic) id<CAMShutterButtonDelegate> delegate;
@property (nonatomic, getter=isSpinning) BOOL spinning;
@property (nonatomic) BOOL showDisabled;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } tappableEdgeInsets;
@property (retain, nonatomic) UIColor *contentColor;
@property (retain, nonatomic) UIColor *stopModeBackgroundColor;

+ (id)shutterButton;
+ (id)smallShutterButton;
+ (id)smallShutterButtonWithLayoutStyle:(long long)a0;
+ (id)shutterButtonWithSpec:(struct CAMShutterButtonSpec { double x0; double x1; double x2; double x3; double x4; })a0;
+ (id)shutterButtonWithLayoutStyle:(long long)a0;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)a0;
- (BOOL)_shouldShowContrastBorderForMode:(long long)a0 layoutStyle:(long long)a1;
- (void)setMode:(long long)a0 animated:(BOOL)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)_contentColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_outerImageForMode:(long long)a0 layoutStyle:(long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 layoutStyle:(long long)a1 spec:(struct CAMShutterButtonSpec { double x0; double x1; double x2; double x3; double x4; })a2;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_performModeSwitchAnimationFromMode:(long long)a0 toMode:(long long)a1 animated:(BOOL)a2;
- (BOOL)_isSpinningSupportedForLayoutStyle:(long long)a0;
- (void).cxx_destruct;
- (id)_innerCircleColorForMode:(long long)a0 spinning:(BOOL)a1;
- (id)initWithCoder:(id)a0;
- (BOOL)_shouldShowBackgroundViewForMode:(long long)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void)_updateSpinningAnimations;
- (void)_performHighlightAnimation;
- (double)_cornerRadiusForMode:(long long)a0;
- (void)_updateOuterAndInnerLayers;
- (void)_commonCAMShutterButtonInitializationWithLayoutStyle:(long long)a0 spec:(struct CAMShutterButtonSpec { double x0; double x1; double x2; double x3; double x4; })a1;
- (struct CGSize { double x0; double x1; })_sizeForMode:(long long)a0;
- (struct { long long x0; long long x1; double x2; double x3; })_timelapseRingSpecForLayoutStyle:(long long)a0;

@end
