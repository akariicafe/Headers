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
- (id)init;
- (void).cxx_destruct;
- (void)_fetchAllLocationsFromSeriesSample:(id)a0;
- (void)_queue_addWorkoutRoutes:(id)a0;
- (void)_queue_checkAndReturnIfLocationsLoaded;
- (id)_queue_locations;
- (void)_setLocations:(id)a0 forUUID:(id)a1;
- (void)addWorkoutRoutes:(id)a0;
- (BOOL)containsSameValuesAs:(id)a0;
- (void)fetchAllLocationsWithCompletion:(id /* block */)a0;
- (void)setWorkoutRoutes:(id)a0;

@end
