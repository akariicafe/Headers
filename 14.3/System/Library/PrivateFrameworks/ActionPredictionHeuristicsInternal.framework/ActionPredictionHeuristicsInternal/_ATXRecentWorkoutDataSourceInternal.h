@class HKObserverQuery, HKHealthStore;

@interface _ATXRecentWorkoutDataSourceInternal : NSObject {
    HKHealthStore *_healthStore;
    HKObserverQuery *_query;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)_runQueryForLastWorkout:(id /* block */)a0;

@end
