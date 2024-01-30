@interface PLContinuityAgent : PLAgent

+ (id)entryEventBackwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryAggregateDefinitions;
+ (long long)unlockPeerTypeStringToEnum:(id)a0;
+ (id)entryEventPointDefinitionAutoUnlock;
+ (id)entryEventForwardDefinitions;
+ (void)load;

- (void)log;
- (id)init;
- (void)initOperatorDependancies;

@end
