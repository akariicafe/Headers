@class NSArray;
@protocol FCFeedTransforming, FCContentContext;

@interface FCCurrentFeaturedHeadlinesFetchOperation : FCOperation {
    BOOL _useFallbackArticleSource;
    id<FCContentContext> _context;
    id<FCFeedTransforming> _transformation;
    NSArray *_resultHeadlines;
}

@property (copy, nonatomic) id /* block */ fetchCompletionHandler;

- (void)performOperation;
- (BOOL)validateOperation;
- (void)operationWillFinishWithError:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithContext:(id)a0 transformation:(id)a1 useFallbackArticleSource:(BOOL)a2;
- (id)initWithContext:(id)a0 transformation:(id)a1;

@end
