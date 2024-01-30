@class NSURL;

@interface CalMigrationToolOptions : NSObject

@property (readonly, nonatomic) BOOL migrateUsingCalendarDaemon;
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

+ (id)_stringForTriStateOption:(long long)a0;

- (id)description;
- (void).cxx_destruct;
- (id)_initWithHomeDirectory:(id)a0 sourceCalendarDirectory:(id)a1 destinationDirectory:(id)a2 migrateUsingCalendarDaemon:(BOOL)a3 performCalendarMigration:(long long)a4 performReminderMigration:(long long)a5 performCleanup:(long long)a6 deleteMigratedData:(long long)a7 backupBeforeCalendarMigration:(long long)a8 backupBeforeReminderMigration:(long long)a9 saveAccountsChangesToFile:(id)a10;
- (id)initWithHomeDirectory:(id)a0 destinationDirectory:(id)a1 performCalendarMigration:(long long)a2 performReminderMigration:(long long)a3 performCleanup:(long long)a4 deleteMigratedData:(long long)a5 backupBeforeCalendarMigration:(long long)a6 backupBeforeReminderMigration:(long long)a7 saveAccountsChangesToFile:(id)a8;
- (id)initUsingCalendarDaemon;
- (id)initWithHomeDirectory:(id)a0;
- (id)initWithSourceCalendarDirectory:(id)a0 destinationDirectory:(id)a1 performCalendarMigration:(long long)a2 performReminderMigration:(long long)a3 performCleanup:(long long)a4 deleteMigratedData:(long long)a5 backupBeforeCalendarMigration:(long long)a6 backupBeforeReminderMigration:(long long)a7 saveAccountsChangesToFile:(id)a8;

@end
