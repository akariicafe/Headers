@class VCUserNotificationManager, NSObject;
@protocol WFDatabaseProvider, OS_dispatch_queue;

@interface WFTriggerNotificationScheduler : NSObject

@property (readonly, nonatomic) id<WFDatabaseProvider> databaseProvider;
@property (readonly, nonatomic) VCUserNotificationManager *userNotificationManager;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (BOOL)shortenTimeIntervalsForTesting;

- (void)cancelAllActivitiesFromTriggers:(id)a0;
- (id)initialRunDateForConfiguredTrigger:(id)a0;
- (void)postBackgroundRunningNotificationForTrigger:(id)a0;
- (id)initWithUserNotificationManager:(id)a0 databaseProvider:(id)a1;
- (void)migrateAllTriggersCreatedBeforeBackgroundRunningWithDatabase:(id)a0;
- (void)scheduleTriggerForNotifications:(id)a0;
- (void)registerWithDatabaseProvider:(id)a0;
- (void)cancelActivitiesFromTrigger:(id)a0;
- (int)updateTriggerNotificationLevels:(id)a0 database:(id)a1;
- (void)registerConfiguredTrigger:(id)a0 delay:(id)a1;
- (void).cxx_destruct;
- (void)cancelActivitiesFromTriggerIdentifier:(id)a0;

@end
