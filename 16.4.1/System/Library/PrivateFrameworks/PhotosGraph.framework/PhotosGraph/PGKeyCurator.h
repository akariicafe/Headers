@class CLSAssetsBeautifier, CLSSimilarStacker, PGCurationCriteriaFactory;

@interface PGKeyCurator : NSObject {
    CLSAssetsBeautifier *_beautifier;
    CLSSimilarStacker *_similarStacker;
    PGCurationCriteriaFactory *_curationCriteriaFactory;
}

- (void).cxx_destruct;
- (id)clusterWithSubclusters:(id)a0 keyItem:(id)a1;
- (id)_keyItemInItems:(id)a0 options:(id)a1 criteria:(id)a2 debugInfo:(id)a3 progressBlock:(id /* block */)a4;
- (id)bestItemIdentifierWithItems:(id)a0 options:(id)a1 debugInfo:(out id *)a2 criteria:(id)a3 curationOptions:(id)a4;
- (id)bestItemInItems:(id)a0 options:(id)a1 criteria:(id)a2 minimumCriteriaScore:(double)a3;
- (BOOL)cluster:(id)a0 isBetterThanCluster:(id)a1 forMemories:(BOOL)a2 allowGuestAsset:(BOOL)a3;
- (BOOL)cluster:(id)a0 scoresBetterThanCluster:(id)a1;
- (id)initWithCurationCriteriaFactory:(id)a0;
- (BOOL)item:(id)a0 passesCriteria:(id)a1 score:(double *)a2;
- (id)keyItemIdentifierWithItems:(id)a0 options:(id)a1 debugInfo:(out id *)a2;
- (id)keyItemInItems:(id)a0 options:(id)a1 criteria:(id)a2 debugInfo:(id)a3 progressBlock:(id /* block */)a4;
- (id)keyItemWithFeeder:(id)a0 options:(id)a1 criteria:(id)a2 debugInfo:(id)a3 progressBlock:(id /* block */)a4;
- (BOOL)scoreLevelOfCluster:(id)a0 isAboveScoreLevelOfCluster:(id)a1;

@end
