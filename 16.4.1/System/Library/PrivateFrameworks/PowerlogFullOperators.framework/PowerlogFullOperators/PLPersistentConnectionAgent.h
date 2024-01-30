@class PLCFNotificationOperatorComposition;

@interface PLPersistentConnectionAgent : PLAgent

@property (readonly) PLCFNotificationOperatorComposition *intervalChangedNotification;
@property (readonly) PLCFNotificationOperatorComposition *preferencesChangedNotification;

+ (id)entryEventForwardDefinitions;
+ (id)railDefinitions;
+ (id)accountingGroupDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)defaults;
+ (void)load;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;

- (void)initOperatorDependancies;
- (void)log;
- (id)init;
- (long long)pollingInterval;
- (void).cxx_destruct;
- (void)logEventForwardConfig;
- (void)logEventPointCache;
- (BOOL)pushEnabled;

@end
