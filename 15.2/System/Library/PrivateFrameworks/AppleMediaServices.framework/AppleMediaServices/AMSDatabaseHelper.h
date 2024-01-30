@interface AMSDatabaseHelper : NSObject

+ (id)_cachesURLForCachePath:(id)a0;
+ (id)_databaseNameForType:(long long)a0;
+ (void)_applyProtectionClassForDirectoryAtURL:(id)a0;
+ (id)databaseFolderNameForType:(long long)a0;
+ (id)databasePathForCachePath:(id)a0 type:(long long)a1;
+ (BOOL)removeDatabaseForCachePath:(id)a0;
+ (BOOL)_addSkipBackupAttribute:(BOOL)a0 forURL:(id)a1;

@end
