@interface HKSingleDailyValueQuantityTypeDataSource : HKQuantityTypeDataSource

- (id)_componentsForDailyValues;
- (id)queryDescription;
- (BOOL)_matchesDailyValues:(id)a0;
- (id)queriesForStartDate:(id)a0 endDate:(id)a1 statisticsInterval:(id)a2 completionHandler:(id /* block */)a3;
- (id)_quantityValueFromStatistics:(id)a0 statisticsInterval:(id)a1 date:(id)a2;
- (unsigned long long)calendarUnitForTimeScope:(long long)a0 displayType:(id)a1;
- (id)statisticsIntervalForTimeScope:(long long)a0 displayType:(id)a1;

@end
