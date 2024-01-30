@class PLCFNotificationOperatorComposition;

@interface PLPersistentConnectionAgent : PLAgent

@property (readonly) PLCFNotificationOperatorComposition *intervalChangedNotification;
@property (readonly) PLCFNotificationOperatorComposition *preferencesChangedNotification;

+ (id)entryEventBackwardDefinitions;
+ (id)defaults;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)accountingGroupDefinitions;
+ (id)entryEventForwardDefinitions;
+ (void)load;
+ (id)railDefinitions;

- (void)log;
- (void).cxx_destruct;
- (id)init;
- (long long)pollingInterval;
- (void)initOperatorDependancies;
- (void)logEventForwardConfig;
- (void)logEventPointCache;
- (BOOL)pushEnabled;

@end
