@class NSTimer, PLEntryNotificationOperatorComposition;

@interface PLAWDNetworkUsage : PLAWDAuxMetrics

@property (retain) PLEntryNotificationOperatorComposition *netEventCallback;
@property (retain) PLEntryNotificationOperatorComposition *nameConnectionCallback;
@property unsigned int netState;
@property (retain) NSTimer *snapshotTimer;

+ (id)entryAggregateDefinitions;
+ (id)getSharedObjWithOperator:(id)a0;
+ (id)entryAggregateDefinitionNetUsage;

- (void).cxx_destruct;
- (void)startMetricCollection:(id)a0;
- (void)stopMetricCollection:(id)a0;
- (BOOL)submitDataToAWDServer:(id)a0 withAwdConn:(id)a1;
- (void)resetNetUsageTable;
- (void)handleNetCallback:(id)a0;
- (void)handleNameConnectionCallback:(id)a0;

@end
