@class NSMutableDictionary, HKHealthStore, NSCalendar, NSDate, NSMutableArray, HKAnchoredObjectQuery;

@interface FIUIWorkoutDataProvider : NSObject {
    HKHealthStore *_healthStore;
    NSMutableDictionary *_workoutsByDay;
    NSMutableArray *_updateHandlers;
    HKAnchoredObjectQuery *_currentWorkoutAnchoredObjectQuery;
    NSCalendar *_gregorianCalendar;
    NSCalendar *_currentCalendar;
    NSDate *_retryDate;
    BOOL _shouldSortAscending;
}

- (id)initWithHealthStore:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addUpdateHandler:(id /* block */)a0;
- (void)_commonInit;
- (void)dealloc;
- (void)_timeZoneDidChange:(id)a0;
- (void)stopFetching;
- (void)startFetchingFromDate:(id)a0;
- (id)allWorkouts;
- (id)initWithHealthStore:(id)a0 shouldSortAscending:(BOOL)a1;
- (void)_fetchAllWorkoutsFromDate:(id)a0;
- (void)_retryQueryOnDidBecomeActiveWithDate:(id)a0;
- (void)_handleAddedSamples:(id)a0;
- (void)_runUpdateHandlers;
- (void)_handleRemovedObjects:(id)a0;
- (void)_retryQuery:(id)a0;
- (BOOL)hasWorkouts;
- (id)workoutsForDay:(id)a0;

@end
