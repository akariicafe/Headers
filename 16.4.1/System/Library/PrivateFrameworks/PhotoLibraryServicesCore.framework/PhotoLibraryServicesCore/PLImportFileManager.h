@class PLPhotoLibraryPathManager;

@interface PLImportFileManager : NSObject {
    PLPhotoLibraryPathManager *_pathManager;
}

+ (BOOL)isCameraDirectoryFolderName:(id)a0;
+ (BOOL)isImportDirectoryFolderName:(id)a0;

- (BOOL)removeUnusedDCIMDirectoryAtPath:(id)a0;
- (id)initWithPathManager:(id)a0;
- (id)nextAvailableFilePathInDirectory:(id)a0 withExtension:(id)a1;
- (id)_DCIMFolderNameWithNumber:(long long)a0;
- (id)_dcimDirectory;
- (id)init;
- (id)urlForNewDCIMFolderWithFolderNumber:(long long *)a0;
- (void).cxx_destruct;

@end
