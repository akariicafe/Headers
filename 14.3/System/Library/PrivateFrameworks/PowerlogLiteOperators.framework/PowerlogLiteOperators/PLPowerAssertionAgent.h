@class PLTimer, NSSet, NSMutableDictionary, NSDictionary, PLEntryNotificationOperatorComposition, PLCFNotificationOperatorComposition, NSMutableArray, NSRegularExpression, PLNSNotificationOperatorComposition;

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
@property (retain, nonatomic) NSRegularExpression *assertNameHexRegex;

+ (void)load;
+ (id)defaults;
+ (id)entryEventPointDefinitionBufferStatus;
+ (id)entryEventPointDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventPointDefinitionSnapshotReason;
+ (BOOL)shouldOptimizeSmallAssertions;
+ (id)entryEventPointDefinitionAggregateReset;
+ (id)entryEventForwardDefinitionAssertion;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventNoneDefinitions;

- (void)logInterval:(id)a0;
- (void)logEventPointAggregateResetWithReason:(short)a0 withPidCount:(int)a1;
- (id)init;
- (void)logAggregatedAssertionActivity;
- (void)setAssertionBufferFullNotificationActive:(BOOL)a0 withReason:(id)a1;
- (void)checkAssertionBufferFullNotificationRate;
- (void).cxx_destruct;
- (void)logEventForwardAssertionWithReason:(id)a0 asSnapshot:(BOOL)a1;
- (void)log;
- (void)logEventForwardAssertion;
- (void)logSnapshot:(id)a0;
- (id)bundleIDForAssertionProcessPID:(int)a0;
- (void)resetIOPMSetAssertionActivityAggregateWithReason:(short)a0 withPidCount:(int)a1;
- (void)logSnapshotAtMidnight:(id)a0;
- (id)sanitizeAssertionNameForEntry:(id)a0;
- (void)logAggregatedAssertionActivityPLDataStructure;
- (id)assertTypeToEnumMapping;
- (void)resetIOPMSetAssertionActivityAggregatePLDataStructureWithReason:(short)a0 withPidCount:(int)a1;
- (id)startEndActionsToEnumMapping;
- (void)initOperatorDependancies;

@end
