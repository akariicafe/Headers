@class NSDate, PLMonotonicTimer, UsageFeed, PLCFNotificationOperatorComposition, NSDictionary, PLEntryNotificationOperatorComposition, NSMutableSet, PLXPCListenerOperatorComposition;

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
@property (retain) PLCFNotificationOperatorComposition *flushNetworkBitmapsListener;
@property (retain) PLXPCListenerOperatorComposition *highBWStartListener;
@property (retain) PLXPCListenerOperatorComposition *highBWEndlistener;

+ (void)load;
+ (id)entryEventPointDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitionConnection;
+ (id)entryEventForwardDefinitionLowInternet;
+ (id)entryEventBackwardDefinitionUsage;
+ (id)entryEventBackwardDefinitionNetworkBitmap;
+ (id)entryEventIntervalDefinitionUsage;
+ (id)entryEventIntervalDefinitionHighCellularBWTransactions;
+ (id)entryEventIntervalDefinitionHighCellularBWTransactionsDetail;

- (id)init;
- (void).cxx_destruct;
- (void)log;
- (void)initOperatorDependancies;
- (void)processesOfInterest:(id)a0;
- (void)didAddNewSource:(struct __NStatSource { } *)a0;
- (BOOL)hasSymptomsLogging;
- (void)logEventBackwardNetworkBitmaps;
- (void)logEventForwardLowInternet;
- (void)handleHighBWStartCallback:(id)a0;
- (void)handleHighBWEndCallback:(id)a0;
- (void)didSetCountsBlock:(id)a0 withCounts:(id)a1;
- (void)didSetDescriptionBlock:(id)a0 withDescription:(id)a1;
- (void)didRemoveSource:(id)a0;
- (void)transferSource:(id)a0 fromPID:(id)a1 toPID:(id)a2;
- (void)logEventPointConnectionEvent:(short)a0 forSource:(id)a1;
- (void)addSource:(id)a0 toPID:(id)a1;
- (id)compressNetworkBitmap:(id)a0;
- (void)logEventBackwardUsage;
- (void)timestampNetConnectEntry:(id)a0 withEventType:(short)a1 withSource:(id)a2;
- (void)logEventBackwardUsageWithOutcome:(id)a0;
- (void)accountWithNetworkUsageDiffEntries:(id)a0 withStartDate:(id)a1 withEndDate:(id)a2;
- (void)aggregateAndLogNetworkBitmaps:(id)a0 withStartTime:(unsigned long long)a1 andEndTime:(unsigned long long)a2;
- (BOOL)outcomeHasDataUsage:(id)a0;

@end
