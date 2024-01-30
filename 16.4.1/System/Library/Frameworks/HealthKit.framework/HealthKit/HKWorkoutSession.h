@class NSUUID, NSString, NSArray, NSDate, HKHealthStore, HKTaskServerProxyProvider, HKWorkoutActivity, HKWorkoutConfiguration, NSObject, HKWorkoutSessionTaskConfiguration, HKLiveWorkoutBuilder, HKStateMachine;
@protocol HKWorkoutSessionDelegate, OS_dispatch_queue;

@interface HKWorkoutSession : NSObject <_HKXPCExportable, HKStateMachineDelegate, NSSecureCoding> {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_clientQueue;
    id<HKWorkoutSessionDelegate> _delegate;
    long long _state;
    NSDate *_startDate;
    NSDate *_endDate;
    HKWorkoutSessionTaskConfiguration *_configuration;
    HKTaskServerProxyProvider *_proxyProvider;
    id<HKWorkoutSessionDelegate> _strongDelegate;
    HKLiveWorkoutBuilder *_associatedWorkoutBuilder;
    HKStateMachine *_targetStateMachine;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) HKHealthStore *healthStore;
@property (readonly, nonatomic) BOOL isGymKitSession;
@property (nonatomic) BOOL shouldStopPreviousSession;
@property (readonly, copy, nonatomic) NSArray *activityConfigurations;
@property (nonatomic) BOOL supportsAppRelaunchForRecovery;
@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly) unsigned long long activityType;
@property (readonly) long long locationType;
@property (readonly, copy) HKWorkoutConfiguration *workoutConfiguration;
@property (weak) id<HKWorkoutSessionDelegate> delegate;
@property (readonly) long long state;
@property (readonly) NSDate *startDate;
@property (readonly) NSDate *endDate;
@property (readonly, copy) HKWorkoutActivity *currentActivity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serverInterface;
+ (BOOL)_applicationHasRunningWorkout;
+ (id)clientInterface;
+ (void)_unitTest_clearAllRunningWorkouts;
+ (id)targetWorkoutSessionStateMachineForSessionUUID:(id)a0;

- (id)remoteInterface;
- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (void)encodeWithCoder:(id)a0;
- (void)end;
- (id)initWithCoder:(id)a0;
- (id)exportedInterface;
- (void)pause;
- (void)resumeWithCompletion:(id /* block */)a0;
- (void)stopActivity;
- (void)dealloc;
- (void)startActivity;
- (id)_privateDelegate;
- (void)prepare;
- (void).cxx_destruct;
- (void)resume;
- (id)initWithConfiguration:(id)a0 error:(id *)a1;
- (void)endWithCompletion:(id /* block */)a0;
- (void)prepareWithCompletion:(id /* block */)a0;
- (id)_initWithHealthStore:(id)a0 taskConfiguration:(id)a1 error:(id *)a2;
- (void)_queue_markRecoveryRequired;
- (BOOL)_queue_shouldAttemptRecovery;
- (void)_recoverWithCompletion:(id /* block */)a0;
- (void)_setAssociatedWorkoutBuilder:(id)a0;
- (void)_setupWithHealthStore:(id)a0;
- (void)_unitTest_discardAssociatedWorkoutBuilder;
- (id)associatedWorkoutBuilder;
- (id)associatedWorkoutBuilderWithDevice:(id)a0 goalType:(unsigned long long)a1 goal:(id)a2;
- (void)beginNewActivityWithConfiguration:(id)a0 date:(id)a1 metadata:(id)a2;
- (void)client_didBeginActivity:(id)a0 date:(id)a1;
- (void)client_didChangeToState:(long long)a0 date:(id)a1;
- (void)client_didEndActivity:(id)a0 date:(id)a1;
- (void)client_didFailWithError:(id)a0;
- (void)client_didGenerateEvents:(id)a0;
- (void)client_didSuggestWorkoutConfiguration:(id)a0 date:(id)a1;
- (void)client_didUpdateStartDate:(id)a0 endDate:(id)a1;
- (void)client_didUpdateWorkoutConfiguration:(id)a0;
- (void)client_synchronizeWithCompletion:(id /* block */)a0;
- (void)enableAutomaticDetectionForActivityConfigurations:(id)a0;
- (void)endCurrentActivityOnDate:(id)a0;
- (id)initWithActivityType:(unsigned long long)a0 locationType:(long long)a1;
- (id)initWithHealthStore:(id)a0 configuration:(id)a1 error:(id *)a2;
- (void)pauseWithCompletion:(id /* block */)a0;
- (void)pauseWithDate:(id)a0 completion:(id /* block */)a1;
- (void)resumeWithDate:(id)a0 completion:(id /* block */)a1;
- (void)startActivityWithDate:(id)a0;
- (void)startActivityWithDate:(id)a0 completion:(id /* block */)a1;
- (void)stateMachine:(id)a0 didIgnoreEvent:(long long)a1 state:(id)a2;
- (void)stateMachine:(id)a0 didTransition:(id)a1 fromState:(id)a2 toState:(id)a3 date:(id)a4 error:(id)a5;
- (void)stopActivityWithDate:(id)a0;
- (void)stopActivityWithDate:(id)a0 completion:(id /* block */)a1;

@end
