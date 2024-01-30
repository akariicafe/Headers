@class FCCloudContext, FCEdgeCacheHint, NSArray;

@interface FCIssueArticlesOperation : FCOperation {
    FCCloudContext *_context;
    NSArray *_issueIDs;
    NSArray *_resultFeedItems;
}

@property (copy, nonatomic) FCEdgeCacheHint *edgeCacheHint;
@property (nonatomic) unsigned long long maxIssuesPerFetch;
@property (copy, nonatomic) id /* block */ fetchCompletionHandler;

- (BOOL)validateOperation;
- (void)operationWillFinishWithError:(id)a0;
- (void)performOperation;
- (id)init;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0 issueIDs:(id)a1;
- (id)initWithContext:(id)a0 issues:(id)a1;

@end
