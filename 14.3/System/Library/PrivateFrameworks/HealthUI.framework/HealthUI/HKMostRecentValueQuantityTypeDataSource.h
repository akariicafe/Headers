@interface HKMostRecentValueQuantityTypeDataSource : HKQuantityTypeDataSource

- (id)queryDescription;
- (id)queriesForStartDate:(id)a0 endDate:(id)a1 statisticsInterval:(id)a2 completionHandler:(id /* block */)a3;
- (id)initWithUnitController:(id)a0 displayType:(id)a1 healthStore:(id)a2;
- (id)_dataSourceValueFromMostRecentQuantity:(id)a0 quantityDateInterval:(id)a1 statisticsInterval:(id)a2;
- (id)_middleDateFromInterval:(id)a0 endDate:(id)a1;
- (BOOL)_interval:(id)a0 isEqualToIntervalFromCalendarUnit:(unsigned long long)a1;
- (id)_dataSourceValueFromStatisticsCollection:(id)a0 statisticsInterval:(id)a1;

@end
