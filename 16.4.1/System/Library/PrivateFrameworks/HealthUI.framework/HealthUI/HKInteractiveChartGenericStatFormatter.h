@class NSArray;
@protocol HKInteractiveChartRangeProvider;

@interface HKInteractiveChartGenericStatFormatter : HKInteractiveChartDataFormatter

@property (retain, nonatomic) NSArray *configuredStatItems;
@property (retain, nonatomic) NSArray *overrideStatFormatterItemOptions;
@property (retain, nonatomic) id<HKInteractiveChartRangeProvider> chartRangeProvider;

+ (long long)mapSingleItemToStatisticsType:(id)a0;

- (void).cxx_destruct;
- (id)formattedSelectedRangeLabelDataWithChartData:(id)a0 context:(long long)a1;
- (id)_formatMin:(double)a0 max:(double)a1 unit:(id)a2;
- (id)_formattedAnnotationForDistributionChartData:(id)a0;
- (id)_formattedSelectedRangeLabelDataWithChartData:(id)a0 items:(id)a1;
- (id)_makeSelectedRangeDataWithAvg:(double)a0 unit:(id)a1 showUnit:(BOOL)a2 statisticsType:(long long)a3;
- (id)_makeSelectedRangeDataWithMax:(double)a0 unit:(id)a1 prepend:(id)a2 statisticsType:(long long)a3;
- (id)_makeSelectedRangeDataWithMin:(double)a0 max:(double)a1 unit:(id)a2 statisticsType:(long long)a3;
- (void)configureFormatterForDisplayType:(id)a0 quantityType:(id)a1 chartRangeProvider:(id)a2 timeScope:(long long)a3 context:(long long)a4;
- (id)formattedUnitStringForChartData:(id)a0;
- (id)formattedValueStringForChartData:(id)a0 options:(long long)a1;
- (id)selectedRangeSeparatorString;

@end
