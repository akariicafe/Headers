@class PXSearchIndexManager, PXSearchQueryResultsProcessor, PLSearchProcessor, PXSearchQuery, PSIQuery, NSObject, NSDictionary;
@protocol OS_dispatch_queue;

@interface PXSearchQueryExecutor : NSObject

@property (readonly, copy, nonatomic) id /* block */ resultsHandler;
@property (retain, nonatomic) PXSearchQueryResultsProcessor *searchResultsProcessor;
@property (readonly, nonatomic) PLSearchProcessor *plSearchProcessor;
@property (readonly, nonatomic) PXSearchIndexManager *searchIndexManager;
@property (copy, nonatomic) PXSearchQuery *currentSearchQuery;
@property (retain, nonatomic) PSIQuery *currentPSIQuery;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queryQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (copy, nonatomic) NSDictionary *sceneAncestryInformation;
@property (readonly, nonatomic) BOOL requestSceneAncestryInformation;

+ (id)_assetSearchResultsForSpotlightSearchableItems:(id)a0;
+ (id)_collectionSearchResultForSpotlightSearchableItem:(id)a0;
+ (id)_collectionSearchResultsForSpotlightSearchableItems:(id)a0;
+ (BOOL)_isCollectionSpotlightSearchableItem:(id)a0;
+ (void)_searchResultsForSpotlightSearchableItems:(id)a0 outAssetSearchResults:(out id *)a1 outCollectionSearchResults:(out id *)a2;
+ (BOOL)_sectionIsHighlightsSection:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)_executePhotosIndexSearchQuery:(id)a0;
- (id)_backendQueryFromSearchQuery:(id)a0;
- (void)_executeSpotlightSearchQuery:(id)a0;
- (id)_limitedSearchSuggestions:(id)a0 limit:(unsigned long long)a1;
- (void)_processedQueryResultsForSearchQuery:(id)a0 psiQuery:(id)a1 assetResults:(id)a2 assetResultsForCompletions:(id)a3 collectionResults:(id)a4 topAssetsResult:(id)a5 topCollectionResults:(id)a6;
- (void)_requestSceneAncestryInformation;
- (id)_searchSuggestionsFromPSIQuery:(id)a0 searchSections:(id)a1 suggestionLimit:(unsigned long long)a2;
- (void)_setupSearchResultsProcessor;
- (void)executeSearchQuery:(id)a0;
- (id)initWithSearchIndexManager:(id)a0 requestSceneAncestryInformation:(BOOL)a1 resultsHandler:(id /* block */)a2;

@end
