@class NSArray, FCCachePolicy;
@protocol FCContentContext;

@interface FCIssuesFetchOperation : FCOperation

@property (retain, nonatomic) id<FCContentContext> context;
@property (retain, nonatomic) NSArray *issueIDs;
@property (retain, nonatomic) NSArray *resultIssues;
@property (copy, nonatomic) FCCachePolicy *cachePolicy;
@property (copy, nonatomic) id /* block */ interestTokenHandler;
@property (copy, nonatomic) id /* block */ fetchCompletionHandler;

- (id)init;
- (void).cxx_destruct;
- (BOOL)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;
- (id)initWithContext:(id)a0 issueIDs:(id)a1;

@end
