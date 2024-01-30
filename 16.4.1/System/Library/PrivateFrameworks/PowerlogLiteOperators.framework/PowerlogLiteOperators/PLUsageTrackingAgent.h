@class USUsageReporter;

@interface PLUsageTrackingAgent : PLAgent

@property (retain) USUsageReporter *usageReporter;

+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)defaults;
+ (void)load;
+ (id)entryAggregateDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventIntervalDefinitionUsageTime;

- (void)initOperatorDependancies;
- (void)log;
- (void)logEventIntervalUsageTime;
- (void)initTaskOperatorDependancies;
- (id)init;
- (void)logEntriesFromUsageReports:(id)a0;
- (void).cxx_destruct;

@end
