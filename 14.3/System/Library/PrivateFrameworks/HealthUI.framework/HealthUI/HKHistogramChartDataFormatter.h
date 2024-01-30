@class HKUnit;

@interface HKHistogramChartDataFormatter : HKInteractiveChartDataFormatter

@property (readonly, nonatomic) HKUnit *unit;

- (void).cxx_destruct;
- (id)initWithUnit:(id)a0;
- (id)formattedSelectedRangeLabelDataWithChartData:(id)a0 context:(long long)a1;
- (id)formattedUnitStringForChartData:(id)a0;
- (id)formattedValueStringForChartData:(id)a0 options:(long long)a1;
- (id)_formattedStringWithValue:(double)a0 unit:(id)a1 showUnit:(BOOL)a2;

@end
