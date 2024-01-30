@class PLTimer, NSMutableDictionary, PLXPCListenerOperatorComposition, NSDate;

@interface PLPushAgent : PLAgent

@property (retain) PLXPCListenerOperatorComposition *receivedPushListener;
@property (retain) PLXPCListenerOperatorComposition *sentPushListener;
@property (retain) PLXPCListenerOperatorComposition *sentKeepAliveListener;
@property (retain) PLTimer *runTimeAggregatorTimer;
@property unsigned long long numKeepAlives;
@property (retain) PLXPCListenerOperatorComposition *apsdConnectedListener;
@property (retain) NSMutableDictionary *pushUsageDict;
@property (retain) NSDate *detectionStartTime;
@property (retain) PLXPCListenerOperatorComposition *messageSentListener;
@property (retain) PLXPCListenerOperatorComposition *messageReceivedListener;

+ (void)load;
+ (id)defaults;
+ (id)entryEventPointDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryAggregateDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitionsReceivedPush;
+ (BOOL)isHighPriorityPushEntry:(id)a0;
+ (id)entryEventPointDefinitionsSentPush;
+ (id)entryEventPointDefinitionsAPSDConnectedEvent;
+ (id)entryEventPointDefinitionsSentKeepAlive;
+ (id)entryEventPointDefinitionMessageSent;
+ (id)entryEventPointDefinitionMessageReceived;
+ (id)entryEventPointDefinitionMessage;
+ (id)entryAggregateDefinitionSentPushes;
+ (id)entryAggregateDefinitionAPSDConnected;
+ (id)bundleIdFromTopic:(id)a0;
+ (id)replaceConnectionTypeWithEnum:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)log;
- (void)sendEnergyIssueSignatureNotification:(id)a0 withThreshold:(double)a1;
- (void)initOperatorDependancies;
- (void)checkPushUsage:(id)a0 withPLEntry:(id)a1;
- (void)accountReceivedPushWithEntry:(id)a0;
- (void)handleMessageEvent:(id)a0 isSentEvent:(BOOL)a1;

@end
