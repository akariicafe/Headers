@class NSArray, PXSearchResultsSectionedDataSourceManager, PXSearchTopAssetsResult;
@protocol PXSearchResultsLayoutDataSource;

@interface PXSearchResultsViewModel : NSObject

@property (nonatomic) unsigned long long configurationType;
@property (retain, nonatomic) PXSearchResultsSectionedDataSourceManager *dataSourceManager;
@property (readonly, nonatomic) NSArray *attachmentURLs;
@property (readonly, nonatomic) NSArray *wordEmbeddingSubstitutions;
@property (readonly, nonatomic) NSArray *suggestions;
@property (weak, nonatomic) id<PXSearchResultsLayoutDataSource> delegate;
@property (readonly, nonatomic) PXSearchTopAssetsResult *topAssetsSearchResult;
@property (readonly, nonatomic) NSArray *matchedOCRAssetUUIDs;
@property (readonly, nonatomic) NSArray *matchedQueryStrings;

- (long long)numberOfSections;
- (id)titleForHeaderInSection:(long long)a0;
- (long long)numberOfRowsInSection:(long long)a0;
- (void).cxx_destruct;
- (double)calculatedRowHeightForTopAssets;
- (long long)numberOfSearchResultsInSection:(long long)a0;
- (id)_adjustedIndexPathForIndexPath:(id)a0;
- (BOOL)isValidSection:(long long)a0;
- (long long)_adjustedSectionForSection:(long long)a0;
- (unsigned long long)_displayableSuggestionCount;
- (BOOL)_resultsAreWordEmbeddingsOnly;
- (BOOL)_sectionIsTopAssetsSection:(long long)a0;
- (id)_selectedWordEmbeddingTextAtRow:(long long)a0;
- (id)_sugestionForIndexPath:(id)a0;
- (id)allSearchResultsForSection:(long long)a0;
- (id)collapseSection:(long long)a0;
- (id)expandSection:(long long)a0;
- (void)fetchImageForPerson:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 completion:(id /* block */)a2;
- (BOOL)hasDisplayableSuggestions;
- (BOOL)hasNoResults;
- (double)heightForRowType:(unsigned long long)a0 info:(id)a1;
- (id)initWithSearchSectionedDataSource:(id)a0 configurationType:(unsigned long long)a1;
- (id)initWithSectionedDataSourceManager:(id)a0 configurationType:(unsigned long long)a1;
- (double)numberOfTopAssetRows;
- (long long)numberOfVisibleSearchResultsInSection:(long long)a0;
- (unsigned long long)rowTypeForIndexPath:(id)a0;
- (id)searchResultAtIndexPath:(id)a0;
- (void)searchResultDataForIndexPath:(id)a0 completion:(id /* block */)a1;
- (BOOL)sectionIsExpandable:(long long)a0;
- (BOOL)sectionIsExpanded:(long long)a0;
- (unsigned long long)sectionTypeForSection:(long long)a0;
- (BOOL)shouldDisplayHeaderViewForSection:(long long)a0;
- (BOOL)shouldShowTableFooterView;
- (long long)startingSectionNumberForType:(unsigned long long)a0;
- (id)suggestionItemForIndexPath:(id)a0;
- (id)thumbnailAssetsForResultIndexPaths:(id)a0;
- (id)titleForHeaderButtonInSection:(long long)a0;
- (id)topAssetAtIndexPath:(id)a0;
- (BOOL)topAssetsExistForSection:(long long)a0;
- (id)wordEmbeddingForIndexPath:(id)a0;

@end
