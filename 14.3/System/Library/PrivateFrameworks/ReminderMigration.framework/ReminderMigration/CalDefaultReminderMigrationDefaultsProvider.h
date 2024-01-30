@class NSString;

@interface CalDefaultReminderMigrationDefaultsProvider : NSObject <CalReminderMigrationDefaultsProvider>

@property (class, readonly, nonatomic) CalDefaultReminderMigrationDefaultsProvider *sharedInstance;

@property (readonly, nonatomic) BOOL shouldBackupBeforeMigration;
@property (nonatomic) BOOL havePerformedReminderMigrationCleanup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
