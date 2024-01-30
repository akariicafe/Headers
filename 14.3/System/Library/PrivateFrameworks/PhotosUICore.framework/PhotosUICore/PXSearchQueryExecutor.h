@class PXSearchIndexManager, PXSearchQueryResultsProcessor, PLSearchProcessor, PXSearchQuery, NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface PXSearchQueryExecutor : NSObject

@property (readonly, copy, nonatomic) id /* block */ resultsHandler;
@property (retain, nonatomic) PXSearchQueryResultsProcessor *searchResultsProcessor;
@property (readonly, nonatomic) PLSearchProcessor *plSearchProcessor;
@property (readonly, nonatomic) PXSearchIndexManager *searchIndexManager;
@property (copy, nonatomic) PXSearchQuery *currentSearchQuery;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queryQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (copy, nonatomic) NSDictionary *sceneAncestryInformation;
@property (readonly, nonatomic) BOOL requestSceneAncestryInformation;

+ (BOOL)_sectionIsHighlightsSection:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)_requestSceneAncestryInformationForPhotoLibrary:(id)a0;
- (void)_setupSearchResultsProcessor;
- (void)executeSearchQuery:(id)a0;
- (void)_processedQueryResultsForSearchQuery:(id)a0 psiQuery:(id)a1 assetResults:(id)a2 collectionResults:(id)a3 topAssetsResult:(id)a4 topCollectionResults:(id)a5;
- (id)_backendQueryFromSearchQuery:(id)a0;
- (id)_limitedSearchSuggestions:(id)a0 limit:(unsigned long long)a1;
- (id)_searchSuggestionsFromPSIQuery:(id)a0 searchSections:(id)a1 suggestionLimit:(unsigned long long)a2;
- (id)initWithSearchIndexManager:(id)a0 requestSceneAncestryInformation:(BOOL)a1 resultsHandler:(id /* block */)a2;

@end
