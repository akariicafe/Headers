@class USUsageReporter;

@interface PLUsageTrackingAgent : PLAgent

@property (retain) USUsageReporter *usageReporter;

+ (id)entryEventBackwardDefinitions;
+ (id)defaults;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryAggregateDefinitions;
+ (id)entryEventIntervalDefinitionUsageTime;
+ (id)entryEventForwardDefinitions;
+ (void)load;

- (void)logEventIntervalUsageTime;
- (void)log;
- (void).cxx_destruct;
- (id)init;
- (void)logEntriesFromUsageReports:(id)a0;
- (void)initTaskOperatorDependancies;
- (void)initOperatorDependancies;

@end
