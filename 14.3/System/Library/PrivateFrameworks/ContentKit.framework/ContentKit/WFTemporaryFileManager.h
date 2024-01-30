@interface WFTemporaryFileManager : NSObject

+ (id)appGroupIdentifier;
+ (id)temporaryDirectoryURL;
+ (id)proposedTemporaryFileURLForFilename:(id)a0;
+ (id)createTemporaryDirectoryWithFilename:(id)a0;
+ (id)proposedSharedTemporaryFileURLForFilename:(id)a0;
+ (id)createTemporaryFileWithFilename:(id)a0;
+ (void)clearTemporaryFiles;
+ (id)wf_uncachedContainerURLForSecurityApplicationGroupIdentifier:(id)a0 error:(id *)a1;
+ (id)sharedAppGroupDirectoryURL;
+ (id)sharedTemporaryDirectoryURL;
+ (void)createSharedDirectoryIfNecessary;
+ (void)configureTemporaryDirectoryProtectionIfNecessary;
+ (void)configureBackupFlagIfNecessary;
+ (void)configureFileProtectionAtPath:(id)a0;
+ (void)configureBackupFlagAtURL:(id)a0;
+ (id)proposedFileURLForFilename:(id)a0 inDirectory:(id)a1 isDirectory:(BOOL)a2;
+ (id)proposedTemporaryFileURLForFilename:(id)a0 inDirectory:(id)a1 isDirectory:(BOOL)a2;
+ (id)proposedTemporaryFileURLForFilename:(id)a0 isDirectory:(BOOL)a1;
+ (id)proposedSharedTemporaryFileURLForFilename:(id)a0 isDirectory:(BOOL)a1;
+ (id)proposedFileURLForFilename:(id)a0 inDirectory:(id)a1;
+ (id)createTemporaryDirectoryWithFilename:(id)a0 inDirectory:(id)a1;
+ (id)createSharedTemporaryDirectoryWithFilename:(id)a0;
+ (id)createTemporaryFileWithFilename:(id)a0 inDirectory:(id)a1;
+ (id)createSharedTemporaryFileWithFilename:(id)a0;

@end
