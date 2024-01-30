@class USUsageReporter;

@interface PLUsageTrackingAgent : PLAgent

@property (retain) USUsageReporter *usageReporter;

+ (void)load;
+ (id)defaults;
+ (id)entryEventPointDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventIntervalDefinitionUsageTime;
+ (id)entryAggregateDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventNoneDefinitions;

- (id)init;
- (void).cxx_destruct;
- (void)log;
- (void)initTaskOperatorDependancies;
- (void)logEventIntervalUsageTime;
- (void)logEntriesFromUsageReports:(id)a0;
- (void)initOperatorDependancies;

@end
