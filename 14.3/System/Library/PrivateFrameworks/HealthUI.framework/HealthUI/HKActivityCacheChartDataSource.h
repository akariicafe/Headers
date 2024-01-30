@class HKUnitPreferenceController, NSCalendar;

@interface HKActivityCacheChartDataSource : HKHealthQueryChartCacheDataSource {
    NSCalendar *_gregorianCalendar;
    NSCalendar *_gregorianNonUTCCalendar;
    HKUnitPreferenceController *_unitController;
}

- (void).cxx_destruct;
- (id)queryDescription;
- (id)queriesForStartDate:(id)a0 endDate:(id)a1 statisticsInterval:(id)a2 completionHandler:(id /* block */)a3;
- (id)_dateComponentsForDate:(id)a0;
- (id)_cachePredicateForStartDate:(id)a0 endDate:(id)a1;
- (id)_workoutsPredicateForStartDate:(id)a0 endDate:(id)a1;
- (void)_handleActivityCaches:(id)a0 workouts:(id)a1 blockStart:(id)a2 blockEnd:(id)a3 completion:(id /* block */)a4;
- (id)_unitForDisplayType;
- (id)initWithUnitController:(id)a0 healthStore:(id)a1;

@end
