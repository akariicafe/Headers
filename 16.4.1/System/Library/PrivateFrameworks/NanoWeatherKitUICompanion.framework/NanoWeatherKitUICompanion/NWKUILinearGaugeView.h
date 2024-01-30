@class CAGradientLayer, UIColor, NSArray, CALayer, UIView;

@interface NWKUILinearGaugeView : UIView

@property (nonatomic) struct { double width; double indicatorDiameter; double indicatorStrokeWidth; } layoutConstants;
@property (nonatomic) double lastLayoutSubviewsHeight;
@property (retain, nonatomic) CALayer *gaugeWrapperLayer;
@property (retain, nonatomic) CAGradientLayer *backgroundGaugeLayer;
@property (retain, nonatomic) CAGradientLayer *gaugeLayer;
@property (retain, nonatomic) UIView *valueIndicator;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } valueIndicatorCutoutFrame;
@property (copy, nonatomic) UIColor *indicatorFillColor;
@property (retain, nonatomic) NSArray *backgroundColorIndices;
@property (retain, nonatomic) NSArray *colorIndices;
@property (nonatomic) double highValue;
@property (nonatomic) double value;
@property (nonatomic, getter=shouldIncludeBackground) BOOL includeBackground;
@property (nonatomic, getter=shouldRenderValueAsPercentage) BOOL renderValueAsPercentage;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)_createGradientLayer;
- (void)_applyCGColors:(id)a0 toGradientLayer:(id)a1;
- (struct CGPoint { double x0; double x1; })_centerOfValueIndicator:(id)a0;
- (id)_cgColorsFromColorIndices:(id)a0;
- (void)_gradientLocationInformationForGaugeWithHeight:(double)a0 colorIndices:(id)a1 handler:(id /* block */)a2;
- (void)_setNeedsUpdateGauge;
- (void)applyBackgroundGaugeFilters:(id)a0 fraction:(double)a1;
- (void)applyForegroundGaugeFilters:(id)a0;
- (void)applyIndicatorFillColor:(id)a0;
- (id)initWithLayoutConstants:(struct { double x0; double x1; double x2; })a0;
- (void)interpolateIndicatorWithColor:(id)a0 fraction:(double)a1;

@end
