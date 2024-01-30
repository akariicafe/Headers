@class HKSHGoalProgressEngine, NAFuture, NSString, HDSPEnvironment, HDSPWakeUpResultsNotificationStateMachine, NSDate;
@protocol HDSPSleepEventDelegate, HDSPActivityScheduler, NAScheduler;

@interface HDSPWakeUpResultsNotificationManager : NSObject <HDSPWakeUpResultsNotificationStateMachineInfoProvider, HDSPWakeUpResultsNotificationStateMachineDelegate, HDSPDiagnosticsProvider, HDSPEnvironmentAware, HDSPNotificationObserver, HDSPSleepEventHandler, HDSPSleepEventProvider, HDSPSleepScheduleModelObserver, HDSPSleepScheduleStateObserver, HDSPTimeChangeObserver>

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (readonly, nonatomic) HDSPWakeUpResultsNotificationStateMachine *stateMachine;
@property (readonly, nonatomic) NAFuture *queryResultFuture;
@property (readonly, nonatomic) HKSHGoalProgressEngine *goalProgressEngine;
@property (readonly, nonatomic) id<HDSPActivityScheduler> retryAttemptScheduler;
@property (readonly, nonatomic) NSDate *currentDate;
@property (readonly, nonatomic) BOOL isWakeUpResultsNotificationEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<NAScheduler> callbackScheduler;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment;
@property (readonly, copy, nonatomic) NSString *providerIdentifier;
@property (weak, nonatomic) id<HDSPSleepEventDelegate> sleepEventDelegate;

+ (id)retryCriteria;
+ (id)retryActivity;

- (void)unscheduleRetryAttempt;
- (void)scheduleRetryAttempt;
- (id)upcomingEventsDueAfterDate:(id)a0;
- (void)unscheduleStateExpiration;
- (id)_sleepScheduleModel;
- (id)initWithEnvironment:(id)a0 retryAttemptScheduler:(id)a1;
- (void)_updateState;
- (void)startObservingProtectedHealthDataAvailability;
- (id)_currentState;
- (void)scheduleStateExpiration;
- (void)postResultsNotification;
- (id)diagnosticDescription;
- (id)eventIdentifiers;
- (void)stopObservingProtectedHealthDataAvailability;
- (id)initWithEnvironment:(id)a0;
- (id)notificationListener:(id)a0 didReceiveNotificationWithName:(id)a1;
- (void)sleepEventIsDue:(id)a0;
- (void)_withLock:(id /* block */)a0;
- (double)_trackingDelayDuration;
- (void)environmentDidBecomeReady:(id)a0;
- (id)diagnosticInfo;
- (void)sleepScheduleStateDidChange:(unsigned long long)a0 previousState:(unsigned long long)a1 reason:(unsigned long long)a2;
- (void)environmentWillBecomeReady:(id)a0;
- (id)notificationAttemptWindowForWakeUpBeforeDate:(id)a0;
- (void)sleepScheduleModelManager:(id)a0 didUpdateSleepScheduleModel:(id)a1;
- (void)significantTimeChangeDetected:(id)a0;
- (id)performImmediateQueryForNotification;
- (void)executeQuery;
- (BOOL)_isDelayingForTracking;
- (BOOL)_isWaitingForWakeUp;
- (void).cxx_destruct;
- (void)_lock_startQuery;

@end
