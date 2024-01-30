@class NSString, NSArray;
@protocol FCContentContext;

@interface FCDraftIssuesFetchOperation : FCOperation

@property (retain, nonatomic) id<FCContentContext> context;
@property (retain, nonatomic) NSString *issueListID;
@property (retain, nonatomic) NSArray *resultIssues;
@property (copy, nonatomic) id /* block */ fetchCompletionHandler;

- (id)init;
- (void).cxx_destruct;
- (BOOL)validateOperation;
- (void)performOperation;
- (id)initWithContext:(id)a0 issueListID:(id)a1;
- (void)operationWillFinishWithError:(id)a0;

@end
