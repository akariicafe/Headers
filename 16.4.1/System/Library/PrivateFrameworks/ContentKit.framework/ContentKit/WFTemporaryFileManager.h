@interface WFTemporaryFileManager : NSObject

+ (id)proposedSharedTemporaryFileURLForFilename:(id)a0;
+ (void)createSharedDirectoryIfNecessary;
+ (id)createTemporaryDirectoryWithFilename:(id)a0;
+ (void)setUpDirectories;
+ (id)wf_uncachedContainerURLForSecurityApplicationGroupIdentifier:(id)a0 error:(id *)a1;
+ (void)configureBackupFlagIfNecessary;
+ (id)createTemporaryDirectoryWithFilename:(id)a0 inDirectory:(id)a1;
+ (id)proposedTemporaryFileURLForFilename:(id)a0;
+ (id)proposedSharedTemporaryFileURLForFilename:(id)a0 isDirectory:(BOOL)a1;
+ (id)createSharedTemporaryDirectoryWithFilename:(id)a0;
+ (id)proposedFileURLForFilename:(id)a0 atTheRootOfDirectory:(id)a1;
+ (id)appGroupIdentifier;
+ (id)createTemporaryFileWithFilename:(id)a0 inDirectory:(id)a1;
+ (id)proposedFileURLForFilename:(id)a0 inDirectory:(id)a1;
+ (id)proposedFileURLForFilename:(id)a0 atTheRootOfDirectory:(id)a1 isDirectory:(BOOL)a2;
+ (id)createSharedTemporaryFileWithFilename:(id)a0;
+ (id)createUniqueDirectoryInDirectory:(id)a0;
+ (void)configureTemporaryDirectoryProtectionIfNecessary;
+ (id)proposedTemporaryFileURLForFilename:(id)a0 isDirectory:(BOOL)a1;
+ (void)markDirectoryAsPurgeableAtURL:(id)a0;
+ (void)configureBackupFlagAtURL:(id)a0;
+ (id)createTemporaryFileWithFilename:(id)a0;
+ (id)sharedTemporaryDirectoryURL;
+ (id)proposedFileURLForFilename:(id)a0 inDirectory:(id)a1 isDirectory:(BOOL)a2;
+ (id)topLevelTemporaryDirectoryURL;
+ (id)temporaryDirectoryURL;
+ (void)clearTemporaryFiles;
+ (id)sharedAppGroupDirectoryURL;
+ (void)configureFileProtectionAtPath:(id)a0;

@end
