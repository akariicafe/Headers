@class FCCloudContext, NSArray, NSString, FCCachePolicy;

@interface FCCurrentMagazineContentFetchOperation : FCOperation {
    FCCloudContext *_context;
    NSArray *_configIssueIDs;
    NSArray *_configArticleIDs;
    NSString *_trendingArticleListID;
    NSArray *_resultConfigIssues;
    NSArray *_resultConfigHeadlines;
    NSArray *_resultCurrentIssues;
    NSArray *_resultTrendingHeadlines;
}

@property (retain, nonatomic) FCCachePolicy *cachedPolicy;
@property (nonatomic) long long contentOptions;
@property (copy, nonatomic) id /* block */ fetchCompletionHandler;

- (BOOL)validateOperation;
- (void)operationWillFinishWithError:(id)a0;
- (void)performOperation;
- (id)init;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0 configIssueIDs:(id)a1 configArticleIDs:(id)a2 trendingArticleListID:(id)a3;

@end
