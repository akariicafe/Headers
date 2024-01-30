@class NSData, NSString, NSURL, NSDate, REMObjectID, NSDictionary, NSDateComponents, NSNumber;

@interface REMDaemonUserDefaults : REMUserDefaults

@property (readonly, nonatomic) BOOL newAppShouldTakeoverEKReminderNotifications;
@property (readonly, nonatomic) BOOL dataaccessDaemonStopSyncingReminders;
@property (readonly, nonatomic) BOOL siriShouldRouteIntentsToNewRemindersApp;
@property (nonatomic) BOOL databaseMigrationTestModeEnabled;
@property (nonatomic) BOOL isDatabaseMigrated;
@property (nonatomic) BOOL databaseMigrationTimedOut;
@property (copy, nonatomic) NSString *lastDatabaseMigrationSystemBuildVersion;
@property (retain, nonatomic) NSNumber *cloudKitMigrationMaxNumInvocations;
@property (retain, nonatomic) NSNumber *cloudKitMigrationMaxNumFailures;
@property (retain, nonatomic) NSNumber *cloudKitMigrationDelayAfterError;
@property (retain, nonatomic) NSNumber *cloudKitMigrationObserverPollingInterval;
@property (retain, nonatomic) NSNumber *cloudKitMigrationSimulatedError;
@property (retain, nonatomic) NSNumber *cloudKitResultsLimitPerSyncOperation;
@property (nonatomic) BOOL cloudKitMigrationDisableCleanUp;
@property (retain, nonatomic) NSString *acAccountIdentifierToMergeLocalDataIntoSyncData;
@property (retain, nonatomic) NSString *acAccountIdentifierToMigrateInactivatedCalDavData;
@property (retain, nonatomic) NSDate *cloudKitMergeLocalLastDateMaxRetryReached;
@property (retain, nonatomic) NSString *cloudKitMergeLocalLastBuildVersionMaxRetryReached;
@property (copy, nonatomic) NSNumber *spotlightIndexVersion;
@property (copy, nonatomic) NSDate *nextScheduledAlarmDate;
@property (copy, nonatomic) NSDate *lastPresentAlarmDate;
@property (copy, nonatomic) NSData *lastSuggestedAttributesAutoTrainingToken;
@property (copy, nonatomic) NSDate *lastSyncPoll;
@property (copy, nonatomic) NSData *userInteractionsData;
@property (nonatomic) BOOL simulateMAIDAccount;
@property (nonatomic) BOOL showRemindersAsOverdue;
@property (nonatomic) BOOL enableWelcomeScreen;
@property (nonatomic) BOOL forceShowWelcomeScreen;
@property (nonatomic) BOOL enableInAppDebugMenu;
@property (retain, nonatomic) REMObjectID *preferredDefaultListID;
@property (retain, nonatomic) NSURL *preferredDefaultListObjectIDUrl;
@property (retain, nonatomic) NSDateComponents *todayNotificationFireTime;
@property (nonatomic) BOOL disableAlarmEngineDataSourcePrefetching;
@property (nonatomic) BOOL enableAssignmentNotifications;
@property (copy, nonatomic) NSDictionary *suggestedAttributesTrainingOverrides;
@property (copy, nonatomic) NSDictionary *suggestedAttributesHarvestingOverrides;
@property (copy, nonatomic) NSDictionary *suggestedAttributesAccepted;
@property (copy, nonatomic) NSData *accountsListCategorizedCountsCache;
@property (nonatomic) BOOL debugSimulateSqliteFull;

+ (id)defaultValues;
+ (id)storageNumberForTodayNotificationTime:(id)a0;
+ (id)todayNotificationFireTimeFromStorageNumber:(id)a0;

- (id)initWithSuiteName:(id)a0 containerURL:(id)a1;
- (id)observePreferredDefaultListIDWithBlock:(id /* block */)a0;
- (void)deletePreferredDefaultListID;
- (id)_pptPreferredDefaultListIDKey;
- (void)ppt_handleRestore;
- (id)observeShowRemindersAsOverdueWithBlock:(id /* block */)a0;
- (BOOL)hasSuggestedRecentlyForReminderWithID:(id)a0 attributeType:(id)a1;
- (void)setBestKForKNN:(id)a0;
- (void)ppt_handleInstall;
- (void)setCoreBehaviorTrainingParameters:(id)a0;
- (void)_deletePreferredDefaultListObjectIDUrl;
- (id)_reminderIDAttributeKey:(id)a0 attributeType:(id)a1;
- (id)streamTodayNotificationFireTime:(id /* block */)a0;
- (void)updateAcceptedAttributesForReminderWithID:(id)a0 attributeType:(id)a1;

@end
