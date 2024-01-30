@class PLPhotoLibraryPathManager;

@interface PLImportFileManager : NSObject {
    PLPhotoLibraryPathManager *_pathManager;
}

+ (BOOL)isImportDirectoryFolderName:(id)a0;
+ (BOOL)isCameraDirectoryFolderName:(id)a0;

- (id)initWithPathManager:(id)a0;
- (id)nextAvailableFilePathInDirectory:(id)a0 withExtension:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (id)_DCIMFolderNameWithNumber:(long long)a0;
- (id)urlForNewDCIMFolderWithFolderNumber:(long long *)a0;
- (BOOL)removeUnusedDCIMDirectoryAtPath:(id)a0;
- (id)_dcimDirectory;

@end
