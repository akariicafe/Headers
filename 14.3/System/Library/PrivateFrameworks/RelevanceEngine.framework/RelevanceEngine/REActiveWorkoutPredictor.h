@class HKQuery, REUpNextTimer, NSDate;

@interface REActiveWorkoutPredictor : REPredictor <REActiveWorkoutPredictorProperties> {
    int _workoutStateNotifyToken;
    float _dailyAverageWorkouts;
    unsigned long long _numberOfWorkoutsPerformedToday;
    HKQuery *_workoutObservationQuery;
    REUpNextTimer *_workoutQueryCoalesceTimer;
}

@property BOOL hasActiveWorkout;
@property (retain) NSDate *lastCompletedWorkoutDate;
@property (readonly, nonatomic, getter=isActiveWorkout) BOOL activeWorkout;
@property (readonly, nonatomic) NSDate *lastWorkoutDate;
@property (readonly, nonatomic) BOOL currentlyHasActiveWorkout;
@property (readonly, nonatomic) float dailyAverageWorkouts;
@property (readonly, nonatomic) unsigned long long numberOfWorkoutsPerformedToday;

+ (double)updateInterval;
+ (id)supportedFeatures;

- (void).cxx_destruct;
- (void)dealloc;
- (void)update;
- (id)_init;
- (void)pause;
- (void)resume;
- (id)featureValueForFeature:(id)a0 element:(id)a1 engine:(id)a2 trainingContext:(id)a3;
- (void)_cancelMonitoringWorkoutIfNeeded;
- (void)_updateWorkoutState;
- (void)_scheduleFetchWorkoutTimer;
- (void)_queue_fetchWorkoutHistory;
- (void)_processWorkoutHistoryData:(id)a0 completion:(id /* block */)a1;

@end
