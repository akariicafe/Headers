@class NSString, HDProfile, NSUUID, NSObject, HDDefaultWorkoutSessionController;
@protocol HDWorkoutDataAccumulator, HDWorkoutSessionStateController, OS_dispatch_queue;

@interface HDGymKitWorkoutSessionController : NSObject <HDFitnessMachineSessionObserver, HDWorkoutSessionController, HDWorkoutSessionStateController> {
    HDProfile *_profile;
    id<HDWorkoutSessionStateController> _sessionStateController;
    NSObject<OS_dispatch_queue> *_queue;
    HDDefaultWorkoutSessionController *_defaultSessionController;
    NSUUID *_fitnessMachineSessionUUID;
    BOOL _acceptsDataAccumulators;
    id<HDWorkoutDataAccumulator> _currentAccumulator;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<HDWorkoutDataAccumulator> workoutDataAccumulator;

+ (id)recoveryIdentifier;
+ (void)willFinishSessionWithRecoveryData:(id)a0 profile:(id)a1;

- (void)finish;
- (void)generateError:(id)a0;
- (BOOL)resumeWithError:(id *)a0;
- (void)endHeartRateRecovery;
- (BOOL)prepareWithError:(id *)a0;
- (void)unitTest_setCMWorkoutManager:(id)a0;
- (void).cxx_destruct;
- (BOOL)enableAutomaticDetectionForActivityConfigurations:(id)a0;
- (BOOL)pauseWithError:(id *)a0;
- (void)autoPauseWithDate:(id)a0;
- (void)autoResumeWithDate:(id)a0;
- (void)beginNewActivity:(id)a0;
- (void)didBeginNewActivity:(id)a0;
- (void)didDetectActivityChange:(id)a0;
- (void)didEndCurrentActivity:(id)a0;
- (void)endCurrentActivity:(id)a0;
- (BOOL)endWithError:(id *)a0;
- (void)finishAggregationWithDate:(id)a0;
- (void)fitnessMachineSessionUUID:(id)a0 updatedRecoveryConfiguration:(id)a1;
- (void)generateConfigurationUpdate:(id)a0;
- (void)generateEvent:(id)a0;
- (void)generateMetadata:(id)a0;
- (void)hktest_setStateTransitionCompletionHandler:(id /* block */)a0;
- (id)initWithProfile:(id)a0 sessionConfiguration:(id)a1 sessionStateController:(id)a2 recoveryState:(id)a3;
- (BOOL)startActivityWithDate:(id)a0 error:(id *)a1;
- (BOOL)stopActivityWithDate:(id)a0 error:(id *)a1;
- (BOOL)storeSessionControllerState:(id)a0 forRecoveryIdentifier:(id)a1 error:(id *)a2;
- (void)workoutSessionServer:(id)a0 accumulatorDidChange:(id)a1;
- (void)workoutSessionServer:(id)a0 didChangeConfiguration:(id)a1;
- (void)workoutSessionServer:(id)a0 didTransitionFromState:(long long)a1 toState:(long long)a2 date:(id)a3;

@end
