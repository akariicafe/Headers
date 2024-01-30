@class NSArray;
@protocol FCFlintHelper, FCContentContext;

@interface FCOfflineANFArticlesFetchOperation : FCOperation

@property (readonly, nonatomic) id<FCContentContext> context;
@property (readonly, nonatomic) id<FCFlintHelper> flintHelper;
@property (readonly, copy, nonatomic) NSArray *articleIDs;
@property (readonly, copy, nonatomic) NSArray *inputHeadlines;
@property (nonatomic) BOOL cachedOnly;
@property (nonatomic) unsigned long long maxBatchSize;
@property (nonatomic) unsigned long long maxMissingArticles;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (copy, nonatomic) id /* block */ interestTokenHandler;
@property (copy, nonatomic) id /* block */ archiveHandler;
@property (copy, nonatomic) id /* block */ fetchCompletionHandler;

- (void).cxx_destruct;
- (BOOL)validateOperation;
- (id)initWithContext:(id)a0 flintHelper:(id)a1 articleIDs:(id)a2;
- (id)_promiseThumbnailsFromArticleRecords:(id)a0;
- (id)_promiseANFDocumentsFromArticleRecords:(id)a0;
- (id)_promiseANFResourcesFromArticleRecords:(id)a0 anfAssetHandles:(id)a1;
- (id)_promiseCachedArticleRecords;
- (id)_promiseFetchedArticleRecords;
- (id)_desiredArticleKeys;
- (id)initWithContext:(id)a0 flintHelper:(id)a1 headlines:(id)a2;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;
- (id)_promiseArticleRecords;

@end
