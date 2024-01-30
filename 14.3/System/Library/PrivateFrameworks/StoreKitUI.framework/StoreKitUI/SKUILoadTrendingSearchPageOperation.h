@class NSURL, SKUIClientContext;

@interface SKUILoadTrendingSearchPageOperation : NSOperation

@property (readonly, nonatomic) SKUIClientContext *clientContext;
@property (readonly, nonatomic) NSURL *pageURL;
@property (readonly, copy, nonatomic) id /* block */ outputBlock;

- (void).cxx_destruct;
- (void)main;
- (id)initWithClientContext:(id)a0 pageURL:(id)a1 outputBlock:(id /* block */)a2;

@end
