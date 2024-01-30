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
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (id)initWithHealthStore:(id)a0;
- (void)addUpdateHandler:(id /* block */)a0;
- (void)_commonInit;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_timeZoneDidChange:(id)a0;
- (id)workoutsForDay:(id)a0;
- (void)_fetchAllWorkoutsFromDate:(id)a0;
- (void)_handleAddedSamples:(id)a0;
- (void)_handleRemovedObjects:(id)a0;
- (void)_retryQuery:(id)a0;
- (void)_retryQueryOnDidBecomeActiveWithDate:(id)a0;
- (void)_runUpdateHandlers;
- (id)allWorkouts;
- (BOOL)hasWorkouts;
- (id)initWithHealthStore:(id)a0 shouldSortAscending:(BOOL)a1;
- (void)startFetchingFromDate:(id)a0;
- (void)stopFetching;

@end
