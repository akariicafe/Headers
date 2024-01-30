@class NSArray, UIColor;

@interface FIUIChartBarSeries : FIUIChartNumericSeries

@property (retain, nonatomic) NSArray *plotPoints;
@property (retain, nonatomic) NSArray *barLabels;
@property (nonatomic) double barWidth;
@property (nonatomic) double barSpacing;
@property (nonatomic) double roundedCornerRadius;
@property (retain, nonatomic) UIColor *strokeColor;
@property (nonatomic) double strokeWidth;
@property (retain, nonatomic) UIColor *backgroundStrokeColor;
@property (nonatomic) double backgroundStrokeWidth;
@property (retain, nonatomic) NSArray *barColors;
@property (nonatomic) struct CGGradient { } *barGradient;
@property (retain, nonatomic) UIColor *barColor;
@property (nonatomic) BOOL fadeZeroBars;
@property (retain, nonatomic) UIColor *fadedBarColor;
@property (retain, nonatomic) NSArray *labelAttributes;

- (void)drawLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (void)dealloc;
- (void)layoutSubviews;
- (id)init;
- (void).cxx_destruct;
- (id)_chartColorForChartYValue:(double)a0;
- (void)_strokeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(struct CGContext { } *)a1 color:(struct CGColor { } *)a2 width:(double)a3;
- (void)_translateColorThresholds;

@end
