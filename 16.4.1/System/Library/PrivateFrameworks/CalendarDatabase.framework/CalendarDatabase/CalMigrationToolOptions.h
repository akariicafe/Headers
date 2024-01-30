@class NSURL;

@interface CalMigrationToolOptions : NSObject

@property (readonly, nonatomic) BOOL migrateUsingCalendarDaemon;
@property (readonly, nonatomic) BOOL waitForRemindersOnly;
@property (readonly, nonatomic) NSURL *homeDirectory;
@property (readonly, nonatomic) NSURL *sourceCalendarDirectory;
@property (readonly, nonatomic) NSURL *destinationDirectory;
@property (readonly, nonatomic) long long performCalendarMigration;
@property (readonly, nonatomic) long long performReminderMigration;
@property (readonly, nonatomic) long long performCleanup;
@property (readonly, nonatomic) long long deleteMigratedData;
@property (readonly, nonatomic) long long backupBeforeCalendarMigration;
@property (readonly, nonatomic) long long backupBeforeReminderMigration;
@property (readonly, nonatomic) NSURL *accountsChangesFile;
@property (readonly, nonatomic) NSURL *accountsDatabaseFile;

+ (id)_stringForTriStateOption:(long long)a0;

- (id)description;
- (void).cxx_destruct;
- (id)_initWithHomeDirectory:(id)a0 sourceCalendarDirectory:(id)a1 destinationDirectory:(id)a2 migrateUsingCalendarDaemon:(BOOL)a3 waitForRemindersOnly:(BOOL)a4 performCalendarMigration:(long long)a5 performReminderMigration:(long long)a6 performCleanup:(long long)a7 deleteMigratedData:(long long)a8 backupBeforeCalendarMigration:(long long)a9 backupBeforeReminderMigration:(long long)a10 saveAccountsChangesToFile:(id)a11 accountsDatabaseFile:(id)a12;
- (id)initUsingCalendarDaemon;
- (id)initUsingCalendarDaemonWaitingForRemindersOnly;
- (id)initWithHomeDirectory:(id)a0;
- (id)initWithHomeDirectory:(id)a0 destinationDirectory:(id)a1 performCalendarMigration:(long long)a2 performReminderMigration:(long long)a3 performCleanup:(long long)a4 deleteMigratedData:(long long)a5 backupBeforeCalendarMigration:(long long)a6 backupBeforeReminderMigration:(long long)a7 saveAccountsChangesToFile:(id)a8 accountsDatabaseFile:(id)a9;
- (id)initWithSourceCalendarDirectory:(id)a0 destinationDirectory:(id)a1 performCalendarMigration:(long long)a2 performReminderMigration:(long long)a3 performCleanup:(long long)a4 deleteMigratedData:(long long)a5 backupBeforeCalendarMigration:(long long)a6 backupBeforeReminderMigration:(long long)a7 saveAccountsChangesToFile:(id)a8 accountsDatabaseFile:(id)a9;

@end
