@class NSString, NSUUID, HDWorkoutBuilderServer;

@interface HDWorkoutBuilderSampleQueryServer : HDQueryServer <HDTaskServerObserver, HDWorkoutBuilderServerSampleObserer, HDDatabaseProtectedDataObserver> {
    BOOL _hasFinishedHistoricalFetch;
    BOOL _hasDeliveredInitialResults;
    NSUUID *_workoutBuilderIdentifier;
    HDWorkoutBuilderServer *_workoutBuilderServer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requiredEntitlements;
+ (Class)queryClass;
+ (BOOL)validateConfiguration:(id)a0 client:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (void)_queue_start;
- (BOOL)_shouldExecuteWhenProtectedDataIsUnavailable;
- (void)database:(id)a0 protectedDataDidBecomeAvailable:(BOOL)a1;
- (BOOL)_shouldObserveOnPause;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void)didCreateTaskServer:(id)a0;
- (void)_queue_performHistoricalQuery;
- (id)workoutBuilderSampleQueryClientWithErrorHandler:(id /* block */)a0;
- (void)_queue_scheduleHistoricalQuery;
- (void)didInvalidateTaskServer:(id)a0;
- (void)workoutBuilderServer:(id)a0 addedSamples:(id)a1;
- (BOOL)_shouldObserveDatabaseProtectedDataAvailability;

@end
