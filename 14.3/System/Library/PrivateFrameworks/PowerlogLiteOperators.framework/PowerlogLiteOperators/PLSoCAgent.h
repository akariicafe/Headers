@interface PLSoCAgent : PLAgent

+ (void)load;
+ (id)entryEventPointDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryAggregateDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitionLifetimeServoStats;

- (id)init;
- (void)log;
- (void)initTaskOperatorDependancies;
- (void)initOperatorDependancies;
- (void)registerForTaskingStartNotification;
- (void)registerForTaskingEndNotification;
- (void)taskingStartNotificationReceived:(id)a0;
- (void)taskingEndNotificationReceived:(id)a0;
- (id)requestLTSStats;
- (void)logEventPointLifetimeServoStats:(id)a0;

@end
