@class NSArray, NSString, HDSPTimeAsleepTrackerStateMachine, NSDate, HKSPSleepScheduleModel, HDSPEnvironment;
@protocol HDSPTimeAsleepTracker, HDSPWakeDetectorDelegate, NAScheduler, HDSPSleepTrackerDelegate, HDSPSleepEventDelegate;

@interface HDSPTimeAsleepTracker : NSObject <HDSPSleepEventHandler, HDSPSleepEventProvider, HDSPTimeAsleepTrackerStateMachineInfoProvider, HDSPTimeAsleepTrackerStateMachineDelegate, HDSPTimeChangeObserver, HDSPDiagnosticsProvider, HDSPSleepScheduleStateObserver, HDSPSleepModeObserver, HDSPSleepScheduleModelObserver, HDSPWakeDetector, HDSPNotificationObserver, HDSPDevicePowerObserver, HDSPSleepTracker>

@property (readonly, copy, nonatomic) id /* block */ sleepTrackerProvider;
@property (readonly, nonatomic) id<HDSPTimeAsleepTracker> sleepTracker;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } timeAsleepTrackerLock;
@property (readonly, nonatomic) HDSPTimeAsleepTrackerStateMachine *stateMachine;
@property (readonly, nonatomic) NSArray *appLaunchRegistrations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *providerIdentifier;
@property (weak, nonatomic) id<HDSPSleepEventDelegate> sleepEventDelegate;
@property (readonly, nonatomic) NSDate *currentDate;
@property (readonly, nonatomic) HKSPSleepScheduleModel *sleepScheduleModel;
@property (readonly, nonatomic) BOOL isCharging;
@property (readonly, nonatomic) BOOL inUserRequestedSleepMode;
@property (readonly, nonatomic) BOOL inWakeDetectionWindow;
@property (readonly, nonatomic) unsigned long long sleepScheduleState;
@property (readonly, nonatomic) id<NAScheduler> callbackScheduler;
@property (readonly, nonatomic) BOOL isDetecting;
@property (readonly, nonatomic) unsigned long long detectionWindowMinutes;
@property (weak, nonatomic) id<HDSPWakeDetectorDelegate> wakeDetectorDelegate;
@property (weak, nonatomic) id<HDSPSleepTrackerDelegate> delegate;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment;

- (void)significantTimeChangeDetected:(id)a0;
- (id)eventIdentifiers;
- (id)diagnosticDescription;
- (id)diagnosticInfo;
- (void)environmentDidBecomeReady:(id)a0;
- (id)notificationListener:(id)a0 didReceiveNotificationWithName:(id)a1;
- (id)upcomingEventsDueAfterDate:(id)a0;
- (void)sleepScheduleStateDidChange:(unsigned long long)a0 previousState:(unsigned long long)a1 reason:(unsigned long long)a2;
- (id)currentState;
- (void)updateState;
- (void)stopDetecting;
- (void)environmentWillBecomeReady:(id)a0;
- (void)sleepScheduleModelManager:(id)a0 didUpdateSleepScheduleModel:(id)a1;
- (void)sleepEventIsDue:(id)a0;
- (id)processedSessionForSession:(id)a0;
- (void).cxx_destruct;
- (void)startDetecting;
- (id)initWithEnvironment:(id)a0;
- (void)_withLock:(id /* block */)a0;
- (void)sleepModeDidChange:(long long)a0 previousMode:(long long)a1 reason:(unsigned long long)a2;
- (void)previousSessionFinished;
- (id)initWithEnvironment:(id)a0 sleepTrackerProvider:(id /* block */)a1;
- (void)_handleSleepSessionAnalysisResults:(id)a0 endReason:(unsigned long long)a1;
- (id)_createSleepSessionWithSleepAnalysis:(id)a0 endReason:(unsigned long long)a1;
- (void)_handleAppLaunched:(id)a0 onDate:(id)a1;
- (id)trackingWindowAfterDate:(id)a0;
- (void)_handleActivityDetectedOnDate:(id)a0;
- (void)_handleInternalSleepSessionEndRequest;
- (void)scheduleSleepTracking;
- (void)unscheduleSleepTracking;
- (void)startSleepTrackingSessionWithReason:(unsigned long long)a0;
- (void)endSleepTrackingSessionWithReason:(unsigned long long)a0;
- (void)startActivityDetection;
- (void)stopActivityDetection;
- (void)startAppLaunchDetection;
- (void)stopAppLaunchDetection;
- (void)notifyForActivityDetectedOnDate:(id)a0;
- (void)deviceChangedChargingState:(BOOL)a0;

@end
