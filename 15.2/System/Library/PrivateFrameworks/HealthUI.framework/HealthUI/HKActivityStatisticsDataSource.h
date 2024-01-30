@class NSPredicate, NSCalendar, HKUnitPreferenceController;

@interface HKActivityStatisticsDataSource : HKHealthQueryChartCacheDataSource {
    NSPredicate *_sourcesPredicate;
    NSCalendar *_gregorianCalendar;
    NSCalendar *_gregorianNonUTCCalendar;
    HKUnitPreferenceController *_unitController;
}

- (id)queryDescription;
- (void).cxx_destruct;
- (id)queriesForStartDate:(id)a0 endDate:(id)a1 statisticsInterval:(id)a2 completionHandler:(id /* block */)a3;
- (id)_dateComponentsForDate:(id)a0;
- (id)_calorieValueFromStatsCollection:(id)a0 range:(id)a1;
- (id)_cachePredicateForStartDate:(id)a0 endDate:(id)a1;
- (id)_workoutsPredicateForStartDate:(id)a0 endDate:(id)a1;
- (void)_handleStatistics:(id)a0 activityCaches:(id)a1 workouts:(id)a2 completion:(id /* block */)a3;
- (id)initWithUnitController:(id)a0 healthStore:(id)a1 sourcesPredicate:(id)a2;

@end
