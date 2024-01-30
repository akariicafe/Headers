@class HDSPEnvironment, NSArray, NSString, HDSPWakeDetectionStateMachine, NSDate, HKSPSleepScheduleOccurrence, HKSPSleepScheduleModel;
@protocol NAScheduler, HDSPSleepEventDelegate;

@interface HDSPWakeDetectionManager : NSObject <HDSPWakeDetectorDelegate, HDSPWakeDetectionStateMachineDelegate, HDSPWakeDetectionStateMachineInfoProvider, HDSPDiagnosticsProvider, HDSPEnvironmentAware, HDSPSleepScheduleModelObserver, HDSPSleepEventHandler, HDSPSleepScheduleStateObserver, HDSPSleepEventProvider, HDSPTimeChangeObserver>

@property (readonly, nonatomic) NSArray *wakeDetectors;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } wakeDetectionLock;
@property (readonly, nonatomic) HDSPWakeDetectionStateMachine *stateMachine;
@property (readonly, nonatomic) BOOL isDetecting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<NAScheduler> callbackScheduler;
@property (readonly, nonatomic) NSDate *currentDate;
@property (readonly, nonatomic) HKSPSleepScheduleOccurrence *relevantOccurrence;
@property (readonly, nonatomic) HKSPSleepScheduleModel *sleepScheduleModel;
@property (readonly, nonatomic) unsigned long long sleepScheduleState;
@property (readonly, nonatomic) BOOL sleepModeIsOff;
@property (readonly, nonatomic) BOOL isWatch;
@property (readonly, nonatomic) BOOL inDetectionWindow;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment;
@property (readonly, copy, nonatomic) NSString *providerIdentifier;
@property (weak, nonatomic) id<HDSPSleepEventDelegate> sleepEventDelegate;

+ (id)platformSpecificProviders:(id)a0;

- (id)upcomingEventsDueAfterDate:(id)a0;
- (id)eventIdentifiers;
- (void)significantTimeChangeDetected:(id)a0;
- (void)environmentDidBecomeReady:(id)a0;
- (void)updateState;
- (void).cxx_destruct;
- (id)_currentState;
- (void)sleepScheduleModelManager:(id)a0 source:(id)a1 didUpdateSleepScheduleModel:(id)a2;
- (id)initWithEnvironment:(id)a0;
- (BOOL)sleepFeaturesEnabled;
- (id)diagnosticInfo;
- (void)_withLock:(id /* block */)a0;
- (id)diagnosticDescription;
- (void)sleepEventIsDue:(id)a0;
- (void)sleepScheduleStateDidChange:(unsigned long long)a0 previousState:(unsigned long long)a1 reason:(unsigned long long)a2;
- (void)environmentWillBecomeReady:(id)a0;
- (void)wakeDetector:(id)a0 didDetectWakeUpEventOnDate:(id)a1;
- (void)earlyWakeUpWasNotifiedRemotely;
- (void)postWakeDetectionNotification;
- (id)initWithEnvironment:(id)a0 wakeDetectorProviders:(id)a1;
- (id)detectionWindowForDetector:(id)a0 afterDate:(id)a1;
- (id)nextWakeUpAfterDate:(id)a0;
- (id)_detectionWindowForDetector:(id)a0 afterDate:(id)a1 nextWakeUp:(id)a2;
- (id)upcomingStartDetectionDatesAfterDate:(id)a0;
- (id)detectionWindowsAfterDate:(id)a0;
- (id)_detectionWindowsAfterDate:(id)a0 nextWakeUp:(id)a1;
- (void)scheduleWakeDetection;
- (void)unscheduleWakeDetection;
- (void)startWakeDetection;
- (void)stopWakeDetection;
- (id)upcomingStartDetectionDateAfterDate:(id)a0;

@end
