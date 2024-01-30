@class NSString, NSArray;
@protocol FCContentContext;

@interface FCDraftIssuesFetchOperation : FCOperation

@property (retain, nonatomic) id<FCContentContext> context;
@property (retain, nonatomic) NSString *issueListID;
@property (retain, nonatomic) NSArray *resultIssues;
@property (copy, nonatomic) id /* block */ fetchCompletionHandler;

- (BOOL)validateOperation;
- (void)operationWillFinishWithError:(id)a0;
- (void)performOperation;
- (id)init;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0 issueListID:(id)a1;

@end
