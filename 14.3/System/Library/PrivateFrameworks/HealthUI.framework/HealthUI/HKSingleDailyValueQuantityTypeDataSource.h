@interface HKSingleDailyValueQuantityTypeDataSource : HKQuantityTypeDataSource

- (id)queryDescription;
- (id)queriesForStartDate:(id)a0 endDate:(id)a1 statisticsInterval:(id)a2 completionHandler:(id /* block */)a3;
- (id)_quantityValueFromStatistics:(id)a0 statisticsInterval:(id)a1 date:(id)a2;

@end
