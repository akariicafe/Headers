@class NSMutableDictionary, HKHealthStore, NSCalendar, NSDate, NSMutableArray, HKAnchoredObjectQuery;

@interface FIUIWorkoutDataProvider : NSObject {
    HKHealthStore *_healthStore;
    NSMutableDictionary *_workoutsByDay;
    NSMutableArray *_updateHandlers;
    HKAnchoredObjectQuery *_currentWorkoutAnchoredObjectQuery;
    NSCalendar *_gregorianCalendar;
    NSCalendar *_currentCalendar;
    NSDate *_retryDate;
}

- (void)_commonInit;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_timeZoneDidChange:(id)a0;
- (id)initWithHealthStore:(id)a0;
- (void)stopFetching;
- (void)addUpdateHandler:(id /* block */)a0;
- (void)startFetchingFromDate:(id)a0;
- (id)allWorkouts;
- (void)_fetchAllWorkoutsFromDate:(id)a0;
- (void)_retryQueryOnDidBecomeActiveWithDate:(id)a0;
- (void)_handleAddedSamples:(id)a0;
- (void)_runUpdateHandlers;
- (void)_handleRemovedObjects:(id)a0;
- (void)_retryQuery:(id)a0;
- (BOOL)hasWorkouts;
- (id)workoutsForDay:(id)a0;

@end
