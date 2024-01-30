@protocol TRIAssetPatching, TRIAssetExtracting, TRIPaths;

@interface TRIAssetStore : NSObject {
    id<TRIPaths> _paths;
    id<TRIAssetExtracting> _extractor;
    id<TRIAssetPatching> _patcher;
}

+ (unsigned long long)_fileSizeInBytesForPath:(id)a0;
+ (id)shortHashForAssetIdentifier:(id)a0;

- (BOOL)_acquireLockfileAndRunBlock:(id /* block */)a0;
- (BOOL)_linkDirectoryAssetWithIdentifier:(id)a0 toCurrentPath:(id)a1 futurePath:(id)a2;
- (BOOL)saveAssetWithIdentifier:(id)a0 assetData:(id)a1 type:(unsigned char)a2;
- (BOOL)saveAssetWithIdentifier:(id)a0 builtFromAssetWithIdentifier:(id)a1 patchFilename:(id)a2 metadata:(id)a3;
- (BOOL)_isDirectoryAtPath:(id)a0 matchingAssetContentAtPath:(id)a1;
- (void)enumerateSavedAssetsUsingBlock:(id /* block */)a0;
- (BOOL)_incrementUnrefAgeForAssetWithIdentifier:(id)a0 newValue:(unsigned int *)a1 dryRun:(BOOL)a2;
- (BOOL)_saveFileAssetWithIdentifier:(id)a0 assetFilename:(id)a1;
- (id)_creationDateForAsset:(id)a0;
- (unsigned long long)removableAssetsSizeOlderThanNumScans:(unsigned int)a0 linkTargetsToIgnoreByAssetId:(id)a1;
- (unsigned short)_hardLinkCountForFileWithPath:(id)a0;
- (id)_createTempDir;
- (BOOL)_collectGarbageOlderThanNumScans:(unsigned int)a0 deletedAssetSize:(unsigned long long *)a1 ignoreRecentlyCreatedAssets:(BOOL)a2 dryRun:(BOOL)a3 linkTargetsToIgnoreByAssetId:(id)a4 deletedAssetIds:(id *)a5;
- (unsigned short)_hardLinkCountForAssetWithIdentifier:(id)a0;
- (id)_pathForAssetContentWithIdentifier:(id)a0;
- (id)_collectDeadSymlinks;
- (void)_enumerateAssetDirsUsingBlock:(id /* block */)a0;
- (BOOL)setCreationDate:(id)a0 forAssetIdentifier:(id)a1;
- (BOOL)_removePaths:(id)a0 numRemoved:(unsigned int *)a1;
- (void)_fixFileProtectionForFileURL:(id)a0;
- (BOOL)_forceRemoveItemAtPath:(id)a0;
- (BOOL)hasAssetWithIdentifier:(id)a0 type:(unsigned char *)a1;
- (BOOL)_addSymlinkFromAssetWithIdentifier:(id)a0 toPath:(id)a1;
- (BOOL)_linkFileAssetWithIdentifier:(id)a0 toCurrentPath:(id)a1 futurePath:(id)a2;
- (BOOL)_isFileAtPath:(id)a0 matchingAssetContentAtPath:(id)a1;
- (id)_collectUnreferencedAssetsIgnoringLinkTargetsByAssetId:(id)a0 ignoreRecentlyCreatedAssets:(BOOL)a1;
- (id)_pathForAssetDirWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (BOOL)_clearUnrefAgeForAssetWithIdentifier:(id)a0;
- (BOOL)collectGarbageOlderThanNumScans:(unsigned int)a0 ignoreRecentlyCreatedAssets:(BOOL)a1 deletedAssetSize:(unsigned long long *)a2 deletedAssetIds:(id *)a3;
- (id)init;
- (BOOL)removeAssetWithIdentifier:(id)a0;
- (id)_pathForRefsToAssetWithIdentifier:(id)a0;
- (void)fixFileProtectionForAssetStoreFiles;
- (BOOL)_saveFileAssetWithIdentifier:(id)a0 assetFilename:(id)a1 workingTempDirectory:(id)a2;
- (BOOL)_moveDirectoryAssetFromDirectory:(id)a0 toLocationForAssetIdentifier:(id)a1;
- (BOOL)_removeDeadSymlinksWithFlockWitness:(const struct TRIFlockWitness_ { int x0; } *)a0 numRemoved:(unsigned int *)a1;
- (BOOL)_overwriteRenameAsAtomicallyAsPossibleWithSrc:(id)a0 dest:(id)a1;
- (id)initWithPaths:(id)a0 extractor:(id)a1 patcher:(id)a2;
- (BOOL)linkAssetWithIdentifier:(id)a0 toPath:(id)a1;
- (BOOL)_nonAtomicOverwriteWithSrc:(id)a0 dest:(id)a1 finalPermissionBits:(const unsigned short *)a2;
- (void)_fixupPermissionsOnPath:(id)a0 permissionBits:(const unsigned short *)a1;
- (BOOL)collectGarbageOlderThanNumScans:(unsigned int)a0 deletedAssetSize:(unsigned long long *)a1;
- (BOOL)_removeUnreferencedAssetsWithFlockWitness:(const struct TRIFlockWitness_ { int x0; } *)a0 olderThanAge:(unsigned int)a1 numRemoved:(unsigned int *)a2 deletedAssetsSize:(unsigned long long *)a3 ignoreRecentlyCreatedAssets:(BOOL)a4 dryRun:(BOOL)a5 linkTargetsToIgnoreByAssetId:(id)a6 deletedAssetIds:(id *)a7;
- (unsigned long long)removableAssetsSizeOlderThanNumScans:(unsigned int)a0 ignoreRecentlyCreatedAssets:(BOOL)a1 linkTargetsToIgnoreByAssetId:(id)a2 deleteableAssetIds:(id *)a3;
- (BOOL)_isValidTargetForSymlink:(id)a0 assetIdentifier:(id)a1;
- (BOOL)_saveDirectoryAssetWithIdentifier:(id)a0 assetFilename:(id)a1 metadata:(id)a2 error:(id *)a3;
- (BOOL)saveAssetWithIdentifier:(id)a0 assetURL:(id)a1 metadata:(id)a2 error:(id *)a3;
- (BOOL)_removeAssetWithIdentifier:(id)a0 flockWitness:(const struct TRIFlockWitness_ { int x0; } *)a1 deletedAssetSize:(unsigned long long *)a2 dryRun:(BOOL)a3;
- (id)_requireAssetStoreTempDir;
- (BOOL)linkAssetWithIdentifier:(id)a0 toCurrentPath:(id)a1 futurePath:(id)a2;
- (id)initWithPaths:(id)a0;

@end
