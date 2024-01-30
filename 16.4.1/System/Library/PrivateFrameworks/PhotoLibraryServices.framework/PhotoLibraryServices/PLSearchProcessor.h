@class PSIDatabase;

@interface PLSearchProcessor : NSObject

@property (readonly, nonatomic) PSIDatabase *searchIndex;

+ (id)_OCRProcessedGroupResultsFromGroupResults:(id)a0 query:(id)a1;
+ (id)_groupResultFromCombinedGroupResults:(id)a0 query:(id)a1;
+ (id)_singleOCRGroupResultFromOCRGroupResults:(id)a0 query:(id)a1;
+ (id)searchProcessorLog;

- (id)initWithDatabase:(id)a0;
- (void).cxx_destruct;
- (void)_extractSearchResultsFromGroupResults:(id)a0 withQuery:(id)a1 resultsHandler:(id /* block */)a2;
- (id)_alphabeticalSortDescriptors;
- (BOOL)_categoryMaskIsCombinable:(unsigned long long)a0;
- (id)_combinedFilenameSearchResultsFromSearchResults:(id)a0 inQuery:(id)a1;
- (id)_completionFilenameResultsForFilenameResults:(id)a0;
- (id)_dateSortDescriptors;
- (id)_numberOfAssetsSortDescriptors;
- (double)_scoreForSearchIndexCategory:(unsigned long long)a0;
- (id)_searchResultsByCategoryMasksForSearchResults:(id)a0;
- (BOOL)_shouldOmitSectionForCategoryMask:(unsigned long long)a0;
- (id)_sortDescriptorsForCategoryMask:(unsigned long long)a0;
- (id)completionSuggestionsForQuery:(id)a0 withSearchSections:(id)a1 numberOfSuggestions:(unsigned long long)a2;
- (void)performQuery:(id)a0 withResultsHandler:(id /* block */)a1;
- (id)searchResultSectionsForQuery:(id)a0 withAssetResults:(id)a1 assetResultsForCompletions:(id)a2 collectionResults:(id)a3 combineAssetSections:(BOOL)a4;
- (id)updatedSearchSections:(id)a0 withTopCollectionResults:(id)a1;

@end
