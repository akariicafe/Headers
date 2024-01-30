@interface PLSCDynamicStoreAgent : PLAgent

+ (id)entryEventBackwardDefinitions;
+ (id)defaults;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryAggregateDefinitions;
+ (id)accountingGroupDefinitions;
+ (id)entryEventForwardDefinitions;
+ (void)load;
+ (id)railDefinitions;

- (void)log;
- (id)init;
- (void)networkLinkQualityChanged:(struct __SCDynamicStore { } *)a0 withChangedKeys:(id)a1;
- (void)initOperatorDependancies;

@end
