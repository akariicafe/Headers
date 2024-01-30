@interface MTConstants : NSObject

+ (void)_repairFilePermissionsIfNeeded;
+ (void)removeExcludeFromBackupFlagFromDirectoryIfNeeded:(id)a0;
+ (id)sharedCacheDirectory;
+ (BOOL)excludeDirectoryFromBackup:(id)a0;
+ (id)sharedContainerURL;
+ (id)_watchManagedAssetsDirectoryURL;
+ (void)repairPermissionsOfDirectoryIfNeeded:(id)a0;
+ (id)managedAssetsDirectoryURL;
+ (id)attributesForNewDirectory;
+ (id)managedObjectModelDefinitionURL;
+ (id)sharedDocumentsDirectory;
+ (id)cachesDirectory;
+ (id)documentsDirectory;
+ (id)libraryDirectory;

@end
