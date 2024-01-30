@interface PLSoCAgent : PLAgent

+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (void)load;
+ (id)entryAggregateDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventPointDefinitionLifetimeServoStats;

- (void)initOperatorDependancies;
- (void)log;
- (void)initTaskOperatorDependancies;
- (id)init;
- (id)requestLTSStats;
- (void)taskingEndNotificationReceived:(id)a0;
- (void)logEventPointLifetimeServoStats:(id)a0;
- (void)registerForTaskingEndNotification;
- (void)registerForTaskingStartNotification;
- (void)taskingStartNotificationReceived:(id)a0;

@end
