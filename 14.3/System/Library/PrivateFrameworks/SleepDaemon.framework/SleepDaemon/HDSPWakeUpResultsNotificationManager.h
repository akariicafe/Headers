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

- (id)upcomingEventsDueAfterDate:(id)a0;
- (id)eventIdentifiers;
- (void)significantTimeChangeDetected:(id)a0;
- (BOOL)_isWaitingForWakeUp;
- (id)notificationListener:(id)a0 didReceiveNotificationWithName:(id)a1;
- (void)environmentDidBecomeReady:(id)a0;
- (void)startObservingProtectedHealthDataAvailability;
- (void)stopObservingProtectedHealthDataAvailability;
- (void).cxx_destruct;
- (void)postResultsNotification;
- (id)_currentState;
- (void)sleepScheduleModelManager:(id)a0 source:(id)a1 didUpdateSleepScheduleModel:(id)a2;
- (id)initWithEnvironment:(id)a0;
- (double)_trackingDelayDuration;
- (id)diagnosticInfo;
- (void)_updateState;
- (void)_withLock:(id /* block */)a0;
- (BOOL)_isDelayingForTracking;
- (id)diagnosticDescription;
- (id)notificationAttemptWindowForWakeUpBeforeDate:(id)a0;
- (void)unscheduleTrackingDelay;
- (void)scheduleRetryAttempt;
- (void)sleepEventIsDue:(id)a0;
- (id)performImmediateQueryForNotification;
- (void)sleepScheduleStateDidChange:(unsigned long long)a0 previousState:(unsigned long long)a1 reason:(unsigned long long)a2;
- (void)_lock_startQuery;
- (void)environmentWillBecomeReady:(id)a0;
- (id)initWithEnvironment:(id)a0 retryAttemptScheduler:(id)a1;
- (void)executeQuery;
- (void)unscheduleRetryAttempt;
- (id)_sleepScheduleModel;
- (void)scheduleTrackingDelay;

@end
