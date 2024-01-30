@class NSArray;

@interface _HKSleepDurationAverageFormatter : HKInteractiveChartDataFormatter

@property (retain, nonatomic) NSArray *rangeDataForAverage;

- (id)init;
- (void).cxx_destruct;
- (id)formattedSelectedRangeLabelDataWithChartData:(id)a0 context:(long long)a1;
- (void)setCurrentVisibleAverageNumber:(id)a0 averageForInBed:(BOOL)a1;

@end
