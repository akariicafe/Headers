@class NSString;

@interface HKInteractiveChartCategoryValueFormatter : HKInteractiveChartDataFormatter

@property (retain, nonatomic) NSString *localizedCategoryName;

- (void).cxx_destruct;
- (id)initWithLocalizedCategoryName:(id)a0;
- (id)formattedSelectedRangeLabelDataWithChartData:(id)a0 context:(long long)a1;
- (id)formattedValueStringForChartData:(id)a0 options:(long long)a1;
- (id)_uniqueChartPoints:(id)a0;
- (id)_formattedStringWithValue:(long long)a0 useColorAttributes:(BOOL)a1;
- (id)_formattedStringWithText:(id)a0;
- (id)_formattedStringWithCount:(long long)a0;

@end
