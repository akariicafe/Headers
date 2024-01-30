@interface MTConstants : NSObject

+ (id)sharedContainerURL;
+ (id)cachesDirectory;
+ (BOOL)excludeDirectoryFromBackup:(id)a0;
+ (id)sharedCacheDirectory;
+ (id)managedObjectModelDefinitionURL;
+ (id)sharedDocumentsDirectory;
+ (BOOL)removeExcludeFromBackupFlagFromDirectoryIfNeeded:(id)a0;
+ (id)_watchManagedAssetsDirectoryURL;
+ (id)managedAssetsDirectoryURL;
+ (id)documentsDirectory;

@end
