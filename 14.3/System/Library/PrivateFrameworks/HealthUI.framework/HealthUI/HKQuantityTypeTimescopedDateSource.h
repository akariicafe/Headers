@interface HKQuantityTypeTimescopedDateSource : HKQuantityTypeDataSource

- (id)queryDescription;
- (id)queriesForStartDate:(id)a0 endDate:(id)a1 statisticsInterval:(id)a2 completionHandler:(id /* block */)a3;
- (BOOL)_interval:(id)a0 isEqualToIntervalFromCalendarUnit:(unsigned long long)a1;
- (unsigned long long)calendarUnitForTimeScope:(long long)a0 displayType:(id)a1;
- (id)_componentsToEnumerateFromInterval:(id)a0;
- (id)_quantityValueFromStatistics:(id)a0 statisticsInterval:(id)a1 date:(id)a2;
- (id)statisticsIntervalForTimeScope:(long long)a0 displayType:(id)a1;

@end
