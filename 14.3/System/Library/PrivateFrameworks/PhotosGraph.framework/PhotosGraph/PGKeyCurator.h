@class CLSAssetsBeautifier, CLSSimilarStacker;

@interface PGKeyCurator : NSObject {
    CLSAssetsBeautifier *_beautifier;
    CLSSimilarStacker *_similarStacker;
}

- (id)init;
- (void).cxx_destruct;
- (id)keyItemWithFeeder:(id)a0 options:(id)a1 criteria:(id)a2 debugInfo:(id)a3 progressBlock:(id /* block */)a4;
- (id)keyItemInItems:(id)a0 options:(id)a1 criteria:(id)a2 debugInfo:(id)a3 progressBlock:(id /* block */)a4;
- (id)keyItemIdentifierWithItems:(id)a0 options:(id)a1 debugInfo:(out id *)a2;
- (id)bestItemIdentifierWithItems:(id)a0 options:(id)a1 debugInfo:(out id *)a2 criteria:(id)a3 curationOptions:(id)a4;
- (id)_keyItemInItems:(id)a0 options:(id)a1 criteria:(id)a2 debugInfo:(id)a3 progressBlock:(id /* block */)a4;
- (BOOL)item:(id)a0 passesCriteria:(id)a1 score:(double *)a2;
- (id)clusterWithSubclusters:(id)a0 keyItem:(id)a1;
- (BOOL)scoreLevelOfCluster:(id)a0 isAboveScoreLevelOfCluster:(id)a1;
- (BOOL)cluster:(id)a0 scoresBetterThanCluster:(id)a1;
- (BOOL)cluster:(id)a0 isBetterThanCluster:(id)a1;
- (id)bestItemInItems:(id)a0 options:(id)a1 criteria:(id)a2 minimumCriteriaScore:(double)a3;

@end
