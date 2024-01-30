@class PLXPCListenerOperatorComposition;

@interface PLSiriAgent : PLAgent

@property (retain) PLXPCListenerOperatorComposition *dictationConnectionListener;
@property (retain) PLXPCListenerOperatorComposition *siriWakesListener;
@property (retain) PLXPCListenerOperatorComposition *siriConfigListener;

+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitionSiriConfig;
+ (void)load;
+ (id)entryAggregateDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventPointDefinitionSiriWakes;
+ (id)entryEventForwardDefinitionDictationConnection;

- (void)initOperatorDependancies;
- (void)log;
- (unsigned long long)convertRecognition:(id)a0;
- (void)logEventPointSiriWakes:(id)a0;
- (void)logEventForwardSiriConfig:(id)a0;
- (void)logEventForwardDictationConnection:(id)a0;
- (id)init;
- (unsigned long long)convertMode:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)convertSiriEvent:(id)a0;

@end
