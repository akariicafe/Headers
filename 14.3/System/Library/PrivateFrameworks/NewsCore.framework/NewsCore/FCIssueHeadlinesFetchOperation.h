@class FCCloudContext, NSArray, NSDictionary, FCCachePolicy;

@interface FCIssueHeadlinesFetchOperation : FCOperation

@property (retain, nonatomic) FCCloudContext *context;
@property (retain, nonatomic) NSArray *issueIDs;
@property (retain, nonatomic) NSDictionary *resultHeadlinesByIssue;
@property (copy, nonatomic) FCCachePolicy *cachePolicy;
@property (copy, nonatomic) id /* block */ fetchCompletionHandler;

- (id)init;
- (void).cxx_destruct;
- (BOOL)validateOperation;
- (void)performOperation;
- (id)_promiseConfiguration;
- (void)operationWillFinishWithError:(id)a0;
- (id)initWithContext:(id)a0 issueIDs:(id)a1;
- (id)_promiseHeldRecordsByType;
- (id)initWithContext:(id)a0 issues:(id)a1;

@end
