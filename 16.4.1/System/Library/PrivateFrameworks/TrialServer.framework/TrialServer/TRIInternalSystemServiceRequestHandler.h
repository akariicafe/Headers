@class TRIAssetStore;
@protocol TRITrialInternalSystemEntitled, TRIStorageManagementProtocol, TRIAssetStoreOperations;

@interface TRIInternalSystemServiceRequestHandler : NSObject <TRIXPCInternalSystemServiceProtocol> {
    id<TRITrialInternalSystemEntitled> _entitlementWitness;
    TRIAssetStore *_store;
    id<TRIAssetStoreOperations> _operator;
    id<TRIStorageManagementProtocol> _storageManagement;
}

- (void).cxx_destruct;
- (void)addSymlinkFromAssetWithIdentifier:(id)a0 toPath:(id)a1 flockWitness:(const struct TRIFlockWitness_ { int x0; } *)a2 completion:(id /* block */)a3;
- (void)collectGarbageOlderThanNumScans:(unsigned int)a0 deletedAssetSize:(unsigned long long *)a1 ignoreRecentlyCreatedAssets:(BOOL)a2 dryRun:(BOOL)a3 includedCacheDeletableAssetIds:(id)a4 completion:(id /* block */)a5;
- (void)fixFileProtectionForAssetStoreWithCompletion:(id /* block */)a0;
- (id)initWithEntitlementWitness:(id)a0;
- (void)referenceMAAutoAssetWithId:(id)a0 futurePath:(id)a1 currentPath:(id)a2 isFileFactor:(BOOL)a3 completion:(id /* block */)a4;
- (void)removeAssetWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)requireAssetStoreTempDir:(id /* block */)a0;
- (void)saveAssetWithIdentifier:(id)a0 sourcePath:(id)a1 flockWitness:(const struct TRIFlockWitness_ { int x0; } *)a2 removeSourceOnFailure:(BOOL)a3 completion:(id /* block */)a4;

@end
