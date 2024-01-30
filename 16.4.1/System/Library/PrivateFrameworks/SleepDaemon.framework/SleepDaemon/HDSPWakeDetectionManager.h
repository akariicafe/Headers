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
@property (readonly, nonatomic) unsigned long long activeTypes;
@property (readonly, nonatomic) NSDate *nextWakeUp;
@property (readonly, nonatomic) NSDate *upcomingStartDetection;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment;
@property (readonly, copy, nonatomic) NSString *providerIdentifier;
@property (weak, nonatomic) id<HDSPSleepEventDelegate> sleepEventDelegate;

+ (id)platformSpecificProviders:(id)a0;

- (id)upcomingEventsDueAfterDate:(id)a0;
- (void)unscheduleStateExpiration;
- (void)startWakeDetection:(unsigned long long)a0;
- (void)earlyWakeUpWasNotifiedRemotely;
- (void)postWakeDetectionNotification:(unsigned long long)a0;
- (id)_currentState;
- (void)scheduleStateExpiration;
- (id)diagnosticDescription;
- (id)eventIdentifiers;
- (void)wakeDetector:(id)a0 didDetectWakeUpEventOnDate:(id)a1;
- (id)initWithEnvironment:(id)a0;
- (void)_startWakeDetection;
- (void)sleepEventIsDue:(id)a0;
- (id)_detectionWindowForType:(unsigned long long)a0 wakeUpDate:(id)a1 bedtimeDate:(id)a2;
- (void)_withLock:(id /* block */)a0;
- (BOOL)sleepFeaturesEnabled;
- (void)environmentDidBecomeReady:(id)a0;
- (id)diagnosticInfo;
- (void)sleepScheduleStateDidChange:(unsigned long long)a0 previousState:(unsigned long long)a1 reason:(unsigned long long)a2;
- (void)environmentWillBecomeReady:(id)a0;
- (void)sleepScheduleModelManager:(id)a0 didUpdateSleepScheduleModel:(id)a1;
- (void)significantTimeChangeDetected:(id)a0;
- (id)detectionWindowForType:(unsigned long long)a0;
- (id)initWithEnvironment:(id)a0 wakeDetectorProviders:(id)a1;
- (void)updateState;
- (void).cxx_destruct;
- (void)stopWakeDetection;

@end
