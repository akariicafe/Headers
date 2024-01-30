@class NSString, PXSharedLibrarySharingSuggestionsCountsManager, NSPredicate, PXAssetsDataSource, NSAttributedString;

@interface PXAssetsDataSourceManager : PXSectionedDataSourceManager <PXMutableAssetsDataSourceManager>

@property (readonly, nonatomic) PXSharedLibrarySharingSuggestionsCountsManager *px_sharedLibrarySharingSuggestionsCountsManager;
@property (readonly, nonatomic) PXAssetsDataSource *dataSource;
@property (readonly, copy, nonatomic) NSString *localizedEmptyPlaceholderTitle;
@property (readonly, copy, nonatomic) NSAttributedString *localizedEmptyPlaceholderAttributedMessage;
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

- (void)stopExcludingAssets:(id)a0;
- (BOOL)forceAccurateSectionsIfNeeded:(id)a0;
- (BOOL)forceAccurateSection:(long long)a0 andSectionsBeforeAndAfter:(long long)a1;
- (void)stopForceIncludingAllAssets;
- (void)setFilterPredicate:(id)a0 provideIncrementalChangeDetailsForAssetCollections:(id)a1;
- (void)startBackgroundFetchIfNeeded;
- (void)setFilterPredicate:(id)a0;
- (void)setCurationEnabled:(BOOL)a0 forAssetCollection:(id)a1;
- (void)refreshResultsForAssetCollection:(id)a0;
- (void)forceIncludeAssetsAtIndexPaths:(id)a0;
- (void)excludeAssetsAtIndexPaths:(id)a0;
- (id)createDataSourceManagerForAssetsInSectionOfAsset:(id)a0;
- (id)mutableChangeObject;
- (void)setFilteringDisabled:(BOOL)a0 forAssetCollection:(id)a1;
- (void).cxx_destruct;
- (BOOL)forceAccurateAllSectionsIfNeeded;
- (void)registerChangeObserver:(id)a0 context:(void *)a1;
- (void)unregisterChangeObserver:(id)a0 context:(void *)a1;
- (void)ensureStartingSectionHasContent;
- (void)ensureLastSectionHasContent;
- (void)waitForAvailabilityOfAsset:(id)a0 completionHandler:(id /* block */)a1;

@end
