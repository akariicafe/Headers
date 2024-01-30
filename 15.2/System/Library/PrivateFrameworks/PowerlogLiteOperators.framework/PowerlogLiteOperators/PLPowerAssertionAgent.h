@class PLTimer, NSSet, NSMutableDictionary, NSDictionary, PLEntryNotificationOperatorComposition, PLCFNotificationOperatorComposition, NSMutableArray, PLNSNotificationOperatorComposition;

@interface PLPowerAssertionAgent : PLAgent

@property (retain) PLCFNotificationOperatorComposition *assertionNotification;
@property (retain) PLCFNotificationOperatorComposition *assertionBufferFullNotification;
@property (retain) PLTimer *assertionBufferFullNotificationRearmTimer;
@property (nonatomic) BOOL assertionBufferFullNotificationActive;
@property (retain) NSMutableArray *assertionBufferNotificationTracking;
@property (retain) PLEntryNotificationOperatorComposition *batteryLevelNotificiations;
@property (retain) PLEntryNotificationOperatorComposition *wakeNotification;
@property (retain) PLEntryNotificationOperatorComposition *canSleepNotification;
@property (retain) PLNSNotificationOperatorComposition *dailyTaskNotification;
@property (retain) PLCFNotificationOperatorComposition *flushAssertionBufferCFNotification;
@property (retain) PLTimer *runQueryTimer;
@property (retain) PLTimer *assertionSnapShotTimer;
@property (nonatomic) BOOL assertionSnapshotTimerActive;
@property BOOL firstBufferDrain;
@property long long aggregateMaxPIDCount;
@property long long aggregteZeroDeltaCount;
@property (retain) NSMutableDictionary *assertionAggregatedLastSamplePLDataStructure;
@property (retain, nonatomic) NSMutableDictionary *assertionAggregatedLastSample;
@property (readonly) NSDictionary *startEndActionsToEnum;
@property (readonly) NSDictionary *assertTypeToEnum;
@property (readonly) NSSet *logAssertNameForActions;
@property (nonatomic) BOOL lastActivityOverflow;
@property (retain) NSMutableDictionary *assertionUUIDCache;
@property (retain) NSMutableDictionary *UUIDStartEntryCache;

+ (id)entryEventBackwardDefinitions;
+ (id)defaults;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventForwardDefinitionAssertion;
+ (id)entryEventPointDefinitionBufferStatus;
+ (BOOL)shouldOptimizeSmallAssertions;
+ (id)entryEventPointDefinitionSnapshotReason;
+ (id)entryEventForwardDefinitions;
+ (void)load;
+ (id)entryEventPointDefinitionTimedOutProcesses;
+ (id)entryEventPointDefinitionAggregateReset;

- (void)setAssertionBufferFullNotificationActive:(BOOL)a0 withReason:(id)a1;
- (id)bundleIDForAssertionProcessPID:(int)a0;
- (void)logEventForwardAssertion;
- (id)sanitizeAssertionNameForEntry:(id)a0;
- (void)resetIOPMSetAssertionActivityAggregateWithReason:(short)a0 withPidCount:(int)a1;
- (id)startEndActionsToEnumMapping;
- (void)resetIOPMSetAssertionActivityAggregatePLDataStructureWithReason:(short)a0 withPidCount:(int)a1;
- (id)assertTypeToEnumMapping;
- (void)logEventPointAggregateResetWithReason:(short)a0 withPidCount:(int)a1;
- (void)checkAssertionBufferFullNotificationRate;
- (void)log;
- (void)logAggregatedAssertionActivity;
- (void).cxx_destruct;
- (id)init;
- (void)logInterval:(id)a0;
- (void)logSnapshot:(id)a0;
- (void)logSnapshotAtMidnight:(id)a0;
- (void)logEventForwardAssertionWithReason:(id)a0 asSnapshot:(BOOL)a1;
- (void)initOperatorDependancies;
- (void)logAggregatedAssertionActivityPLDataStructure;

@end
