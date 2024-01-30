@class PGCurationCache, PHPhotoLibrary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_os_log;

@interface PGCurationManager : NSObject

@property (readonly, nonatomic) NSMutableArray *prefetchCuratedKeyAssetsBlocks;
@property (readonly, nonatomic) NSMutableArray *prefetchCuratedAssetsBlocks;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *curationPrefetchQueue;
@property (readonly, nonatomic) NSObject<OS_os_log> *curationLoggingConnection;
@property (readonly, nonatomic) PGCurationCache *cache;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;

+ (id)defaultAssetSortDescriptors;
+ (id)_filteredAssetsWithFaceFilter:(unsigned long long)a0 forAssets:(id)a1;
+ (id)assetsBeautifierForPrecision:(unsigned long long)a0;
+ (id)summaryClusteringForDuration:(unsigned long long)a0 andPrecision:(unsigned long long)a1;
+ (double)contentScoreForAssets:(id)a0;
+ (unsigned long long)maximumNumberOfItemsForDuration:(unsigned long long)a0 withTotalNumberOfItems:(unsigned long long)a1;
+ (BOOL)areAssetsInteresting:(id)a0 minimumNumberOfCuratedAssets:(unsigned long long)a1 duration:(unsigned long long)a2 precision:(unsigned long long)a3;
+ (unsigned long long)minimumNumberOfItemsForDuration:(unsigned long long)a0 withMaximumNumberOfItems:(unsigned long long)a1;
+ (id)assetPropertySetsForCuration;
+ (id)dejunkAndDedupeAssetsInAssetCollection:(id)a0 options:(id)a1 progressBlock:(id /* block */)a2;
+ (id)dejunkAndDedupeItems:(id)a0 options:(id)a1 debugInfo:(id)a2 progressBlock:(id /* block */)a3;
+ (id)sceneInfoWithAsset:(id)a0;
+ (id)representativeAssetsForAssetCollection:(id)a0 progressBlock:(id /* block */)a1;
+ (id)dedupedAssetsWithAssets:(id)a0 precision:(unsigned long long)a1;
+ (unsigned long long)maximumNumberOfItemsForDuration:(unsigned long long)a0 withTotalNumberOfItems:(unsigned long long)a1 spanningNumberOfDays:(double)a2;
+ (id)_filteredAssetCollectionFromAssetCollection:(id)a0 withContextualAssets:(id)a1 approximateTimeDistance:(double)a2;
+ (id)_filteredAssetsFromAssetCollection:(id)a0 withContextualAssets:(id)a1 approximateTimeDistance:(double)a2;

- (id)initWithPhotoLibrary:(id)a0;
- (void).cxx_destruct;
- (id)_curatedKeyAssetIdentifierForCollectionWithIdentifier:(id)a0 curatedAssetCollection:(id)a1 options:(id)a2 criteria:(id)a3 curatedKeyAsset:(id *)a4;
- (id)curatedKeyAssetIdentifierForCollectionWithIdentifier:(id)a0 curatedAssetCollection:(id)a1 options:(id)a2 criteria:(id)a3;
- (id)curatedKeyAssetForCollectionWithIdentifier:(id)a0 curatedAssetCollection:(id)a1 options:(id)a2 criteria:(id)a3;
- (id)curatedKeyAssetForAssetCollection:(id)a0 curatedAssetCollection:(id)a1 options:(id)a2 criteria:(id)a3;
- (id)bestAssetsForAssetFeeder:(id)a0 options:(id)a1 progressBlock:(id /* block */)a2;
- (id)curatedAssetsForAssetCollection:(id)a0 options:(id)a1 progressBlock:(id /* block */)a2;
- (double)contentScoreForAssetCollection:(id)a0 precision:(unsigned long long)a1;
- (BOOL)isAssetCollectionInteresting:(id)a0 precision:(unsigned long long)a1;
- (id)curatedAssetsForAssetCollection:(id)a0 duration:(unsigned long long)a1 precision:(unsigned long long)a2 referencePeople:(id)a3 progressBlock:(id /* block */)a4;
- (unsigned long long)optimalDurationForAssetCollection:(id)a0 duration:(unsigned long long)a1 precision:(unsigned long long)a2 options:(id)a3;
- (void)invalidateCurationCacheForMomentIdentifiers:(id)a0;
- (void)invalidateCurationCacheForCollectionWithIdentifier:(id)a0;
- (void)cancelAllCurationPrefetches;
- (void)prefetchCuratedKeyAssetsForMoments:(id)a0 options:(id)a1;
- (void)prefetchCuratedAssetsForMoments:(id)a0 options:(id)a1;
- (void)prefetchAreMomentsInteresting:(id)a0 precision:(unsigned long long)a1;
- (BOOL)isAssetFeederInteresting:(id)a0 withAlternateJunking:(BOOL)a1 precision:(unsigned long long)a2;
- (double)contentScoreForAssetFeeder:(id)a0 precision:(unsigned long long)a1;
- (id)bestAssetInAssets:(id)a0 options:(id)a1;
- (id)_bestAssetInAssets:(id)a0 forReferencePeople:(id)a1;
- (id)_bestAssetInAssets:(id)a0 forReferencePeople:(id)a1 minimumNumberOfCommonPeople:(unsigned long long)a2 avoidVideoIfPossible:(BOOL)a3;
- (id)_bestAssetsInAssets:(id)a0 forReferencePersons:(id)a1 minimumRatioOfReferencePersonsPerAsset:(double)a2 progressBlock:(id /* block */)a3;
- (id)_bestAssetInSummarizedAssets:(id)a0 forReferencePeople:(id)a1;
- (id)bestAssetForAssetFeeder:(id)a0 options:(id)a1;
- (id)bestAssetForAssetFeeder:(id)a0 options:(id)a1 criteria:(id)a2;
- (id)_contextualBestAssetInAssets:(id)a0;
- (id)_extendedAssetsForCurationForAssets:(id)a0 matchingAssetsRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)fetchAssetsSortedByDateWithLocalIdentifiers:(id)a0;
- (id)fetchAssetWithLocalIdentifier:(id)a0;
- (id)_timeBasedAssetClustersForAssets:(id)a0 maximumClusterCount:(unsigned long long)a1;
- (id)_firstBestFacedAssetInAssetCluster:(id)a0 facesByAssetIdentifiers:(id)a1;
- (id)_libraryDateInterval;
- (id)curatedAssetsForPersonLocalIdentifier:(id)a0 progressBlock:(id /* block */)a1;
- (id)_filteredAssetsForAssets:(id)a0 inMoments:(id)a1 keepFavorites:(BOOL)a2;

@end
