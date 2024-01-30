@class NSString, FCCloudContext, NSError, FCArticleSearchOperationFeedbackResult, FCArticleStreamingResults;

@interface FCArticleSearchOperation : FCOperation

@property (retain, nonatomic) FCArticleStreamingResults *results;
@property (retain, nonatomic) NSError *searchError;
@property (retain, nonatomic) FCArticleSearchOperationFeedbackResult *feedbackResult;
@property (copy, nonatomic) NSString *query;
@property (nonatomic) NSString *keyboardInputMode;
@property (nonatomic) double scale;
@property (nonatomic) unsigned long long resultsLimit;
@property (retain, nonatomic) FCCloudContext *cloudContext;
@property (copy) id /* block */ articleSearchCompletion;
@property (nonatomic) unsigned long long parsecQueryID;

- (BOOL)validateOperation;
- (void)operationWillFinishWithError:(id)a0;
- (void)performOperation;
- (void).cxx_destruct;
- (void)_performSearchQuery:(id /* block */)a0;
- (id)initWithParsecQueryID:(unsigned long long)a0;

@end
