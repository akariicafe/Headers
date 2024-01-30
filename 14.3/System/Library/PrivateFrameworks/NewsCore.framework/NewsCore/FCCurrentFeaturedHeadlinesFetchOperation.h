@class NSArray;
@protocol FCFeedTransforming, FCContentContext;

@interface FCCurrentFeaturedHeadlinesFetchOperation : FCOperation

@property (retain, nonatomic) id<FCContentContext> context;
@property (retain, nonatomic) id<FCFeedTransforming> transformation;
@property (nonatomic) BOOL useFallbackArticleSource;
@property (retain, nonatomic) NSArray *resultHeadlines;
@property (copy, nonatomic) id /* block */ fetchCompletionHandler;

- (id)init;
- (void).cxx_destruct;
- (BOOL)validateOperation;
- (void)performOperation;
- (id)_promiseConfiguration;
- (id)initWithContext:(id)a0 transformation:(id)a1;
- (id)_promiseTemporaryFallbackFeedItemsWithConfiguration:(id)a0;
- (id)_promiseTemporaryFallbackHeadlinesForFeedItems:(id)a0;
- (id)_promiseArticleRecordsWithConfiguration:(id)a0;
- (id)_promiseFilteredArticleIDsFromArticleRecords:(id)a0;
- (id)_promiseHeadlinesForArticleIDs:(id)a0;
- (id)initWithContext:(id)a0 transformation:(id)a1 useFallbackArticleSource:(BOOL)a2;
- (void)operationWillFinishWithError:(id)a0;

@end
