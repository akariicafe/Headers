@interface HKSingleDailyValueQuantityTypeDataSource : HKQuantityTypeDataSource

- (id)queryDescription;
- (id)queriesForStartDate:(id)a0 endDate:(id)a1 statisticsInterval:(id)a2 completionHandler:(id /* block */)a3;
- (id)_componentsForDailyValues;
- (BOOL)_matchesDailyValues:(id)a0;
- (id)_quantityValueFromStatistics:(id)a0 statisticsInterval:(id)a1 date:(id)a2;
- (BOOL)_shouldEmitOnlySinglePointForStatistics:(id)a0;
- (unsigned long long)calendarUnitForTimeScope:(long long)a0 displayType:(id)a1;
- (BOOL)requiresPointRealignmentToMidnightForStatisticsInterval:(id)a0;
- (id)statisticsIntervalForTimeScope:(long long)a0 displayType:(id)a1;

@end
