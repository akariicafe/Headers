@class FCCloudContext, NSArray, NSDictionary, FCCachePolicy;

@interface FCIssueHeadlinesFetchOperation : FCOperation {
    FCCloudContext *_context;
    NSArray *_issueIDs;
    NSDictionary *_resultHeadlinesByIssue;
}

@property (copy, nonatomic) FCCachePolicy *cachePolicy;
@property (copy, nonatomic) id /* block */ fetchCompletionHandler;

- (void)performOperation;
- (BOOL)validateOperation;
- (void)operationWillFinishWithError:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithContext:(id)a0 issues:(id)a1;
- (id)initWithContext:(id)a0 issueIDs:(id)a1;

@end
