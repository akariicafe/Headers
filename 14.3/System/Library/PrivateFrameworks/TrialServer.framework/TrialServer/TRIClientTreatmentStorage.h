@protocol TRIAssetExtracting, TRIPaths;

@interface TRIClientTreatmentStorage : NSObject {
    id<TRIPaths> _paths;
    id<TRIAssetExtracting> _extractor;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithPaths:(id)a0;
- (BOOL)removeTreatmentWithTreatmentId:(id)a0;
- (BOOL)removeTreatmentFromLayer:(unsigned long long)a0 withNamespaceName:(id)a1;
- (id)loadTreatmentWithTreatmentId:(id)a0 isFilePresent:(BOOL *)a1;
- (id)urlForDefaultFactorsWithNamespaceName:(id)a0;
- (id)saveTreatment:(id)a0 assetURLs:(id)a1;
- (id)urlForFactorsWithTreatmentId:(id)a0 namespaceName:(id)a1;
- (id)updateSavedTreatmentWithTreatmentId:(id)a0 mergingAssetURLs:(id)a1 forNamespaceNames:(id)a2;
- (id)initWithPaths:(id)a0 extractor:(id)a1;
- (id)urlForTreatmentWithTreatmentId:(id)a0;
- (BOOL)_saveAssetsFromURLs:(id)a0 treatment:(id)a1;
- (BOOL)_linkAssetsUpdatingTreatment:(id)a0;
- (BOOL)_saveNamespacePartitionedTreatmentsForTreatment:(id)a0 forNamespaceNames:(id)a1;
- (BOOL)_savePersistedTreatment:(id)a0;
- (BOOL)_removeFactorsWithURL:(id)a0;
- (BOOL)_removeFactorsWithTreatmentId:(id)a0 namespaceName:(id)a1;
- (id)_baseUrlForTreatment:(id)a0 namespaceName:(id)a1;
- (id)_assetMapWithTreatment:(id)a0;
- (id)_assetURLForFactor:(id)a0 treatmentId:(id)a1;
- (BOOL)_resolveAssetPathsInTreatment:(id)a0 usingReferenceURL:(id)a1;
- (id)_copyFileFromURL:(id)a0 to:(id)a1;

@end
