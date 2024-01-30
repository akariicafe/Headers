@interface PLContinuityAgent : PLAgent

+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventPointDefinitionAutoUnlock;
+ (void)load;
+ (id)entryAggregateDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (long long)unlockPeerTypeStringToEnum:(id)a0;

- (void)initOperatorDependancies;
- (void)log;
- (id)init;

@end
