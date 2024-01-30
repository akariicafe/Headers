@class SKUIClientContext, NSOperationQueue, SKUITrendingSearchPage, NSMutableArray, NSOperation;

@interface SKUITrendingSearchProvider : NSObject

@property (readonly, nonatomic) NSOperationQueue *callbackQueue;
@property (readonly, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) SKUITrendingSearchPage *cachedSearchPage;
@property (readonly, nonatomic) NSMutableArray *pendingCompletionBlocks;
@property (retain, nonatomic) NSOperation *runningRequestOperation;
@property (readonly, weak, nonatomic) SKUIClientContext *clientContext;

- (void)clearCache;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithClientContext:(id)a0;
- (void)trendingSearchPageWithURL:(id)a0 completionBlock:(id /* block */)a1;
- (id)requestOperationWithPageURL:(id)a0 completionBlock:(id /* block */)a1;
- (void)requestTrendingSearchPageWithURL:(id)a0;

@end
