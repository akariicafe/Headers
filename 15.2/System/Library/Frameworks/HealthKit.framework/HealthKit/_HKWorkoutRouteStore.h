@class HKHealthStore, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface _HKWorkoutRouteStore : NSObject {
    NSMutableDictionary *_locations;
    NSMutableDictionary *_series;
    NSObject<OS_dispatch_queue> *_locationQueue;
    long long _loadingCount;
    id /* block */ _loadingCompletionBlock;
    HKHealthStore *_healthStore;
}

- (id)initWithHealthStore:(id)a0;
- (id)samples;
- (void).cxx_destruct;
- (id)init;
- (void)_queue_checkAndReturnIfLocationsLoaded;
- (id)_queue_locations;
- (void)setWorkoutRoutes:(id)a0;
- (void)_queue_addWorkoutRoutes:(id)a0;
- (void)_fetchAllLocationsFromSeriesSample:(id)a0;
- (void)_setLocations:(id)a0 forUUID:(id)a1;
- (BOOL)containsSameValuesAs:(id)a0;
- (void)addWorkoutRoutes:(id)a0;
- (void)fetchAllLocationsWithCompletion:(id /* block */)a0;

@end
