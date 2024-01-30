@class NSArray, FCCachePolicy;
@protocol FCContentContext;

@interface FCCurrentIssuesFetchOperation : FCOperation

@property (retain, nonatomic) id<FCContentContext> context;
@property (retain, nonatomic) NSArray *resultIssues;
@property (copy, nonatomic) FCCachePolicy *cachePolicy;
@property (copy, nonatomic) id /* block */ fetchCompletionHandler;

- (void)performOperation;
- (BOOL)validateOperation;
- (void)operationWillFinishWithError:(id)a0;
- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
