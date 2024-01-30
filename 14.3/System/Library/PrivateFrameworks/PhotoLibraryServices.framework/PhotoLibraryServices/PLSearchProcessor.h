@class PSIDatabase;

@interface PLSearchProcessor : NSObject

@property (readonly, nonatomic) PSIDatabase *searchIndex;

+ (id)searchProcessorLog;
+ (id)_scoreByCategoryMask;

- (void).cxx_destruct;
- (id)initWithDatabase:(id)a0;
- (id)_alphabeticalSortDescriptors;
- (id)searchResultSectionsForQuery:(id)a0 withAssetResults:(id)a1 collectionResults:(id)a2 combineAssetSections:(BOOL)a3;
- (id)updatedSearchSections:(id)a0 withTopCollectionResults:(id)a1;
- (id)_dateSortDescriptors;
- (id)_numberOfAssetsSortDescriptors;
- (id)completionSuggestionsForQuery:(id)a0 withSearchSections:(id)a1 numberOfSuggestions:(unsigned long long)a2;
- (id)_sortDescriptorsForCategoryMask:(unsigned long long)a0;
- (id)_searchResultsByCategoryMasksForSearchResults:(id)a0;
- (id)_completionFilenameResultsForFilenameResults:(id)a0;
- (id)_combinedFilenameSearchResultsFromSearchResults:(id)a0 inQuery:(id)a1;
- (void)_extractSearchResultsFromGroupResults:(id)a0 withQuery:(id)a1 resultsHandler:(id /* block */)a2;
- (BOOL)_categoryMaskIsCombinable:(unsigned long long)a0;
- (BOOL)_shouldOmitSectionForCategoryMask:(unsigned long long)a0;
- (void)performQuery:(id)a0 withResultsHandler:(id /* block */)a1;

@end
