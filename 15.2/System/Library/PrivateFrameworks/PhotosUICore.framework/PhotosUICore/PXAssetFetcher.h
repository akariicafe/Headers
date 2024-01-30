@class NSString, NSMapTable, PHPhotoLibrary, NSObject;
@protocol OS_dispatch_queue;

@interface PXAssetFetcher : NSObject <PXPhotoLibraryUIChangeObserver> {
    NSObject<OS_dispatch_queue> *_queue;
    NSMapTable *_resultsByAssetCollectionByConfiguration;
}

@property (readonly, weak, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedFetcherForPhotoLibrary:(id)a0;

- (id)_importantFetchNameForCollectionSubypte:(long long)a0;
- (void)clearFetchResultsForAssetCollection:(id)a0;
- (id)_fetchKeyAssetsInAssetCollection:(id)a0 curated:(BOOL)a1 referenceAsset:(id)a2 referencePersons:(id)a3;
- (id)fetchKeyAssetsInAssetCollection:(id)a0;
- (void)_storeExistingFetchResult:(id)a0 forAssetCollection:(id)a1 withFetchConfiguration:(id)a2;
- (id)fetchAssetsInAssetCollection:(id)a0 withFilterPredicate:(id)a1 inclusionPredicate:(id)a2 includeUnsavedSyndicatedAssets:(BOOL)a3 fetchLimit:(unsigned long long)a4 sortDescriptors:(id)a5 reverseSortOrder:(BOOL)a6 hideHiddenAssets:(BOOL)a7 fetchPropertySets:(id)a8;
- (id)_fetchConfigurationWithFilterPredicate:(id)a0 inclusionPredicate:(id)a1 includeUnsavedSyndicatedAssets:(BOOL)a2 fetchLimit:(unsigned long long)a3 sortDescriptors:(id)a4 reverseSortOrder:(BOOL)a5 hideHiddenAssets:(BOOL)a6 fetchPropertySets:(id)a7;
- (id)_fetchConfigurationForCurationWithReferencePersons:(id)a0 curationType:(long long)a1 options:(unsigned long long)a2;
- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0;
- (id)existingKeyAssetsFetchResultForAssetCollection:(id)a0 referenceAsset:(id)a1 referencePersons:(id)a2 curated:(BOOL)a3;
- (id)fetchCuratedAssetsInAssetCollection:(id)a0 referencePersons:(id)a1 curationType:(long long)a2 options:(unsigned long long)a3;
- (void)clearFetchResultsForAssetCollections:(id)a0;
- (void)photoLibraryDidChangeOnMainQueue:(id)a0;
- (id)fetchCuratedKeyAssetsInAssetCollection:(id)a0 referenceAsset:(id)a1 referencePersons:(id)a2;
- (id)existingCuratedAssetsFetchResultForAssetCollection:(id)a0 referencePersons:(id)a1 curationType:(long long)a2 options:(unsigned long long)a3;
- (void)dealloc;
- (id)_fetchConfigurationForKeyAssetWithReferenceAsset:(id)a0 referencePersons:(id)a1 curated:(BOOL)a2;
- (id)existingFetchResultForAssetCollection:(id)a0 withFilterPredicate:(id)a1 inclusionPredicate:(id)a2 includeUnsavedSyndicatedAssets:(BOOL)a3 fetchLimit:(unsigned long long)a4 sortDescriptors:(id)a5 reverseSortOrder:(BOOL)a6 hideHiddenAssets:(BOOL)a7 fetchPropertySets:(id)a8;

@end
