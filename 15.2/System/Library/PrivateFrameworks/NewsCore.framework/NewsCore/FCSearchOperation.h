@class FCSearchResult, FCCloudContext, NSString;

@interface FCSearchOperation : FCOperation

@property (retain, nonatomic) FCSearchResult *searchResult;
@property (nonatomic) unsigned long long parsecQueryID;
@property (retain, nonatomic) FCCloudContext *cloudContext;
@property (copy, nonatomic) NSString *searchString;
@property (nonatomic) unsigned long long batchSize;
@property (nonatomic) NSString *keyboardInputMode;
@property (nonatomic) double scale;
@property (nonatomic) BOOL shouldFetchFullHeadline;
@property (copy, nonatomic) id /* block */ searchResultsBlock;

- (void)performOperation;
- (BOOL)validateOperation;
- (void)operationWillFinishWithError:(id)a0;
- (id)_fetchResultsForTagsWithBatchSize:(unsigned long long)a0;
- (id)_fetchResultsForArticlesWithBatchSize:(unsigned long long)a0;
- (id)_fetchFullHeadlineResultsForArticles:(id)a0;
- (id)initWithSearchText:(id)a0 cloudContext:(id)a1 parsecQueryID:(unsigned long long)a2;
- (void).cxx_destruct;

@end
