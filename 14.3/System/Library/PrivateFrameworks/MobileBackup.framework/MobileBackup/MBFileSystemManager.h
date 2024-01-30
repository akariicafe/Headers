@class NSString;

@interface MBFileSystemManager : NSObject

@property (retain, nonatomic) NSString *fileSystemType;
@property (readonly, nonatomic) BOOL supportsLocalSnapshots;
@property (readonly, nonatomic) BOOL supportsSparseFiles;
@property (readonly, nonatomic) NSString *currentSnapshotPath;
@property (readonly, nonatomic) NSString *currentSnapshotName;

+ (id)listAllSnapshotsWithError:(id *)a0;
+ (id)listAllSnapshotsAtPath:(id)a0 error:(id *)a1;
+ (unsigned long long)fileSystemCapacity;
+ (BOOL)startFilesystemKeyRollingWithError:(id *)a0;
+ (BOOL)stopFilesystemKeyRollingWithError:(id *)a0;
+ (void)removeDeviceTransferDirectoryWithEarliestCreationDate:(id)a0;
+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_fileSystemSupportsSnapshots;
- (BOOL)_fileSystemSupportsSparseFiles;
- (id)_snapshotName:(id)a0;
- (BOOL)snapshotFilesystemWithSnapshotName:(id)a0 withError:(id *)a1;
- (BOOL)removeSnapshot:(id)a0 withError:(id *)a1;
- (id)_removeFileSystemSnapshotsWithBlock:(id /* block */)a0;
- (unsigned long long)removeRestorePrefetchCacheWithEarliestDate:(id)a0;
- (BOOL)snapshotFilesystem:(id)a0 withError:(id *)a1;
- (BOOL)removeAllBackupSnapshots:(id *)a0;
- (BOOL)removeAllBackupSnapshotsWithLatestCreationDate:(id)a0 error:(id *)a1;
- (BOOL)removeAllBackupInternalSnapshots:(id *)a0;
- (unsigned long long)removeRestorePrefetchCache;
- (BOOL)mountSnapshot:(id)a0 atMountPoint:(id)a1 withError:(id *)a2;
- (BOOL)unmountCurrentSnapshotFromMountPoint:(id)a0 andRemoveIt:(BOOL)a1 withError:(id *)a2;
- (BOOL)unmountCurrentSnapshotAndRenameToInternalArchive:(id *)a0;
- (id)description;

@end
