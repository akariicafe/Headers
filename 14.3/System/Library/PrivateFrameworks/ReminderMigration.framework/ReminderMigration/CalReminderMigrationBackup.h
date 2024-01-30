@interface CalReminderMigrationBackup : NSObject

+ (BOOL)removeExistingBackupInCalendarDirectory:(id)a0 error:(id *)a1;
+ (id)_backupFileInCalendarDirectory:(id)a0;
+ (BOOL)backupCalendarDirectory:(id)a0 error:(id *)a1;
+ (BOOL)shouldBackupCalendarDirectory:(id)a0 withPrivacySafePathProvider:(id)a1 reminderMigrationDefaultsProvider:(id)a2;

@end
