@interface PLFileUtilities : NSObject

+ (id)fileManager;
+ (BOOL)filePathIsSubpathOfSyncRoot:(id)a0;
+ (id)systemLibraryURL;
+ (BOOL)removeItemAtPath:(id)a0 error:(id *)a1;
+ (long long)fileLengthForFilePath:(id)a0;
+ (id)defaultSystemPhotoDCIMDirectory;
+ (BOOL)createDirectoryAtPath:(id)a0 error:(id *)a1 usingFileManager:(id)a2;
+ (id)proxyLockFilePathForDatabasePath:(id)a0;
+ (BOOL)removeDisconnectedSQLiteDatabaseFileWithPath:(id)a0 error:(id *)a1;
+ (BOOL)stripExtendedAttributesFromFileAtURL:(id)a0 inDomain:(id)a1 error:(id *)a2;
+ (BOOL)secureMoveItemAtURL:(id)a0 toURL:(id)a1 capabilities:(id)a2 error:(id *)a3;
+ (BOOL)changeFileOwnerToMobileAtPath:(id)a0 error:(id *)a1;
+ (id)descriptionForFileIngestionType:(long long)a0;
+ (id)proxyLockCoordinatingFilePathForDatabaseDirectory:(id)a0 databaseName:(id)a1;
+ (BOOL)URLIsInTrash:(id)a0;
+ (BOOL)removeItemAtURL:(id)a0 error:(id *)a1;
+ (BOOL)filePath:(id)a0 isEqualToFilePath:(id)a1;
+ (id)redactedDescriptionForPath:(id)a0;
+ (long long)directoryEntryCountAtURL:(id)a0 error:(id *)a1;
+ (BOOL)createDirectoryAtPath:(id)a0 error:(id *)a1;
+ (BOOL)copyItemAtURL:(id)a0 toURL:(id)a1 error:(id *)a2;
+ (id)defaultSystemPhotoDataDirectory;
+ (id)_defaultSystemLibraryPath;
+ (id)defaultSystemLibraryURL;
+ (void)calculateTotalSizeOfFilesAtPath:(id)a0 result:(id /* block */)a1;
+ (id)realPathForPath:(id)a0 error:(id *)a1;
+ (id)realSystemPhotoLibraryPath;
+ (BOOL)isFileExistsError:(id)a0;
+ (id)embeddedHomeDirectory;
+ (BOOL)cloneFileAtPath:(id)a0 toPath:(id)a1 error:(id *)a2;
+ (BOOL)fileURL:(id)a0 isEqualToFileURL:(id)a1;
+ (id)defaultSystemPhotoDataMiscDirectory;
+ (BOOL)hasDiskSpaceToCopyFileAtURL:(id)a0;
+ (BOOL)changeFileOwnerToMobileAtPath:(id)a0 error:(id *)a1 usingFileManager:(id)a2;
+ (id)redactedDescriptionForFileURL:(id)a0;
+ (id)_mobileOwnerAttributes;
+ (id)defaultSystemPhotoDataCPLDirectory;
+ (BOOL)ingestItemAtURL:(id)a0 toURL:(id)a1 type:(long long)a2 options:(unsigned long long)a3 capabilities:(id)a4 error:(id *)a5;
+ (BOOL)filePath:(id)a0 hasPrefix:(id)a1;
+ (BOOL)removeFilesInDirectoryAtURL:(id)a0 withPrefix:(id)a1 error:(id *)a2 progress:(id /* block */)a3;
+ (BOOL)stripImmutableFlagIfNecessaryFromFileAtPath:(id)a0;

@end
