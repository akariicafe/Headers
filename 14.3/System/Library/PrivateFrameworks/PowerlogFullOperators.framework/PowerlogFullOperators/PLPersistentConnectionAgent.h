@class PLCFNotificationOperatorComposition;

@interface PLPersistentConnectionAgent : PLAgent

@property (readonly) PLCFNotificationOperatorComposition *intervalChangedNotification;
@property (readonly) PLCFNotificationOperatorComposition *preferencesChangedNotification;

+ (void)load;
+ (id)defaults;
+ (id)railDefinitions;
+ (id)accountingGroupDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventNoneDefinitions;

- (id)init;
- (void).cxx_destruct;
- (void)log;
- (long long)pollingInterval;
- (void)initOperatorDependancies;
- (void)logEventForwardConfig;
- (void)logEventPointCache;
- (BOOL)pushEnabled;

@end
