@class NSString, TRIAssetStore, TRIClient;
@protocol TRIPurgeableNamespacesProviding, TRIPurgeableFactorPacksEnumerating, TRIPaths;

@interface TRIAssetPurger : NSObject <TRIAssetPurging> {
    id<TRIPaths> _paths;
    id<TRIPurgeableNamespacesProviding> _purgeableNamespacesProvider;
    id<TRIPurgeableFactorPacksEnumerating> _purgeableFactorPacksEnumerator;
    TRIAssetStore *_assetStore;
    TRIClient *_loggingClient;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_enumerateRolloutFactorPackPurgeCandidatesForPurgeabilityLevel:(int)a0 block:(id /* block */)a1;
- (void)_logPurgedAssetsFromFactorPackWithId:(id)a0 namespaceName:(id)a1 purgeabilityLevel:(int)a2;
- (unsigned long long)purgeableAssetSizeForPurgeabilityLevel:(int)a0;
- (unsigned long long)purgeAssetsForPurgeabilityLevel:(int)a0 requestedPurgeAmount:(long long)a1;
- (id)initWithPaths:(id)a0 assetStore:(id)a1 purgeableNamespacesProvider:(id)a2 purgeableFactorPacksEnumerator:(id)a3 loggingClient:(id)a4;

@end
