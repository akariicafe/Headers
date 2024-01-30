@interface ICPaths : NSObject

+ (id)attributesForGroupContainerDirectory;
+ (BOOL)isReadOnlyPersistentStore;
+ (void)setIsReadOnlyPersistentStore:(BOOL)a0;
+ (id)persistentStoreURL;
+ (id)importDocumentsURL;
+ (id)applicationDocumentsURL;
+ (id)oldManagedObjectModelURL;
+ (id)managedObjectModelURL;
+ (id)applicationDataContainerURL;
+ (id)previewImageDirectoryURLForAccount:(id)a0;
+ (id)URLForGroupContainerWithIdentifier:(id)a0;
+ (void)setApplicationDocumentsURL:(id)a0;
+ (id)accountsDirectoryURL;

@end
