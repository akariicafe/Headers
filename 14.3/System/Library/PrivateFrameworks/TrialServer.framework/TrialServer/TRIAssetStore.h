@protocol TRIAssetExtracting, TRIPaths;

@interface TRIAssetStore : NSObject {
    id<TRIPaths> _paths;
    id<TRIAssetExtracting> _extractor;
}

+ (id)shortHashForAssetIdentifier:(id)a0;

- (id)init;
- (BOOL)removeAssetWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)initWithPaths:(id)a0;
- (BOOL)collectGarbageOlderThanNumScans:(unsigned int)a0;
- (BOOL)hasAssetWithIdentifier:(id)a0 type:(unsigned char *)a1;
- (id)initWithPaths:(id)a0 extractor:(id)a1;
- (BOOL)_validateAssetIdentifier:(id)a0;
- (BOOL)_saveFileAssetWithIdentifier:(id)a0 assetData:(id)a1;
- (BOOL)_saveDirectoryAssetWithIdentifier:(id)a0 assetData:(id)a1;
- (BOOL)_acquireLockfileAndRunBlock:(id /* block */)a0;
- (id)_pathForAssetDirWithIdentifier:(id)a0;
- (id)_createTempDir;
- (BOOL)_overwriteRenameAsAtomicallyAsPossibleWithSrc:(id)a0 dest:(id)a1;
- (void)_forceRemoveItemAtPath:(id)a0;
- (BOOL)_removeAssetWithIdentifier:(id)a0 flockWitness:(const struct TRIFlockWitness_ { } *)a1;
- (id)_requireAssetStoreTempDir;
- (BOOL)_linkFileAssetWithIdentifier:(id)a0 toPath:(id)a1;
- (BOOL)_linkDirectoryAssetWithIdentifier:(id)a0 toPath:(id)a1;
- (BOOL)_clearUnrefAgeForAssetWithIdentifier:(id)a0;
- (id)_pathForRefsToAssetWithIdentifier:(id)a0;
- (id)_pathForAssetContentWithIdentifier:(id)a0;
- (BOOL)_addSymlinkFromAssetWithIdentifier:(id)a0 toPath:(id)a1;
- (BOOL)_removeDeadSymlinksWithFlockWitness:(const struct TRIFlockWitness_ { } *)a0 numRemoved:(unsigned int *)a1;
- (BOOL)_removeUnreferencedAssetsWithFlockWitness:(const struct TRIFlockWitness_ { } *)a0 olderThanAge:(unsigned int)a1 numRemoved:(unsigned int *)a2;
- (BOOL)_isValidTargetForSymlink:(id)a0 assetIdentifier:(id)a1;
- (void)_enumerateAssetDirsUsingBlock:(id /* block */)a0;
- (int)_collectDeadSymlinks;
- (BOOL)_removePathsInFd:(int)a0 numRemoved:(unsigned int *)a1;
- (int)_collectUnreferencedAssets;
- (BOOL)_incrementUnrefAgeForAssetWithIdentifier:(id)a0 newValue:(unsigned int *)a1;
- (BOOL)_enumerateZeroTerminatedStringsInFd:(int)a0 usingBlock:(id /* block */)a1;
- (BOOL)_isDirectoryAtPath:(id)a0 matchingAssetContentAtPath:(id)a1;
- (BOOL)_isFileAtPath:(id)a0 matchingAssetContentAtPath:(id)a1;
- (void)_fixupPermissionsOnPath:(id)a0 permissionBits:(const unsigned short *)a1;
- (BOOL)_nonAtomicOverwriteWithSrc:(id)a0 dest:(id)a1 finalPermissionBits:(const unsigned short *)a2;
- (BOOL)saveAssetWithIdentifier:(id)a0 assetData:(id)a1 type:(unsigned char)a2;
- (BOOL)linkAssetWithIdentifier:(id)a0 toPath:(id)a1;
- (void)enumerateSavedAssetsUsingBlock:(id /* block */)a0;

@end
