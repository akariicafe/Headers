@interface MTConstants : NSObject

+ (id)cachesDirectory;
+ (id)sharedContainerURL;
+ (BOOL)excludeDirectoryFromBackup:(id)a0;
+ (id)managedObjectModelDefinitionURL;
+ (id)sharedDocumentsDirectory;
+ (id)sharedCacheDirectory;
+ (BOOL)removeExcludeFromBackupFlagFromDirectoryIfNeeded:(id)a0;
+ (id)managedAssetsDirectoryURL;
+ (id)documentsDirectory;

@end
