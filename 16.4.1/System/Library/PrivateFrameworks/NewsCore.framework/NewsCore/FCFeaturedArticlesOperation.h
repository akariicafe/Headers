@class NSArray;
@protocol FCContentContext;

@interface FCFeaturedArticlesOperation : FCOperation {
    NSArray *_networkEvents;
    id<FCContentContext> _context;
    NSArray *_resultFeedItems;
}

@property (copy, nonatomic) id /* block */ fetchCompletionHandler;
@property (readonly, nonatomic) NSArray *networkEvents;

- (BOOL)validateOperation;
- (void)operationWillFinishWithError:(id)a0;
- (void)performOperation;
- (id)initWithContext:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
