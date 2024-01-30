@class NSObject, NSString, PXPhotoKitAssetsDataSource, NSPredicate, NSNumber, PXPhotosDataSource;
@protocol OS_dispatch_queue, PXPhotosDataSourceProvider;

@interface PXPhotoKitAssetsDataSourceManager : PXAssetsDataSourceManager <PXPhotosDataSourceChangeObserver, PXMutableAssetsDataSourceManager> {
    PXPhotosDataSource *_photosDataSource;
    NSNumber *_backgroundFetchOriginSection;
    BOOL _isLoadingInitialPhotosDataSource;
    NSObject<OS_dispatch_queue> *_initialDataSourceLoadingQueue;
    NSString *_localizedLoadingInitialDataSourceMessage;
}

@property (retain, nonatomic) id<PXPhotosDataSourceProvider> photosDataSourceProvider;
@property (retain, nonatomic) PXPhotosDataSource *photosDataSource;
@property (readonly, nonatomic) PXPhotoKitAssetsDataSource *dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long backgroundFetchOriginSection;
@property (retain, nonatomic) NSPredicate *filterPredicate;

+ (id)dataSourceManagerForAssetCollection:(id)a0;
+ (id)dataSourceManagerForConfiguration:(id)a0;
+ (id)dataSourceManagerWithAsset:(id)a0 options:(unsigned long long)a1;
+ (id)dataSourceManagerWithAsset:(id)a0;
+ (id)dataSourceManagerForAssetCollection:(id)a0 existingAssetsFetchResult:(id)a1 existingKeyAssetsFetchResult:(id)a2 fetchPropertySets:(id)a3 basePredicate:(id)a4 options:(unsigned long long)a5;

- (void)forceIncludeAssetsAtIndexPaths:(id)a0;
- (BOOL)forceAccurateSectionsIfNeeded:(id)a0;
- (BOOL)isBackgroundFetching;
- (void)setFilterPredicate:(id)a0 provideIncrementalChangeDetailsForAssetCollections:(id)a1;
- (void)stopExcludingAssets:(id)a0;
- (BOOL)forceAccurateSection:(long long)a0 andSectionsBeforeAndAfter:(long long)a1;
- (id)photosDataSourceInterestingAssetReferences:(id)a0;
- (void)updateWithPhotosDataSource:(id)a0 andDataSourceChange:(id)a1;
- (id)initWithPhotosDataSourceProvider:(id)a0;
- (void)stopForceIncludingAllAssets;
- (void)resumeChangeDeliveryAndBackgroundLoading:(id)a0;
- (id)initWithPhotosDataSource:(id)a0;
- (void)startBackgroundFetchIfNeeded;
- (id)init;
- (id)createInitialDataSource;
- (void).cxx_destruct;
- (id)_createAssetsDataSourceWithPhotosDataSource:(id)a0 withChange:(id)a1;
- (id)localizedEmptyPlaceholderTitle;
- (void)dealloc;
- (void)_ensurePhotosDataSource;
- (id)localizedLoadingInitialDataSourceMessage;
- (void)photosDataSourceDidFinishBackgroundFetching:(id)a0;
- (void)setPhotosDataSource:(id)a0 publishIntermediateEmptySnapshot:(BOOL)a1;
- (BOOL)supportsFiltering;
- (void)setCurationEnabled:(BOOL)a0 forAssetCollection:(id)a1;
- (id)localizedEmptyPlaceholderMessage;
- (id)pauseChangeDeliveryWithTimeout:(double)a0;
- (void)photosDataSource:(id)a0 didChange:(id)a1;
- (void)refreshResultsForAssetCollection:(id)a0;
- (void)excludeAssetsAtIndexPaths:(id)a0;
- (BOOL)isLoadingInitialDataSource;
- (void)setFilteringDisabled:(BOOL)a0 forAssetCollection:(id)a1;

@end
