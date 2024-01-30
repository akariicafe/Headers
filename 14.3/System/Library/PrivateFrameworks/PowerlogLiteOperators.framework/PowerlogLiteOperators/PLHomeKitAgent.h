@class PLXPCListenerOperatorComposition, PLTimer, PLEntryNotificationOperatorComposition;

@interface PLHomeKitAgent : PLAgent

@property (retain) PLXPCListenerOperatorComposition *HomeKitEvent;
@property unsigned long long numBTPushes;
@property unsigned long long numConnections;
@property unsigned long long numPrevBTPushes;
@property unsigned long long numPrevConnections;
@property unsigned long long numBTConnections;
@property unsigned long long numIPConnections;
@property unsigned long long numBonjour;
@property unsigned long long numIPEvents;
@property unsigned long long numIDSPushes;
@property unsigned long long numCloudPushes;
@property unsigned long long numBTWakeAdvt;
@property unsigned long long numBTWakes;
@property double lastapwake;
@property BOOL enablelog;
@property (retain) PLEntryNotificationOperatorComposition *sbcLevelChanged;
@property (retain) PLEntryNotificationOperatorComposition *deviceWake;
@property (retain) PLTimer *runTimeAggregatorTimer;
@property unsigned long long numaggregatelines;
@property unsigned long long numBTlines;

+ (void)load;
+ (id)defaults;
+ (id)entryEventPointDefinitionHomeKitSummary;
+ (id)entryEventPointDefinitionHomeKitEvents;
+ (id)entryEventPointDefinitionHomeKitAdvt;
+ (id)entryEventPointDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventNoneDefinitions;

- (id)init;
- (void).cxx_destruct;
- (void)logEventPointHomeKit:(id)a0;
- (long long)eventTypeStringToEnum:(id)a0;
- (void)log;
- (void)writeAggregateCounters:(id)a0;
- (void)initOperatorDependancies;

@end
