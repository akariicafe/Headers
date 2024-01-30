@class NSObject, NSString, PXPhotoKitAssetsDataSource, NSPredicate, PHPhotoLibrary, NSNumber, PXPhotosDataSource;
@protocol OS_dispatch_queue, PXPhotosDataSourceProvider;

@interface PXPhotoKitAssetsDataSourceManager : PXAssetsDataSourceManager <PXPhotosDataSourceChangeObserver, PXMutableAssetsDataSourceManager, PXChangeObserver> {
    PXPhotosDataSource *_photosDataSource;
    NSNumber *_backgroundFetchOriginSection;
    NSObject<OS_dispatch_queue> *_initialDataSourceLoadingQueue;
    NSString *_localizedLoadingInitialDataSourceMessage;
    NSPredicate *_filterPredicate;
}

@property (retain, nonatomic) id<PXPhotosDataSourceProvider> photosDataSourceProvider;
@property (nonatomic, setter=_setLoadingInitialPhotosDataSource:) BOOL _isLoadingInitialPhotosDataSource;
@property (retain, nonatomic) PXPhotosDataSource *photosDataSource;
@property (readonly, nonatomic) PXPhotosDataSource *photosDataSourceIfExists;
@property (readonly, nonatomic) PXPhotoKitAssetsDataSource *dataSource;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (nonatomic) long long libraryFilter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long backgroundFetchOriginSection;
@property (retain, nonatomic) NSPredicate *filterPredicate;

+ (id)dataSourceManagerForAssetCollection:(id)a0 existingAssetsFetchResult:(id)a1 existingKeyAssetsFetchResult:(id)a2 fetchPropertySets:(id)a3 basePredicate:(id)a4 options:(unsigned long long)a5 ignoreSharedLibraryFilters:(BOOL)a6 reverseSortOrder:(BOOL)a7;
+ (id)dataSourceManagerWithAsset:(id)a0 options:(unsigned long long)a1;
+ (id)dataSourceManagerWithAssets:(id)a0;
+ (BOOL)_includeUnsavedSyndicatedAssetsForAssetCollection:(id)a0;
+ (id)dataSourceManagerWithAsset:(id)a0;
+ (id)dataSourceManagerForAssetCollection:(id)a0 existingAssetsFetchResult:(id)a1 existingKeyAssetsFetchResult:(id)a2 fetchPropertySets:(id)a3 basePredicate:(id)a4 options:(unsigned long long)a5 ignoreSharedLibraryFilters:(BOOL)a6;
+ (id)dataSourceManagerWithAssets:(id)a0 containerTitle:(id)a1 options:(unsigned long long)a2;
+ (id)dataSourceManagerForAssetCollection:(id)a0;

- (void)stopExcludingAssets:(id)a0;
- (void)resumeChangeDeliveryAndBackgroundLoading:(id)a0;
- (BOOL)forceAccurateSectionsIfNeeded:(id)a0;
- (BOOL)forceAccurateSection:(long long)a0 andSectionsBeforeAndAfter:(long long)a1;
- (void)photosDataSource:(id)a0 didChange:(id)a1;
- (id)createInitialDataSource;
- (void)stopForceIncludingAllAssets;
- (void)setFilterPredicate:(id)a0 provideIncrementalChangeDetailsForAssetCollections:(id)a1;
- (void)startBackgroundFetchIfNeeded;
- (BOOL)isBackgroundFetching;
- (void)updateWithPhotosDataSource:(id)a0 andDataSourceChange:(id)a1;
- (void)photosDataSourceDidFinishBackgroundFetching:(id)a0;
- (id)initWithPhotosDataSourceProvider:(id)a0;
- (void)setCurationEnabled:(BOOL)a0 forAssetCollection:(id)a1;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)refreshResultsForAssetCollection:(id)a0;
- (void)forceIncludeAssetsAtIndexPaths:(id)a0;
- (void)_didFinishLoadingInitialPhotosDataSource;
- (void)dealloc;
- (id)pauseChangeDeliveryWithTimeout:(double)a0 identifier:(id)a1;
- (void)excludeAssetsAtIndexPaths:(id)a0;
- (BOOL)isLoadingInitialDataSource;
- (id)createDataSourceManagerForAssetsInSectionOfAsset:(id)a0;
- (id)localizedEmptyPlaceholderAttributedMessage;
- (id)_createAssetsDataSourceWithPhotosDataSource:(id)a0 withChange:(id)a1;
- (void)_ensurePhotosDataSource;
- (id)init;
- (id)photosDataSourceInterestingAssetReferences:(id)a0;
- (void)setFilteringDisabled:(BOOL)a0 forAssetCollection:(id)a1;
- (id)px_sharedLibrarySharingSuggestionsCountsManager;
- (id)initWithPhotosDataSource:(id)a0;
- (BOOL)supportsFiltering;
- (id)localizedEmptyPlaceholderTitle;
- (void).cxx_destruct;
- (id)localizedLoadingInitialDataSourceMessage;
- (void)setPhotosDataSource:(id)a0 publishIntermediateEmptySnapshot:(BOOL)a1;

@end
