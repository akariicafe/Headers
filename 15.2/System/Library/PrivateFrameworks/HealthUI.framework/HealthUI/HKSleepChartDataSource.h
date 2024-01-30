@class NSCalendar;

@interface HKSleepChartDataSource : HKHealthQueryChartCacheDataSource

@property (retain, nonatomic) NSCalendar *calendar;

- (id)_secondsFromStartDate:(id)a0 dateComponents:(id)a1;
- (id)_lastNonEmptySchedules:(id)a0;
- (id)_lastNonZeroDurationGoal:(id)a0;
- (id /* block */)_mappingFunctionForConsistencyChartWithContext:(id)a0;
- (id)_sleepDurationGoalFromQuantity:(id)a0;
- (id)queryDescription;
- (id)_chartPointDateForSummary:(id)a0;
- (id /* block */)_mappingFunctionForDurationChartWithContext:(id)a0;
- (id /* block */)queryDataForStartDate:(id)a0 endDate:(id)a1 statisticsInterval:(id)a2 healthStore:(id)a3 completionHandler:(id /* block */)a4;
- (void).cxx_destruct;
- (id)_endOfWeekContainingDate:(id)a0;
- (id)_computeWeeklySummaries:(id)a0;
- (double)_findMidPointOffsetForSummary:(id)a0 sleepCategory:(long long)a1;
- (id)_computeAveragePeriodsFromSummaries:(id)a0 summaryDateInterval:(id)a1;
- (id)_computeOneWeeklySummary:(id)a0;
- (BOOL)supportsChartQueryDataGeneration;
- (id)initWithHealthStore:(id)a0 representativeDisplayType:(id)a1 calendar:(id)a2;
- (id)queriesForStartDate:(id)a0 endDate:(id)a1 statisticsInterval:(id)a2 completionHandler:(id /* block */)a3;
- (id /* block */)mappingFunctionForContext:(id)a0;
- (id)chartPointsFromQueryData:(id)a0 dataIsFromRemoteSource:(BOOL)a1;
- (id)_sleepScheduleForSummary:(id)a0;

@end
