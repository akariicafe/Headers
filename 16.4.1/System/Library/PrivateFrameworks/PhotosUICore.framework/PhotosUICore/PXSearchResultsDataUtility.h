@interface PXSearchResultsDataUtility : NSObject

+ (id)_bestParentWordEmbeddingsWithWordEmbeddings:(id)a0 sceneAncestoryInformation:(id)a1;
+ (id)_localizedTitleForAssetCollection:(id)a0 titleCategory:(long long *)a1 dateRangeFormatter:(id)a2;
+ (id)fetchResultFromTopAssetsSearchResult:(id)a0;
+ (id)imageForSearchUserCategory:(unsigned long long)a0 useSearchFieldStyle:(BOOL)a1;
+ (id)photosDetailsContextForPhotosUUIDs:(id)a0 title:(id)a1;
+ (id)photosDetailsContextFromCollectionUUID:(id)a0 collectionClass:(Class)a1 dateRangeFormatter:(id)a2;
+ (id)photosDetailsContextFromMemoryUUID:(id)a0;
+ (id)recentSearchFromActiveSearch:(id)a0;
+ (id)searchTokenFromQueryToken:(id)a0;
+ (id)searchTokenFromWordEmbedding:(id)a0;
+ (id)searchTokenRepresentedObjectFromSearchText:(id)a0;
+ (id)searchTokenRepresentedObjectsFromSearchTokens:(id)a0;
+ (id)searchTokensFromSiriSearchRequest:(id)a0;
+ (BOOL)sectionIsHighlightsSection:(id)a0;
+ (id)sectionTitleFromSearchResultSection:(id)a0 shouldCombineAssetsSections:(BOOL)a1;
+ (id)sortedWordEmbeddingsForCurrentQueryFromSubstitutions:(id)a0;
+ (id)stringWithStartDate:(id)a0 endDate:(id)a1 calendar:(id)a2 dateComponents:(id)a3 dateIntervalFormatter:(id)a4;
+ (id)subtitleForSearchResult:(id)a0;
+ (void)suggestionsDisplayDataFromToken:(id)a0 searchText:(id)a1 matchedColor:(id)a2 remainingColor:(id)a3 isTextCompletion:(BOOL)a4 completion:(id /* block */)a5;
+ (id)titleForSearchResult:(id)a0;
+ (id)wordEmbeddingSubstitutionsForSearchText:(id)a0 wantsSubstitutedString:(BOOL)a1 sceneAncestoryInformation:(id)a2 substitutions:(id)a3;

@end
