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

+ (unsigned long long)removeRestorePrefetchCacheAtPath:(id)a0;
+ (unsigned long long)fileSystemCapacity;
+ (BOOL)stopFilesystemKeyRollingWithPath:(id)a0 error:(id *)a1;
+ (BOOL)unmountSnapshotFromMountPoint:(id)a0 error:(id *)a1;
+ (void)removeDeviceTransferDirectoryWithEarliestCreationDate:(id)a0;
+ (id)listAllSnapshotsAtPath:(id)a0 error:(id *)a1;
+ (id)volumeUUIDWithVolumeMountPoint:(id)a0 error:(id *)a1;
+ (id)managerWithMountPoint:(id)a0;
+ (unsigned long long)removeRestorePrefetchCacheAtPath:(id)a0 earliestDate:(id)a1;
+ (BOOL)startFilesystemKeyRollingWithPath:(id)a0 error:(id *)a1;

- (id)description;
- (id)initWithMountPoint:(id)a0;
- (void).cxx_destruct;
- (id)_snapshotName:(id)a0;
- (BOOL)_fileSystemSupportsSnapshots;
- (BOOL)_fileSystemSupportsSparseFiles;
- (BOOL)snapshotFilesystemWithSnapshotName:(id)a0 withError:(id *)a1;
- (BOOL)removeSnapshot:(id)a0 withError:(id *)a1;
- (id)_removeFileSystemSnapshotsWithBlock:(id /* block */)a0;
- (BOOL)snapshotFilesystemWithSnapshotID:(id)a0 withError:(id *)a1;
- (BOOL)removeAllBackupSnapshotsWithLatestCreationDate:(id)a0 error:(id *)a1;
- (BOOL)removeAllBackupSnapshots:(id *)a0;
- (BOOL)removeAllBackupInternalSnapshots:(id *)a0;
- (void)removeDriveBackupSnapshotsWithLatestCreationDate:(id)a0;
- (BOOL)mountSnapshot:(id)a0 atMountPoint:(id)a1 withError:(id *)a2;
- (BOOL)unmountCurrentSnapshotFromMountPoint:(id)a0 andRemoveIt:(BOOL)a1 withError:(id *)a2;
- (BOOL)unmountCurrentSnapshotAndRenameToInternalArchive:(id *)a0;

@end
