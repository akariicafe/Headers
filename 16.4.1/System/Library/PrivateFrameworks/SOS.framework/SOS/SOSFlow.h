@class PCPersistentTimer, _HKMedicalIDData, HKHealthStore, NSHashTable, NSTimer, NSUserDefaults;
@protocol SOSCoreAnalyticsReporting;

@interface SOSFlow : NSObject {
    PCPersistentTimer *_timer;
}

@property (retain, nonatomic) NSUserDefaults *healthUserDefaults;
@property (retain, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) _HKMedicalIDData *medicalIDData;
@property (readonly, nonatomic) long long sosFlowTrigger;
@property (nonatomic) unsigned long long sosFlowType;
@property (nonatomic) long long currentState;
@property (retain, nonatomic) NSHashTable *observers;
@property (nonatomic) BOOL isUserResponsive;
@property (nonatomic) BOOL shouldIgnoreMotionCancel;
@property (nonatomic) BOOL didSeeUnresponsiveResting;
@property (retain, nonatomic) NSTimer *flowStateHeartbeatTimer;
@property (retain, nonatomic) id<SOSCoreAnalyticsReporting> coreAnalyticsReporter;

+ (BOOL)isPreCallState:(long long)a0;
+ (unsigned long long)sosFlowTypeForTriggerMechanism:(long long)a0;
+ (BOOL)isInterruptibleState:(long long)a0;
+ (BOOL)isInterruptingEvent:(unsigned long long)a0;
+ (BOOL)isTerminalState:(long long)a0;
+ (BOOL)isTriggerMechanismUserInitiated:(long long)a0;
+ (BOOL)needsHeartbeatForState:(long long)a0;
+ (long long)sosFlowStateForString:(id)a0;
+ (id)validEventsforState:(long long)a0;

- (void)timerFired:(id)a0;
- (void)addObserver:(id)a0;
- (void)_invalidateTimer;
- (void)updateState:(long long)a0;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (long long)restingState;
- (void)motionDidCancel;
- (void)_prefetchMedicalID;
- (void)callFinished;
- (BOOL)canDeviceTriggerAutoDialForSOSFlowType:(unsigned long long)a0;
- (double)checkInTimeoutForSOSFlowType:(unsigned long long)a0;
- (void)clearFlowStateHeartbeatTimer;
- (void)contactsCountdownDismissed;
- (void)countdownRequestedDial;
- (void)eventTriggered;
- (void)handleEmergencyCallInititated;
- (void)handleEmergencyFallback;
- (void)handleSOSFlowEvent:(unsigned long long)a0 withMetaData:(id)a1;
- (void)handleUserExited;
- (id)initWithTriggerMechanism:(long long)a0 healthStore:(id)a1;
- (BOOL)shouldShowMedicalID;
- (void)startAnomalyFlow;
- (void)startFlowStateHeartbeatTimer;
- (void)startTimerToAutoDial;
- (void)timerRequestsCountdownToAutoCall;
- (void)userDismissedCallCountdown;
- (void)userRespondedToConfirmationWith:(unsigned long long)a0;
- (void)userRespondedToRestingStateWith:(long long)a0;
- (void)willHandleEvent:(unsigned long long)a0 withMetaData:(id)a1;

@end
