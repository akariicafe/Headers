@class _HKWorkoutRouteStore, _HKLocationShifter, HKHealthStore, HKAnchoredObjectQuery;

@interface HKLocationFetcher : NSObject

@property (retain, nonatomic) _HKWorkoutRouteStore *routesStore;
@property (retain, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) HKAnchoredObjectQuery *routesQuery;
@property (retain, nonatomic) _HKLocationShifter *shifter;

- (id)initWithHealthStore:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_handleAndShiftLocations:(id)a0 forWorkout:(id)a1 withSamplesHandler:(id /* block */)a2;
- (BOOL)_routesAreSmoothed:(id)a0;
- (id)_workoutRoutesQueryForWorkout:(id)a0 withUpdateHandler:(id /* block */)a1;
- (void)fetchLocationsFromWorkout:(id)a0 applyThreshold:(BOOL)a1 withSamplesHandler:(id /* block */)a2;
- (void)fetchLocationsFromWorkout:(id)a0 dateInterval:(id)a1 samplesHandler:(id /* block */)a2;
- (void)fetchLocationsFromWorkout:(id)a0 withSamplesHandler:(id /* block */)a1;
- (void)fetchLocationsFromWorkout:(id)a0 workoutActivity:(id)a1 samplesHandler:(id /* block */)a2;
- (void)fetchRoutesFromWorkout:(id)a0 withUpdateHandler:(id /* block */)a1;

@end
