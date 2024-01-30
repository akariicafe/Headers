@class PLSemaphore, NSMutableDictionary, PLEntryNotificationOperatorComposition;

@interface PLScheduledWakeAgent : PLAgent

@property (retain) PLEntryNotificationOperatorComposition *canSleepNotification;
@property (retain) PLSemaphore *canSleepSemaphore;
@property (retain) NSMutableDictionary *previousScheduleWakeEvents;

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
- (void)initOperatorDependancies;
- (void)logEventForwardScheduledEvent;
- (id)humanReadableScheduledWakeString:(id)a0;

@end
