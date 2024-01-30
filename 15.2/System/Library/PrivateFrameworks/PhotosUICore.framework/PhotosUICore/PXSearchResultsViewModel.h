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

- (long long)numberOfSections;
- (long long)numberOfRowsInSection:(long long)a0;
- (unsigned long long)sectionTypeForSection:(long long)a0;
- (void).cxx_destruct;
- (id)titleForHeaderInSection:(long long)a0;
- (id)expandSection:(long long)a0;
- (id)collapseSection:(long long)a0;
- (long long)numberOfVisibleSearchResultsInSection:(long long)a0;
- (long long)numberOfSearchResultsInSection:(long long)a0;
- (id)searchResultAtIndexPath:(id)a0;
- (id)allSearchResultsForSection:(long long)a0;
- (id)initWithSectionedDataSourceManager:(id)a0 configurationType:(unsigned long long)a1;
- (id)initWithSearchSectionedDataSource:(id)a0 configurationType:(unsigned long long)a1;
- (void)fetchImageForPerson:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 completion:(id /* block */)a2;
- (unsigned long long)rowTypeForIndexPath:(id)a0;
- (long long)startingSectionNumberForType:(unsigned long long)a0;
- (void)searchResultDataForIndexPath:(id)a0 completion:(id /* block */)a1;
- (BOOL)hasDisplayableSuggestions;
- (BOOL)sectionIsExpandable:(long long)a0;
- (BOOL)sectionIsExpanded:(long long)a0;
- (id)topAssetAtIndexPath:(id)a0;
- (id)titleForHeaderButtonInSection:(long long)a0;
- (BOOL)shouldDisplayHeaderViewForSection:(long long)a0;
- (id)wordEmbeddingForIndexPath:(id)a0;
- (double)heightForRowType:(unsigned long long)a0 info:(id)a1;
- (double)calculatedRowHeightForTopAssets;
- (double)numberOfTopAssetRows;
- (BOOL)topAssetsExistForSection:(long long)a0;
- (id)suggestionItemForIndexPath:(id)a0;
- (id)_sugestionForIndexPath:(id)a0;
- (BOOL)hasNoResults;
- (BOOL)shouldShowTableFooterView;
- (BOOL)_resultsAreWordEmbeddingsOnly;
- (id)_selectedWordEmbeddingTextAtRow:(long long)a0;
- (BOOL)_sectionIsTopAssetsSection:(long long)a0;
- (BOOL)isValidSection:(long long)a0;
- (unsigned long long)_displayableSuggestionCount;
- (id)_adjustedIndexPathForIndexPath:(id)a0;
- (long long)_adjustedSectionForSection:(long long)a0;

@end
