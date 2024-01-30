@interface DEUtils : NSObject

+ (id)copyPaths:(id)a0 toDestinationDir:(id)a1 withZipName:(id)a2;
+ (void)excludeFromBackup:(id)a0;
+ (unsigned long long)getFileSystemItemSize:(id)a0;
+ (id)urlByRemovingComponentsBefore:(id)a0 source:(id)a1 keepComponent:(BOOL)a2;
+ (BOOL)copyFile:(id)a0 toDir:(id)a1;
+ (id)copyPath:(id)a0 toDestinationDir:(id)a1 zipped:(BOOL)a2;
+ (id)findAllItems:(id)a0 includeDirs:(BOOL)a1;
+ (id)createUserOwnedDirectoryAtUrl:(id)a0;
+ (id)copyAndReturn:(id)a0 toDir:(id)a1;
+ (id)uniqueTemporaryDirectory;
+ (id)tarGzForDirectoryUrl:(id)a0 validatesUrl:(BOOL)a1;
+ (id)enumeratorForAllItems:(id)a0;
+ (BOOL)copyAllFilesFromDir:(id)a0 toDir:(id)a1;
+ (id)uniqueDateString;
+ (id)processErrorResponse:(id)a0;
+ (id)findEntriesInDirectory:(id)a0 createdAfter:(id)a1 matchingPattern:(id)a2;
+ (void)removeFile:(id)a0;
+ (id)copyItem:(id)a0 toDestinationDir:(id)a1 zipped:(BOOL)a2;
+ (id)createDirectoryWithClassCDataProtection:(id)a0;
+ (id)userLibraryDirectoryForApp:(id)a0;
+ (id)pathComponentsInURL:(id)a0 removingBaseURLComponents:(id)a1 keepingFirstComponent:(BOOL)a2;
+ (id)lsDir:(id)a0 sorted:(BOOL)a1;
+ (unsigned long long)getDirectorySize:(id)a0;
+ (id)applicationSupportDirectoryForApp:(id)a0;
+ (BOOL)copyAllFilesFromDir:(id)a0 toDir:(id)a1 keepSourceDir:(BOOL)a2;
+ (id)tarGzForDirectoryUrl:(id)a0;
+ (id)dirForTarGz:(id)a0;
+ (id)componentsByRemovingComponentsBeforeComponent:(id)a0 sourceURL:(id)a1 keepingComponent:(BOOL)a2;
+ (id)lsDir:(id)a0;
+ (BOOL)isValidDirectory:(id)a0;
+ (id)copyAndReturn:(id)a0 toDir:(id)a1 withNewFileName:(id)a2;
+ (id)findAllfiles:(id)a0;

@end
