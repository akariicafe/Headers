@class NSArray;
@protocol FCFlintHelper, FCContentContext;

@interface FCOfflineANFArticlesFetchOperation : FCOperation {
    BOOL _cachedOnly;
    unsigned long long _maxBatchSize;
    unsigned long long _maxMissingArticles;
    id /* block */ _progressHandler;
    id /* block */ _interestTokenHandler;
    id /* block */ _archiveHandler;
    id /* block */ _fetchCompletionHandler;
    id<FCContentContext> _context;
    id<FCFlintHelper> _flintHelper;
    NSArray *_articleIDs;
    NSArray *_inputHeadlines;
}

- (BOOL)validateOperation;
- (void)operationWillFinishWithError:(id)a0;
- (void)performOperation;
- (void).cxx_destruct;

@end
