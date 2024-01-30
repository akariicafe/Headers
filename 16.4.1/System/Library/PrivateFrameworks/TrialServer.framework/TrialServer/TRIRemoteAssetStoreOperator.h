@class _PASXPCClientHelper;
@protocol TRIPaths;

@interface TRIRemoteAssetStoreOperator : NSObject <TRIAssetStoreOperations> {
    id<TRIPaths> _paths;
    _PASXPCClientHelper *_internalHelper;
}

- (BOOL)fixFileProtectionForAssetStoreFiles;
- (id)initWithPaths:(id)a0;
- (BOOL)removeAssetWithIdentifier:(id)a0;
- (BOOL)saveAssetWithIdentifier:(id)a0 sourcePath:(id)a1 flockWitness:(const struct TRIFlockWitness_ { int x0; } *)a2 removeSourceOnFailure:(BOOL)a3;
- (id)requireAssetStoreTempDir;
- (BOOL)collectGarbageOlderThanNumScans:(unsigned int)a0 deletedAssetSize:(unsigned long long *)a1 ignoreRecentlyCreatedAssets:(BOOL)a2 dryRun:(BOOL)a3 includedCacheDeletableAssetIds:(id)a4 deletedAssetIds:(id *)a5;
- (BOOL)referenceMAAutoAssetWithId:(id)a0 futurePath:(id)a1 currentPath:(id)a2 isFileFactor:(BOOL)a3;
- (BOOL)addSymlinkFromAssetWithIdentifier:(id)a0 toPath:(id)a1 flockWitness:(const struct TRIFlockWitness_ { int x0; } *)a2;
- (void).cxx_destruct;

@end
