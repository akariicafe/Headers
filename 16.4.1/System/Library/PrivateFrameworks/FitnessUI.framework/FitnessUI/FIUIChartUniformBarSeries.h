@class NSArray, NSDate;

@interface FIUIChartUniformBarSeries : FIUIChartNumericSeries

@property (retain, nonatomic) NSArray *plotPoints;
@property (nonatomic) NSDate *minDate;
@property (nonatomic) double barWidth;
@property (nonatomic) double barSpacing;
@property (nonatomic) double roundedCornerRadius;
@property (nonatomic) struct CGGradient { } *barGradient;

- (void)drawLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (double)xValueForPointFromChartPoint:(id)a0;
- (double)yValueForPointFromChartPointValue:(id)a0;

@end
