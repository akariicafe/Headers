@class PXSearchIndexManager, PXSearchQuery, NSString, PXSearchQueryExecutor, PSIDatabase;

@interface PXSearchQueryController : NSObject <PXSearchQueryControllerProtocol>

@property (readonly, nonatomic) PXSearchIndexManager *searchIndexManager;
@property (readonly, nonatomic) id /* block */ resultsHandler;
@property (retain, nonatomic) PSIDatabase *searchIndex;
@property (retain, nonatomic) PXSearchQueryExecutor *searchQueryExecutor;
@property (retain, nonatomic) PXSearchQuery *currentSearchQuery;
@property (nonatomic) BOOL isOpeningSearchIndex;
@property (readonly, nonatomic) BOOL requestSceneAncestryInformation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_openSearchIndex;
- (void)_performSearch:(id)a0 retry:(BOOL)a1;
- (id)initWithSearchIndexManager:(id)a0 requestSceneAncestryInformation:(BOOL)a1 resultsHandler:(id /* block */)a2;
- (void)performSearch:(id)a0;

@end
