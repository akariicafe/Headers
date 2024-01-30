@interface CalMigrationBackup : NSObject

+ (BOOL)backupCalendarDirectory:(id)a0 intoArchiveNamed:(id)a1 error:(id *)a2;
+ (BOOL)removeExistingBackupWithArchiveName:(id)a0 inCalendarDirectory:(id)a1 error:(id *)a2;
+ (BOOL)shouldBackupCalendarDirectory:(id)a0 withPrivacySafePathProvider:(id)a1;

@end
