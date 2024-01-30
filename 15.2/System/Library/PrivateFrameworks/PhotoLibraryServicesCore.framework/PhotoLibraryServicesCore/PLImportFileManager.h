@class PLPhotoLibraryPathManager;

@interface PLImportFileManager : NSObject {
    PLPhotoLibraryPathManager *_pathManager;
}

+ (BOOL)isImportDirectoryFolderName:(id)a0;
+ (BOOL)isCameraDirectoryFolderName:(id)a0;

- (id)initWithPathManager:(id)a0;
- (BOOL)removeUnusedDCIMDirectoryAtPath:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)nextAvailableFilePathInDirectory:(id)a0 withExtension:(id)a1;
- (id)_dcimDirectory;
- (id)_DCIMFolderNameWithNumber:(long long)a0;
- (id)urlForNewDCIMFolderWithFolderNumber:(long long *)a0;

@end
