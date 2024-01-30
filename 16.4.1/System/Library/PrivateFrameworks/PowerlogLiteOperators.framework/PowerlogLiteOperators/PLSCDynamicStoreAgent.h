@interface PLSCDynamicStoreAgent : PLAgent

+ (id)entryEventForwardDefinitions;
+ (id)railDefinitions;
+ (id)accountingGroupDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)defaults;
+ (void)load;
+ (id)entryAggregateDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;

- (void)initOperatorDependancies;
- (void)networkLinkQualityChanged:(struct __SCDynamicStore { } *)a0 withChangedKeys:(id)a1;
- (void)log;
- (id)init;

@end
