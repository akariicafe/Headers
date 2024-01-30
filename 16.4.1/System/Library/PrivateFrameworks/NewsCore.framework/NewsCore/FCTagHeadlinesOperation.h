@class NSArray, FCCloudContext, NSString;

@interface FCTagHeadlinesOperation : FCOperation

@property (copy) NSArray *resultHeadlines;
@property (retain, nonatomic) FCCloudContext *context;
@property (copy, nonatomic) NSString *tagID;
@property (nonatomic) unsigned long long maxHeadlinesCount;
@property (copy) id /* block */ fetchCompletionHandler;

- (BOOL)validateOperation;
- (void)operationWillFinishWithError:(id)a0;
- (void)performOperation;
- (id)init;
- (void).cxx_destruct;

@end
