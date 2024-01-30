@class NSString, NSPredicate, PXAssetsDataSource;

@interface PXAssetsDataSourceManager : PXSectionedDataSourceManager <PXMutableAssetsDataSourceManager>

@property (readonly, nonatomic) PXAssetsDataSource *dataSource;
@property (readonly, copy, nonatomic) NSString *localizedEmptyPlaceholderTitle;
@property (readonly, copy, nonatomic) NSString *localizedEmptyPlaceholderMessage;
@property (readonly, copy, nonatomic) NSString *localizedLoadingInitialDataSourceMessage;
@property (readonly, nonatomic) BOOL isLoadingInitialDataSource;
@property (readonly, nonatomic) BOOL isBackgroundFetching;
@property (readonly, nonatomic) BOOL supportsFiltering;
@property (readonly, nonatomic) NSPredicate *filterPredicate;
@property (nonatomic) long long backgroundFetchOriginSection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)forceIncludeAssetsAtIndexPaths:(id)a0;
- (BOOL)forceAccurateSectionsIfNeeded:(id)a0;
- (BOOL)forceAccurateAllSectionsIfNeeded;
- (void)setFilterPredicate:(id)a0 provideIncrementalChangeDetailsForAssetCollections:(id)a1;
- (void)stopExcludingAssets:(id)a0;
- (BOOL)forceAccurateSection:(long long)a0 andSectionsBeforeAndAfter:(long long)a1;
- (void)stopForceIncludingAllAssets;
- (void)resumeChangeDeliveryAndBackgroundLoading:(id)a0;
- (void)startBackgroundFetchIfNeeded;
- (void).cxx_destruct;
- (void)ensureLastSectionHasContent;
- (void)ensureStartingSectionHasContent;
- (void)setCurationEnabled:(BOOL)a0 forAssetCollection:(id)a1;
- (id)mutableChangeObject;
- (id)pauseChangeDeliveryWithTimeout:(double)a0;
- (void)refreshResultsForAssetCollection:(id)a0;
- (void)registerChangeObserver:(id)a0 context:(void *)a1;
- (void)excludeAssetsAtIndexPaths:(id)a0;
- (void)waitForAvailabilityOfAsset:(id)a0 completionHandler:(id /* block */)a1;
- (void)unregisterChangeObserver:(id)a0 context:(void *)a1;
- (void)setFilteringDisabled:(BOOL)a0 forAssetCollection:(id)a1;

@end
