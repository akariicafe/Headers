@interface LPAPFSVolume : LPMedia

+ (void)initialize;
+ (void)_loadMountPointTableForMode:(int)a0;
+ (id)defaultMountPointGivenRole:(int)a0;
+ (id)defaultVolumeNameGivenRole:(int)a0;
+ (id)supportedContentTypes;

- (id)container;
- (int)role;
- (BOOL)isEncrypted;
- (id)volumeGroupUUID;
- (id)snapshotMountPoints;
- (BOOL)mountAtPath:(id)a0 error:(id *)a1;
- (BOOL)mountAtPath:(id)a0 options:(id)a1 error:(id *)a2;
- (id)mountAtTemporaryPathWithError:(id *)a0;
- (id)_createTemporaryMountPointWithError:(id *)a0;
- (BOOL)unmountWithError:(id *)a0;
- (BOOL)unmountWithOptions:(id)a0 error:(id *)a1;
- (id)snapshotInfoWithError:(id *)a0;
- (BOOL)setRole:(int)a0 withError:(id *)a1;
- (BOOL)isCaseSenstive;
- (BOOL)isFilevaultEncrypted;
- (id)pairedVolume;
- (BOOL)eraseVolumeWithError:(id *)a0;
- (BOOL)mountWithError:(id *)a0;
- (BOOL)unmountAllWithError:(id *)a0;
- (BOOL)deleteVolumeWithError:(id *)a0;
- (id)snapshotsWithError:(id *)a0;
- (BOOL)createSnapshot:(id)a0 error:(id *)a1;
- (BOOL)deleteSnapshots:(id)a0 waitForDeletionFor:(double)a1 error:(id *)a2;
- (BOOL)renameSnapshot:(id)a0 to:(id)a1 error:(id *)a2;
- (BOOL)revertToSnapshot:(id)a0 error:(id *)a1;
- (BOOL)rootToSnapshot:(id)a0 error:(id *)a1;
- (BOOL)isMounted;

@end
