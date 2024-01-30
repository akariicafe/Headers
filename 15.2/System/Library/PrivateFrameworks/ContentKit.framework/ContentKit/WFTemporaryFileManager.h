@interface WFTemporaryFileManager : NSObject

+ (id)proposedTemporaryFileURLForFilename:(id)a0 isDirectory:(BOOL)a1;
+ (void)configureBackupFlagAtURL:(id)a0;
+ (id)appGroupIdentifier;
+ (id)proposedFileURLForFilename:(id)a0 inDirectory:(id)a1 isDirectory:(BOOL)a2;
+ (id)proposedTemporaryFileURLForFilename:(id)a0;
+ (id)createTemporaryFileWithFilename:(id)a0;
+ (void)createSharedDirectoryIfNecessary;
+ (id)createTemporaryDirectoryWithFilename:(id)a0 inDirectory:(id)a1;
+ (void)setUpDirectories;
+ (id)wf_uncachedContainerURLForSecurityApplicationGroupIdentifier:(id)a0 error:(id *)a1;
+ (void)configureBackupFlagIfNecessary;
+ (id)temporaryDirectoryURL;
+ (void)clearTemporaryFiles;
+ (id)proposedFileURLForFilename:(id)a0 inDirectory:(id)a1;
+ (id)sharedAppGroupDirectoryURL;
+ (id)sharedTemporaryDirectoryURL;
+ (void)configureTemporaryDirectoryProtectionIfNecessary;
+ (id)proposedFileURLForFilename:(id)a0 atTheRootOfDirectory:(id)a1 isDirectory:(BOOL)a2;
+ (id)createUniqueDirectoryInDirectory:(id)a0;
+ (id)proposedSharedTemporaryFileURLForFilename:(id)a0 isDirectory:(BOOL)a1;
+ (id)proposedFileURLForFilename:(id)a0 atTheRootOfDirectory:(id)a1;
+ (id)createTemporaryDirectoryWithFilename:(id)a0;
+ (id)createSharedTemporaryDirectoryWithFilename:(id)a0;
+ (id)createSharedTemporaryFileWithFilename:(id)a0;
+ (id)proposedSharedTemporaryFileURLForFilename:(id)a0;
+ (void)configureFileProtectionAtPath:(id)a0;
+ (void)createProcessTempDirectoryIfNecessary;
+ (id)createTemporaryFileWithFilename:(id)a0 inDirectory:(id)a1;

@end
