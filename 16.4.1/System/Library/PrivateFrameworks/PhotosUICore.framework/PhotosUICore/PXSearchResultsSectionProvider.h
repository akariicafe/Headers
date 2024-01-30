@class PHCachingImageManager, NSArray, NSDictionary, NSString, PHPhotoLibrary;
@protocol ParsecReportingDelegate, PXSearchDataSourceSectionProviderChangeObserver;

@interface PXSearchResultsSectionProvider : NSObject <PXSearchDataSourceSectionProvider>

@property (copy, nonatomic) NSDictionary *sectionIdentifierToSectionMap;
@property (copy, nonatomic) NSArray *sectionIdentifiers;
@property (copy, nonatomic) NSString *localizedQueryString;
@property (copy, nonatomic) NSArray *matchedQueryStrings;
@property (copy, nonatomic) NSArray *matchedOCRAssetUUIDs;
@property (retain, nonatomic) PHCachingImageManager *cachingImageManager;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (copy, nonatomic) id /* block */ assetsSeeAllButtonHandler;
@property (copy, nonatomic) id /* block */ collectionsSeeAllButtonHandler;
@property (weak, nonatomic) id<ParsecReportingDelegate> parsecReportingDelegate;
@property (readonly, nonatomic) unsigned long long type;
@property (weak, nonatomic) id<PXSearchDataSourceSectionProviderChangeObserver> changeObserver;
@property (readonly, nonatomic) long long identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_assetGridLayoutGroupWithEnvironment:(id)a0;
+ (id)_headerViewSupplementaryItem;
+ (id)assetGridLayoutSectionWithEnvironment:(id)a0;
+ (id)rowStyleLayoutSectionWithEnvironment:(id)a0;

- (id)initWithPhotoLibrary:(id)a0;
- (id)itemIdentifiersInSectionWithIdentifier:(id)a0;
- (id)sections;
- (void).cxx_destruct;
- (id)_allAssetResultUUIDsForSection:(id)a0;
- (void)_configureCellThumbnailImageWithAssetUUID:(id)a0 orAsset:(id)a1 forCell:(id)a2;
- (void)_configureCellThumbnailImageWithPersonUUID:(id)a0 forCell:(id)a1;
- (void)_configureTitledCell:(id)a0 forSearchResult:(id)a1;
- (BOOL)_isTopAssetsSection:(long long)a0;
- (id)_searchResultsSectionForItemIdentifier:(id)a0;
- (id)_sectionIdentifierToSectionMapWithResults:(id)a0 allAssetResults:(id)a1 assetsFetchResult:(id)a2;
- (long long)_sectionTypeForAssetAggregationType:(unsigned long long)a0;
- (long long)_sectionTypeForCollectionType:(unsigned long long)a0;
- (long long)_sectionTypeForSearchResult:(id)a0;
- (id)_seeAllButtonTitleForSection:(id)a0;
- (void)_setSearchResults:(id)a0 searchAssetResults:(id)a1 curatedAssetsFetchResult:(id)a2 reloadItemIdentifiers:(id)a3 localizedQueryString:(id)a4 matchedQueryStrings:(id)a5 matchedOCRAssetUUIDs:(id)a6;
- (id)_sortedSectionIdentifiersForSections:(id)a0;
- (id)assetForSearchResult:(id)a0;
- (id)assetSearchResultForAsset:(id)a0 inSection:(long long)a1;
- (id)assetsFetchResultForSection:(id)a0;
- (id)cellReuseIdentifierForItemIdentifier:(id)a0;
- (void)configureCell:(id)a0 forItemIdentifier:(id)a1;
- (void)configureSupplementaryView:(id)a0 kind:(id)a1 indexPath:(id)a2;
- (BOOL)isSectionExpanded:(id)a0;
- (id)layoutForSectionIdentifier:(id)a0 environment:(id)a1 collectionViewLayoutMargins:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (void)prefetchItemsForItemIdentifiers:(id)a0;
- (void)registerClassesForCellReuseIdentifiers:(id /* block */)a0;
- (void)registerClassesForSupplementaryViewReuseIdentifiers:(id /* block */)a0;
- (void)requestImageForAssetUUID:(id)a0 orAsset:(id)a1 withPhotoLibrary:(id)a2 cachingImageManager:(id)a3 imageRequestSize:(struct CGSize { double x0; double x1; })a4 resultHandler:(id /* block */)a5;
- (void)requestImageForPersonUUID:(id)a0 photoLibrary:(id)a1 imageRequestSize:(struct CGSize { double x0; double x1; })a2 displayScale:(double)a3 resultHandler:(id /* block */)a4;
- (id)searchResultForIdentifier:(id)a0;
- (unsigned long long)searchResultTypeForSection:(id)a0;
- (void)setExpanded:(BOOL)a0 forSection:(id)a1 sectionHeaderView:(id)a2;
- (void)setSearchQueryResult:(id)a0;
- (id)supplementaryViewReuseIdentifierForKind:(id)a0 indexPath:(id)a1;

@end
