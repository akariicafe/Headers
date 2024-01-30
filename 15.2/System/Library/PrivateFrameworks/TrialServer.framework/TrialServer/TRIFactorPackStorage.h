@protocol TRIAssetExtracting, TRIPaths;

@interface TRIFactorPackStorage : NSObject {
    id<TRIPaths> _paths;
    id<TRIAssetExtracting> _extractor;
}

- (id)loadFactorPackWithDir:(id)a0;
- (id)_legacyParentDirForFactorPackWithNamespaceName:(id)a0;
- (id)_parentDirForFactorPackWithNamespaceName:(id)a0;
- (id)loadParsedFactorPackWithId:(id)a0 namespaceName:(id)a1;
- (BOOL)_removeUnreferencedFactorPackSetsWithParentDir:(id)a0 removedCount:(unsigned int *)a1;
- (id)_removeAssetsWithFactorNames:(id)a0 copyingModifiedFactorPackWithPath:(id)a1 appendingToPathsToRemove:(id)a2 tempDirRef:(id)a3;
- (id)_linkAssetWithId:(id)a0 assetStore:(id)a1 forFactorName:(id)a2 currentFactorPackPath:(id)a3 futureFactorPackPath:(id)a4;
- (id)loadFactorPackWithId:(id)a0 namespaceName:(id)a1;
- (BOOL)_removeUnreferencedFactorPackSetsWithNamespaceName:(id)a0 removedCount:(unsigned int *)a1;
- (id)legacyPathForFactorPackWithId:(id)a0 namespaceName:(id)a1;
- (id)initWithPaths:(id)a0 extractor:(id)a1;
- (id)_legacyPathForFactorPackWithId:(id)a0 namespaceName:(id)a1;
- (id)_linkAssetsWithIds:(id)a0 copyingModifiedFactorPackWithPath:(id)a1 tempDirRef:(id)a2;
- (id)loadParsedFactorPackWithDir:(id)a0;
- (void).cxx_destruct;
- (void)_reportFactorPackDiskUsagesWithNamespaceName:(id)a0 namespaceDirName:(id)a1 context:(id)a2;
- (BOOL)updateSavedFactorPackWithId:(id)a0 namespaceName:(id)a1 linkingNewAssetIds:(id)a2;
- (id)init;
- (void)reportFactorPackDiskUsagesUsingContext:(id)a0;
- (id)_pathForFactorPackWithId:(id)a0 namespaceName:(id)a1;
- (BOOL)saveFactorPack:(id)a0 factorPackByNamePath:(id *)a1 factorPackByIdPath:(id *)a2;
- (id)_collectChildrenOfParentDir:(id)a0;
- (BOOL)_linkAssetsUpdatingFactorLevel:(id)a0 fromFactorPackWithId:(id)a1 usingAssetStore:(id)a2 currentFactorPackPath:(id)a3 futureFactorPackPath:(id)a4;
- (id)pathForFactorPackWithId:(id)a0 namespaceName:(id)a1;
- (BOOL)updateSavedFactorPackWithId:(id)a0 namespaceName:(id)a1 deletingAssetsWithFactorNames:(id)a2 deferDeleteInUseAssets:(BOOL)a3;
- (BOOL)removeUnreferencedFactorPacksWithRemovedCount:(unsigned int *)a0;
- (id)initWithPaths:(id)a0;

@end
