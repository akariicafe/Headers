@interface DEDCloudKitExtensionsUtil : NSObject

+ (id)copyFiles:(id)a0 toDirectory:(id)a1;
+ (id)flattenDirectories:(id)a0;
+ (id)flattenDirectories:(id)a0 progressHandler:(id /* block */)a1;
+ (id)getAllFilesInSessionDirectoryForSessionID:(id)a0;
+ (id)getCompletedExtensionFromAllExtensions:(id)a0;
+ (id)getVerifiedExtensionDirectoriesFromCompletedExtensions:(id)a0 forSession:(id)a1;
+ (void)updateELSSnapshotStatus:(unsigned long long)a0;

@end
