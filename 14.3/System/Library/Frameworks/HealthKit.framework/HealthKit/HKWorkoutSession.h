@class NSUUID, NSDate, NSString, HKTaskServerProxyProvider, HKHealthStore, HKWorkoutSessionTaskConfiguration, HKWorkoutConfiguration, NSObject, HKLiveWorkoutBuilder, HKStateMachine;
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
@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly) unsigned long long activityType;
@property (readonly) long long locationType;
@property (readonly, copy) HKWorkoutConfiguration *workoutConfiguration;
@property (weak) id<HKWorkoutSessionDelegate> delegate;
@property (readonly) long long state;
@property (readonly) NSDate *startDate;
@property (readonly) NSDate *endDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clientInterface;
+ (id)targetWorkoutSessionStateMachineForSessionUUID:(id)a0;
+ (void)_unitTest_clearAllRunningWorkouts;
+ (BOOL)_applicationHasRunningWorkout;
+ (id)serverInterface;

- (void)end;
- (void)connectionInvalidated;
- (id)_privateDelegate;
- (void)prepare;
- (void).cxx_destruct;
- (id)remoteInterface;
- (void)dealloc;
- (void)connectionInterrupted;
- (void)stateMachine:(id)a0 didTransition:(id)a1 fromState:(id)a2 toState:(id)a3 date:(id)a4 error:(id)a5;
- (void)stateMachine:(id)a0 didIgnoreEvent:(long long)a1 state:(id)a2;
- (void)_recoverWithCompletion:(id /* block */)a0;
- (id)initWithCoder:(id)a0;
- (void)_setupWithHealthStore:(id)a0;
- (void)startActivityWithDate:(id)a0 completion:(id /* block */)a1;
- (id)initWithConfiguration:(id)a0 error:(id *)a1;
- (void)pauseWithCompletion:(id /* block */)a0;
- (id)_initWithHealthStore:(id)a0 taskConfiguration:(id)a1 error:(id *)a2;
- (void)_setAssociatedWorkoutBuilder:(id)a0;
- (void)startActivity;
- (void)client_didUpdateStartDate:(id)a0 endDate:(id)a1;
- (void)client_didChangeToState:(long long)a0 date:(id)a1;
- (void)client_didGenerateEvents:(id)a0;
- (void)client_didFailWithError:(id)a0;
- (void)client_synchronizeWithCompletion:(id /* block */)a0;
- (void)_queue_markRecoveryRequired;
- (void)client_didUpdateWorkoutConfiguration:(id)a0;
- (BOOL)_queue_shouldAttemptRecovery;
- (void)prepareWithCompletion:(id /* block */)a0;
- (void)stopActivityWithDate:(id)a0 completion:(id /* block */)a1;
- (void)startActivityWithDate:(id)a0;
- (id)associatedWorkoutBuilderWithDevice:(id)a0 goalType:(unsigned long long)a1 goal:(id)a2;
- (void)stopActivityWithDate:(id)a0;
- (void)stopActivity;
- (id)initWithActivityType:(unsigned long long)a0 locationType:(long long)a1;
- (id)initWithHealthStore:(id)a0 configuration:(id)a1 error:(id *)a2;
- (id)associatedWorkoutBuilder;
- (void)_unitTest_discardAssociatedWorkoutBuilder;
- (void)pause;
- (id)exportedInterface;
- (void)resume;
- (void)endWithCompletion:(id /* block */)a0;
- (void)resumeWithCompletion:(id /* block */)a0;
- (void)encodeWithCoder:(id)a0;

@end
