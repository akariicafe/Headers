@class SFMoreResults, NSArray, NSString, SFRankingFeedback;
@protocol FCContentContext;

@interface FCParsecArticleSearchOperation : FCOperation

@property (retain, nonatomic) NSArray *results;
@property (nonatomic) unsigned long long batchSize;
@property (retain, nonatomic) SFRankingFeedback *rankingFeedback;
@property (nonatomic) unsigned long long parsecQueryID;
@property (retain, nonatomic) SFMoreResults *moreResults;
@property (copy, nonatomic) NSString *query;
@property (copy, nonatomic) NSString *keyboardInputMode;
@property (nonatomic) double scale;
@property (retain, nonatomic) id<FCContentContext> contentContext;
@property (retain, nonatomic) SFRankingFeedback *previousRankingFeedback;
@property (copy) id /* block */ articleSearchCompletionHandler;

- (void).cxx_destruct;
- (BOOL)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;
- (id)_rankingFeedbackWithSection:(id)a0;
- (id)initWithMoreResults:(id)a0 parsecQueryID:(unsigned long long)a1;

@end
