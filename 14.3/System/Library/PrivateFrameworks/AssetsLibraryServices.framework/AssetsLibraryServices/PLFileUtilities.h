@interface PLFileUtilities : NSObject

+ (long long)fileLengthForFilePath:(id)a0;
+ (BOOL)removeFilesInDirectoryAtURL:(id)a0 withPrefix:(id)a1 error:(id *)a2 progress:(id /* block */)a3;
+ (id)defaultSystemPhotoDCIMDirectory;
+ (BOOL)filePath:(id)a0 hasPrefix:(id)a1;
+ (id)defaultSystemPhotoDataMiscDirectory;
+ (BOOL)setPhotoLibraryBasePath:(id)a0;
+ (id)systemLibraryURL;
+ (id)_mobileOwnerAttributes;
+ (id)proxyLockFilePathForDatabasePath:(id)a0;
+ (id)defaultSystemPhotoDataCPLDirectory;
+ (BOOL)removeDisconnectedSQLiteDatabaseFileWithPath:(id)a0 error:(id *)a1;
+ (BOOL)createDirectoryAtPath:(id)a0 error:(id *)a1 usingFileManager:(id)a2;
+ (BOOL)secureMoveItemAtURL:(id)a0 toURL:(id)a1 capabilities:(id)a2 error:(id *)a3;
+ (BOOL)filePath:(id)a0 isEqualToFilePath:(id)a1;
+ (BOOL)ingestItemAtURL:(id)a0 toURL:(id)a1 type:(long long)a2 options:(unsigned long long)a3 capabilities:(id)a4 error:(id *)a5;
+ (id)redactedDescriptionForPath:(id)a0;
+ (BOOL)copyItemAtURL:(id)a0 toURL:(id)a1 error:(id *)a2;
+ (BOOL)createDirectoryAtPath:(id)a0 error:(id *)a1;
+ (BOOL)changeFileOwnerToMobileAtPath:(id)a0 error:(id *)a1 usingFileManager:(id)a2;
+ (id)fileManager;
+ (id)defaultSystemLibraryURL;
+ (BOOL)URLIsInTrash:(id)a0;
+ (id)defaultSystemPhotoDataDirectory;
+ (long long)directoryEntryCountAtURL:(id)a0 error:(id *)a1;
+ (BOOL)isFileExistsError:(id)a0;
+ (id)_defaultSystemLibraryPath;
+ (BOOL)stripImmutableFlagIfNecessaryFromFileAtPath:(id)a0;
+ (BOOL)hasDiskSpaceToCopyFileAtURL:(id)a0;
+ (id)descriptionForFileIngestionType:(long long)a0;
+ (id)realPathForPath:(id)a0 error:(id *)a1;
+ (BOOL)changeFileOwnerToMobileAtPath:(id)a0 error:(id *)a1;
+ (BOOL)fileURL:(id)a0 isEqualToFileURL:(id)a1;
+ (BOOL)stripExtendedAttributesFromFileAtURL:(id)a0 inDomain:(id)a1 error:(id *)a2;
+ (BOOL)cloneFileAtPath:(id)a0 toPath:(id)a1 error:(id *)a2;
+ (id)proxyLockCoordinatingFilePathForDatabaseDirectory:(id)a0 databaseName:(id)a1;
+ (id)redactedDescriptionForFileURL:(id)a0;

@end
