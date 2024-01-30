@class NSString, NSNumber;

@interface MBFileSystemManager : NSObject {
    NSNumber *_shouldRestoreFilesSparse;
}

@property (retain, nonatomic) NSString *fileSystemType;
@property (readonly) NSString *mountPoint;
@property (readonly) BOOL shouldRestoreFilesSparse;
@property (readonly, nonatomic) BOOL supportsLocalSnapshots;
@property (readonly, nonatomic) BOOL supportsSparseFiles;
@property (readonly, nonatomic) NSString *currentSnapshotPath;
@property (readonly, nonatomic) NSString *currentSnapshotName;

+ (void)removeStaleCleanUpDirectory;
+ (id)volumeUUIDWithVolumeMountPoint:(id)a0 error:(id *)a1;
+ (BOOL)startFilesystemKeyRollingWithPath:(id)a0 error:(id *)a1;
+ (id)volumeMountPointForFile:(id)a0 error:(id *)a1;
+ (unsigned long long)removeRestorePrefetchCacheAtPath:(id)a0;
+ (void)removeDeviceTransferDirectoryWithEarliestCreationDate:(id)a0;
+ (BOOL)stopFilesystemKeyRollingWithPath:(id)a0 error:(id *)a1;
+ (BOOL)unmountSnapshotFromMountPoint:(id)a0 error:(id *)a1;
+ (unsigned long long)fileSystemCapacity;
+ (unsigned long long)removeRestorePrefetchCacheAtPath:(id)a0 earliestDate:(id)a1;
+ (id)listAllSnapshotsAtPath:(id)a0 error:(id *)a1;
+ (id)managerWithMountPoint:(id)a0;

- (id)initWithMountPoint:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)_fileSystemSupportsSnapshots;
- (BOOL)_fileSystemSupportsSparseFiles;
- (id)_removeFileSystemSnapshotsWithBlock:(id /* block */)a0;
- (id)_snapshotName:(id)a0;
- (BOOL)mountSnapshot:(id)a0 atMountPoint:(id)a1 withError:(id *)a2;
- (void)removeAllBackupInternalSnapshots;
- (void)removeAllBackupInternalSnapshotsCreatedBeforeDate:(id)a0;
- (BOOL)removeAllBackupSnapshots:(id *)a0;
- (BOOL)removeAllBackupSnapshotsWithLatestCreationDate:(id)a0 error:(id *)a1;
- (void)removeDriveBackupSnapshotsWithLatestCreationDate:(id)a0;
- (BOOL)removeSnapshot:(id)a0 withError:(id *)a1;
- (BOOL)snapshotFilesystemWithSnapshotID:(id)a0 error:(id *)a1 cancelationHandler:(id /* block */)a2;
- (BOOL)snapshotFilesystemWithSnapshotName:(id)a0 error:(id *)a1 cancelationHandler:(id /* block */)a2;
- (BOOL)unmountCurrentSnapshotAndRenameToInternalArchive:(id *)a0;
- (BOOL)unmountCurrentSnapshotFromMountPoint:(id)a0 andRemoveIt:(BOOL)a1 withError:(id *)a2;

@end
