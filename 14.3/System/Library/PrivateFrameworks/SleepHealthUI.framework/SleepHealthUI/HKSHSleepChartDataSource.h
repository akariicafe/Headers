@class NSCalendar;

@interface HKSHSleepChartDataSource : HKHealthQueryChartCacheDataSource

@property (retain, nonatomic) NSCalendar *calendar;

- (void).cxx_destruct;
- (id)queryDescription;
- (id /* block */)_mappingFunctionForDurationChartWithContext:(id)a0;
- (id /* block */)_mappingFunctionForConsistencyChartWithContext:(id)a0;
- (id)queriesForStartDate:(id)a0 endDate:(id)a1 statisticsInterval:(id)a2 completionHandler:(id /* block */)a3;
- (id /* block */)mappingFunctionForContext:(id)a0;
- (id)initWithHealthStore:(id)a0 representativeDisplayType:(id)a1 calendar:(id)a2;
- (id)_sleepDurationGoalFromQuantity:(id)a0;
- (id)_sleepScheduleForSummary:(id)a0;
- (id)_secondsFromStartDate:(id)a0 dateComponents:(id)a1;

@end
