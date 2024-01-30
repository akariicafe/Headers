@interface SLDataMigrationController : NSObject

+ (id)sharedController;

- (void)didFinishMigrationForSocialDaemonBundleID:(id)a0 preferenceKey:(id)a1;
- (void)ensureSocialUserDataDirectory;
- (BOOL)needsFileProtectionUpgradeForProfileImagesAtPath:(id)a0 serviceNameForLogging:(id)a1;
- (BOOL)needsMigrationForSocialDaemonBundleID:(id)a0 preferenceKey:(id)a1;
- (void)removeAncillarySocialDatabaseFilesWithPrefix:(id)a0 serviceNameForLogging:(id)a1;

@end
