@class NSCalendar;

@interface HKMostRecentValueQuantityTypeDataSource : HKQuantityTypeDataSource

@property (retain, nonatomic) NSCalendar *currentCalendar;

- (id)queryDescription;
- (BOOL)_interval:(id)a0 isEqualToInterval:(id)a1;
- (id)_intervalFromZoomLevel:(long long)a0;
- (void).cxx_destruct;
- (id)_dataSourceValueFromMostRecentQuantity:(id)a0 quantityDateInterval:(id)a1 statisticsInterval:(id)a2;
- (id)initWithUnitController:(id)a0 displayType:(id)a1 healthStore:(id)a2 currentCalendar:(id)a3;
- (id)_middleDateFromInterval:(id)a0 endDate:(id)a1;
- (id)queriesForStartDate:(id)a0 endDate:(id)a1 statisticsInterval:(id)a2 completionHandler:(id /* block */)a3;

@end
