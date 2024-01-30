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

- (void)significantTimeChangeDetected:(id)a0;
- (id)eventIdentifiers;
- (id)_currentState;
- (id)diagnosticDescription;
- (id)diagnosticInfo;
- (void)environmentDidBecomeReady:(id)a0;
- (id)notificationListener:(id)a0 didReceiveNotificationWithName:(id)a1;
- (id)upcomingEventsDueAfterDate:(id)a0;
- (void)sleepScheduleStateDidChange:(unsigned long long)a0 previousState:(unsigned long long)a1 reason:(unsigned long long)a2;
- (void)scheduleTrackingDelay;
- (void)startObservingProtectedHealthDataAvailability;
- (BOOL)_isDelayingForTracking;
- (void)environmentWillBecomeReady:(id)a0;
- (void)sleepScheduleModelManager:(id)a0 didUpdateSleepScheduleModel:(id)a1;
- (void)postResultsNotification;
- (void)sleepEventIsDue:(id)a0;
- (void).cxx_destruct;
- (void)executeQuery;
- (id)initWithEnvironment:(id)a0 retryAttemptScheduler:(id)a1;
- (id)performImmediateQueryForNotification;
- (double)_trackingDelayDuration;
- (id)initWithEnvironment:(id)a0;
- (void)_lock_startQuery;
- (BOOL)_isWaitingForWakeUp;
- (id)_sleepScheduleModel;
- (void)stopObservingProtectedHealthDataAvailability;
- (void)_withLock:(id /* block */)a0;
- (void)unscheduleTrackingDelay;
- (void)scheduleRetryAttempt;
- (void)unscheduleRetryAttempt;
- (id)notificationAttemptWindowForWakeUpBeforeDate:(id)a0;
- (void)_updateState;

@end
