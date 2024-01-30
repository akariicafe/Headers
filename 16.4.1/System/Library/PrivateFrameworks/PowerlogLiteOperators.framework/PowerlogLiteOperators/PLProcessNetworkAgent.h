@class NSDate, PLMonotonicTimer, UsageFeed, PLCFNotificationOperatorComposition, NSDictionary, PLEntryNotificationOperatorComposition, NSMutableSet, PLXPCListenerOperatorComposition, PLNSNotificationOperatorComposition;

@interface PLProcessNetworkAgent : PLAgent

@property struct __NStatManager { } *statManagerRef;
@property (retain) UsageFeed *usageFeed;
@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged;
@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChangedListenerForNetworkBitmap;
@property (retain) PLMonotonicTimer *logUsageTimer;
@property (retain) NSDictionary *lastProcessNameToNetworkUsageEntry;
@property (retain) NSDate *lastEntryDate;
@property (retain) NSMutableSet *processes;
@property unsigned long long lastNetworkBitmapTimestamp;
@property unsigned long long curNetworkBitmapTimestampForSysdiagnoseTrigger;
@property (retain) PLCFNotificationOperatorComposition *flushNetworkBitmapsListener;
@property (retain) PLNSNotificationOperatorComposition *sysdiagnoseListener;
@property (retain) PLXPCListenerOperatorComposition *highBWStartListener;
@property (retain) PLXPCListenerOperatorComposition *highBWEndlistener;

+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (void)load;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventBackwardDefinitionNetworkBitmap;
+ (id)entryEventBackwardDefinitionUsage;
+ (id)entryEventForwardDefinitionHighCellularBWTransactions;
+ (id)entryEventForwardDefinitionHighCellularBWTransactionsDetail;
+ (id)entryEventForwardDefinitionLowInternet;
+ (id)entryEventIntervalDefinitionUsage;
+ (id)entryEventPointDefinitionConnection;

- (void)initOperatorDependancies;
- (void)log;
- (id)init;
- (void).cxx_destruct;
- (void)accountWithNetworkUsageDiffEntries:(id)a0 withStartDate:(id)a1 withEndDate:(id)a2;
- (void)addSource:(id)a0 toPID:(id)a1;
- (void)aggregateAndLogNetworkBitmaps:(id)a0 withStartTime:(unsigned long long)a1 andEndTime:(unsigned long long)a2;
- (id)compressNetworkBitmap:(id)a0;
- (void)didAddNewSource:(struct __NStatSource { } *)a0;
- (void)didRemoveSource:(id)a0;
- (void)didSetCountsBlock:(id)a0 withCounts:(id)a1;
- (void)didSetDescriptionBlock:(id)a0 withDescription:(id)a1;
- (void)getNetWorkBitmapForEndTime:(unsigned long long)a0 andSysdiagnoseTrigger:(BOOL)a1;
- (void)handleHighBWEndCallback:(id)a0;
- (void)handleHighBWStartCallback:(id)a0;
- (BOOL)hasSymptomsLogging;
- (void)logEventBackwardNetworkBitmaps;
- (void)logEventBackwardNetworkBitmapsSysdiagnoseTrigger;
- (void)logEventBackwardUsage;
- (void)logEventBackwardUsageWithOutcome:(id)a0;
- (void)logEventForwardLowInternet;
- (void)logEventPointConnectionEvent:(short)a0 forSource:(id)a1;
- (BOOL)outcomeHasDataUsage:(id)a0;
- (void)processesOfInterest:(id)a0;
- (void)setLastNetworkBitmapTimestampFor:(id)a0;
- (void)timestampNetConnectEntry:(id)a0 withEventType:(short)a1 withSource:(id)a2;
- (void)transferSource:(id)a0 fromPID:(id)a1 toPID:(id)a2;

@end
