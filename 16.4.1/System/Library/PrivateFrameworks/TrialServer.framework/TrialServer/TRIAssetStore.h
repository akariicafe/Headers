@class NSObject;
@protocol TRIPaths, TRIAssetPatching, TRIAssetExtracting, OS_xpc_object, TRIAssetStoreOperations, TRIStorageManagementProtocol;

@interface TRIAssetStore : NSObject {
    id<TRIPaths> _paths;
    id<TRIAssetExtracting> _extractor;
    id<TRIAssetPatching> _patcher;
    NSObject<OS_xpc_object> *_monitoredActivity;
    id<TRIStorageManagementProtocol> _storageManagement;
}

@property (retain, nonatomic) id<TRIAssetStoreOperations> assetOperator;

+ (id)shortHashForAssetIdentifier:(id)a0;

- (void)fixFileProtectionForAssetStoreFiles;
- (BOOL)_clearUnrefAgeForAssetWithIdentifier:(id)a0;
- (id)pathForAssetDirWithIdentifier:(id)a0;
- (id)pathForAssetContentWithIdentifier:(id)a0;
- (id)initWithPaths:(id)a0 extractor:(id)a1 patcher:(id)a2 monitoredActivity:(id)a3;
- (BOOL)setCreationDate:(id)a0 forAssetIdentifier:(id)a1;
- (BOOL)saveAssetWithIdentifier:(id)a0 assetData:(id)a1 type:(unsigned char)a2;
- (BOOL)_isFileAtPath:(id)a0 matchingAssetContentAtPath:(id)a1;
- (struct { unsigned char x0; })saveAssetWithIdentifier:(id)a0 assetURL:(id)a1 metadata:(id)a2 error:(id *)a3;
- (BOOL)_nonAtomicOverwriteWithSrc:(id)a0 dest:(id)a1 finalPermissionBits:(const unsigned short *)a2;
- (id)pathForRefsToAssetWithIdentifier:(id)a0;
- (BOOL)_overwriteRenameAsAtomicallyAsPossibleWithSrc:(id)a0 dest:(id)a1;
- (BOOL)saveAssetWithIdentifier:(id)a0 builtFromAssetWithIdentifier:(id)a1 patchFilename:(id)a2 metadata:(id)a3 error:(id *)a4;
- (BOOL)hasAssetWithIdentifier:(id)a0 type:(unsigned char *)a1;
- (id)initWithPaths:(id)a0;
- (BOOL)_saveFileAssetWithIdentifier:(id)a0 assetFilename:(id)a1 workingTempDirectory:(id)a2 flockWitness:(const struct TRIFlockWitness_ { int x0; } *)a3;
- (void)enumerateAssetDirsUsingBlock:(id /* block */)a0;
- (BOOL)removeAssetWithIdentifier:(id)a0;
- (BOOL)_saveFileAssetWithIdentifier:(id)a0 assetFilename:(id)a1 flockWitness:(const struct TRIFlockWitness_ { int x0; } *)a2;
- (id)initWithPaths:(id)a0 extractor:(id)a1 patcher:(id)a2;
- (unsigned long long)removableAssetsSizeOlderThanNumScans:(unsigned int)a0 includedCacheDeletableAssetIds:(id)a1;
- (BOOL)_linkDirectoryAssetWithIdentifier:(id)a0 toCurrentPath:(id)a1 futurePath:(id)a2 flockWitness:(const struct TRIFlockWitness_ { int x0; } *)a3;
- (BOOL)referenceMAAutoAssetWithId:(id)a0 isFileFactor:(BOOL)a1 usingCurrentPath:(id)a2 futurePath:(id)a3;
- (id)_createTempDir;
- (id)initWithPaths:(id)a0 monitoredActivity:(id)a1;
- (BOOL)_isDirectoryAtPath:(id)a0 matchingAssetContentAtPath:(id)a1;
- (void)_fixupPermissionsOnPath:(id)a0 permissionBits:(const unsigned short *)a1;
- (BOOL)collectGarbageOlderThanNumScans:(unsigned int)a0 deletedAssetSize:(unsigned long long *)a1;
- (id)init;
- (void)enumerateSavedAssetsUsingBlock:(id /* block */)a0;
- (BOOL)_forceRemoveItemAtPath:(id)a0;
- (BOOL)_acquireLockfileAndRunBlock:(id /* block */)a0;
- (BOOL)collectGarbageOlderThanNumScans:(unsigned int)a0 ignoreRecentlyCreatedAssets:(BOOL)a1 deletedAssetSize:(unsigned long long *)a2 deletedAssetIds:(id *)a3;
- (struct { unsigned char x0; })_saveDirectoryAssetWithIdentifier:(id)a0 assetFilename:(id)a1 metadata:(id)a2 flockWitness:(const struct TRIFlockWitness_ { int x0; } *)a3 error:(id *)a4;
- (BOOL)_linkFileAssetWithIdentifier:(id)a0 toCurrentPath:(id)a1 futurePath:(id)a2 flockWitness:(const struct TRIFlockWitness_ { int x0; } *)a3;
- (void).cxx_destruct;
- (BOOL)linkAssetWithIdentifier:(id)a0 toPath:(id)a1;
- (BOOL)isValidTargetForSymlink:(id)a0 assetIdentifier:(id)a1;
- (BOOL)linkAssetWithIdentifier:(id)a0 toCurrentPath:(id)a1 futurePath:(id)a2;
- (unsigned long long)removableAssetsSizeOlderThanNumScans:(unsigned int)a0 ignoreRecentlyCreatedAssets:(BOOL)a1 includedCacheDeletableAssetIds:(id)a2 deleteableAssetIds:(id *)a3;

@end
