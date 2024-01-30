@class UIColor, CAGradientLayer, CAShapeLayer, NSArray;

@interface NWKUILinearGaugeView : UIView

@property (nonatomic) struct { double width; double indicatorDiameter; double indicatorStrokeWidth; } layoutConstants;
@property (retain, nonatomic) CAGradientLayer *gaugeLayer;
@property (nonatomic) double lastLayoutSubviewsHeight;
@property (retain, nonatomic) CAShapeLayer *valueIndicatorLayer;
@property (copy, nonatomic) UIColor *indicatorFillColor;
@property (retain, nonatomic) NSArray *colorIndices;
@property (nonatomic) double value;
@property (nonatomic, getter=shouldRenderValueAsPercentage) BOOL renderValueAsPercentage;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)applyFilter:(id)a0;
- (void)updateMonochromeColor:(id)a0 fraction:(double)a1;
- (id)initWithLayoutConstants:(struct { double x0; double x1; double x2; })a0;
- (void)applyIndicatorFillColor:(id)a0;
- (void)_setNeedsUpdateGauge;
- (void)applyCGColorsToGradientLayer:(id)a0;

@end
