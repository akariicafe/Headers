@class NSString, CLLocationSmoother, HDProfile, HDSmoothingTask, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HDWorkoutLocationSmoother : NSObject <CLLocationSmootherDelegate, HDDatabaseProtectedDataObserver, HDForegroundClientProcessObserver, HDDataObserver, HDHealthDaemonReadyObserver> {
    CLLocationSmoother *_smoother;
    NSObject<OS_dispatch_queue> *_queue;
    HDProfile *_profile;
    NSMutableArray *_pendingSmoothingTasks;
    HDSmoothingTask *_currentSmoothingTask;
    NSObject<OS_dispatch_source> *_timeoutSource;
    double _smoothingTaskTimeout;
    BOOL _needToCheckForLocationSeriesOnUnlock;
    BOOL _isFirstLaunchAndNotYetSmoothed;
}

@property (copy, nonatomic) id /* block */ didCompleteAllPendingSmoothingTasksHandler;
@property (copy, nonatomic) id /* block */ unitTest_wilTriggerSmoothing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProfile:(id)a0;
- (BOOL)_containsWorkoutObject:(id)a0 error:(id *)a1;
- (id)_createWorkoutRouteWithMetadata:(id)a0 sourceEntity:(id)a1 locations:(id)a2 error:(id *)a3;
- (void)_finishSmoothingSampleWithTask:(id)a0;
- (void)_queue_smoothRouteSampleForTask:(id)a0;
- (void)unitTest_smoothRouteSample:(id)a0 withSmoother:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (BOOL)_shouldObserveWorkouts;
- (void)_queue_locationManagerDidSmoothLocations:(id)a0 forTask:(id)a1 error:(id)a2;
- (void)dealloc;
- (void)_queue_cancelTimeout;
- (id)_locationsForSampleUUID:(id)a0 error:(id *)a1;
- (void)_associationsSyncedForWorkout:(id)a0;
- (void)_queue_startSmoothingTask:(id)a0;
- (void)samplesAdded:(id)a0 anchor:(id)a1;
- (void)_queue_smoothingDidFailForTask:(id)a0 error:(id)a1 shouldRetry:(BOOL)a2;
- (void)daemonReady:(id)a0;
- (void)_queue_scheduleSmoothingTimeoutTimerForTask:(id)a0;
- (BOOL)_queue_insertInitialMetadataForRoute:(id)a0 syncIdentifier:(id)a1 error:(id *)a2;
- (void)database:(id)a0 protectedDataDidBecomeAvailable:(BOOL)a1;
- (void)_queue_setupLocationObserversIfNeeded;
- (void)_queue_saveLocations:(id)a0 forTask:(id)a1 smoothingError:(id)a2;
- (void)_queue_smoothNextSample;
- (BOOL)_deleteSample:(id)a0 error:(id *)a1;
- (void)_queue_smoothAllUnsmoothedLocationSeries;
- (void)smoothRouteWithWorkoutUUID:(id)a0 completion:(id /* block */)a1;
- (void)foregroundClientProcessesDidChange:(id)a0 previouslyForegroundBundleIdentifiers:(id)a1;
- (id)_queue_createNewSeriesFromTask:(id)a0 locations:(id)a1 error:(id *)a2;

@end
