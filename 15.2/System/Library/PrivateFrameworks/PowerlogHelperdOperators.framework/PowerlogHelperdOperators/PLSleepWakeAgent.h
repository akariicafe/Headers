@class PLSemaphore, PLXPCListenerOperatorComposition, PLEventForwardPowerStateEntry;

@interface PLSleepWakeAgent : PLAgent

@property unsigned int rootDomainConnect;
@property unsigned int pmNotifier;
@property struct IONotificationPort { } *systemPowerPortRef;
@property (retain) PLSemaphore *canSleepSemaphore;
@property double apSOCBasePower;
@property (retain) PLXPCListenerOperatorComposition *wakeGestureXPCListener;
@property struct __IOPMConnection { } *pmConnection;
@property (retain) PLEventForwardPowerStateEntry *lastSleepEntry;
@property (retain) PLEventForwardPowerStateEntry *lastWakeEntry;

+ (id)entryEventBackwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitions;
+ (void)load;
+ (id)entryEventForwardDefinitionPowerState;
+ (id)railDefinitions;
+ (id)entryEventNoneDefinitionPowerNapConfig;
+ (id)entryEventPointDefinitionWakeGesture;
+ (id)entryEventPointDefinitionCurrentMachWakeTime;
+ (id)entryEventPointDefinitionKernelState;
+ (id)entryEventPointDefinitionScheduledWake;
+ (id)entryEventForwardDefinitionUserIdle;
+ (id)entryEventPointDefinitionCurrentKernelWakeTime;

- (void)log;
- (void).cxx_destruct;
- (id)wakeReasons;
- (id)init;
- (void)initOperatorDependancies;
- (id)wakeType;
- (void)registerForCapabilitiesChange;
- (id)getLastSleepEntry;
- (id)getLastWakeEntry;
- (void)systemPoweredOn;
- (void)logEventPointWakeGesture:(id)a0;
- (void)registerForUserIdleNotification;
- (void)logEventForwardUserIdle:(BOOL)a0;
- (void)logEventNonePowerNapConfig;
- (void)logSleepEntries:(id)a0;
- (void)logWakeEntries:(id)a0 withCurrentTime:(unsigned long long)a1;
- (void)logEventPointKernelState;
- (void)logEventPointCurrentScheduledWake;
- (unsigned long long)getCurrentWakeTime;
- (id)getCurrentWakeTimeKey;
- (short)getSleepState;
- (id)getThisWakeEntry:(id)a0 withCurrentWakeTime:(unsigned long long)a1 withIsDarkwake:(BOOL)a2 withDidSleep:(BOOL)a3;
- (id)getPostWakeEntry:(unsigned long long)a0;
- (id)getSleepStatisticsApps;
- (id)wakeReasonsAsNSString;
- (unsigned int)getIOPMRootDomain;
- (void)capabilitiesChanged:(unsigned int)a0;
- (unsigned long long)getSleepSubclassKey;
- (id)sleepTriggers;
- (id)driverWakeReasons;
- (id)wakeReasonFromIORegistry;

@end
