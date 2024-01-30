@interface PLSCDynamicStoreAgent : PLAgent

+ (void)load;
+ (id)defaults;
+ (id)railDefinitions;
+ (id)accountingGroupDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryAggregateDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventNoneDefinitions;

- (id)init;
- (void)networkLinkQualityChanged:(struct __SCDynamicStore { } *)a0 withChangedKeys:(id)a1;
- (void)log;
- (void)initOperatorDependancies;

@end
