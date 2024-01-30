@class UIColor, UIFont;

@interface HKElectrocardiogramAxisOptions : NSObject

@property (readonly, nonatomic) UIFont *axisLabelFont;
@property (readonly, nonatomic) BOOL scaleMetricsAutomatically;
@property (readonly, nonatomic) UIColor *lineColor;
@property (readonly, nonatomic) UIColor *axisLabelTextColor;
@property (readonly, nonatomic) double lineWidth;
@property (readonly, nonatomic) double axisLineToLabelSpacing;
@property (readonly, nonatomic) double topBaselineMargin;
@property (readonly, nonatomic) double bottomBaselineMargin;

- (void).cxx_destruct;
- (id)initWithAxisLabelFont:(id)a0 axisLabelTextColor:(id)a1 scaleMetricsAutomatically:(BOOL)a2 lineColor:(id)a3 lineWidth:(double)a4 axisLineToLabelSpacing:(double)a5 topBaselineMargin:(double)a6 bottomBaselineMargin:(double)a7;

@end
