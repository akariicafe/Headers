@interface PLSoCAgent : PLAgent

+ (id)entryEventBackwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryAggregateDefinitions;
+ (id)entryEventForwardDefinitions;
+ (void)load;
+ (id)entryEventPointDefinitionLifetimeServoStats;

- (void)log;
- (id)init;
- (void)initTaskOperatorDependancies;
- (void)initOperatorDependancies;
- (void)registerForTaskingStartNotification;
- (void)registerForTaskingEndNotification;
- (void)taskingStartNotificationReceived:(id)a0;
- (void)taskingEndNotificationReceived:(id)a0;
- (id)requestLTSStats;
- (void)logEventPointLifetimeServoStats:(id)a0;

@end
