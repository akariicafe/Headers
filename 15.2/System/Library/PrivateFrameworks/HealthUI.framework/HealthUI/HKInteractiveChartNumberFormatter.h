@class NSString;

@interface HKInteractiveChartNumberFormatter : HKInteractiveChartDataFormatter

@property (copy, nonatomic) NSString *unitFormatString;

- (void).cxx_destruct;
- (id)init;
- (id)formattedSelectedRangeLabelDataWithChartData:(id)a0 context:(long long)a1;
- (id)formattedValueStringForChartData:(id)a0 options:(long long)a1;
- (id)_formattedStringWithValue:(id)a0 formatter:(id)a1;

@end
