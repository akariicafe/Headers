@class FCCloudContext, NSArray, NSString, FCCachePolicy;
@protocol FCFeedTransforming;

@interface FCCurrentMagazineContentFetchOperation : FCOperation {
    FCCloudContext *_context;
    NSArray *_configIssueIDs;
    NSArray *_configArticleIDs;
    NSString *_trendingArticleListID;
    id<FCFeedTransforming> _currentHeadlinesTransformation;
    NSArray *_resultConfigIssues;
    NSArray *_resultConfigHeadlines;
    NSArray *_resultCurrentIssues;
    NSArray *_resultCurrentFeatureHeadlines;
    NSArray *_resultTrendingHeadlines;
}

@property (retain, nonatomic) FCCachePolicy *cachedPolicy;
@property (copy, nonatomic) id /* block */ fetchCompletionHandler;

- (void)performOperation;
- (BOOL)validateOperation;
- (void)operationWillFinishWithError:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithContext:(id)a0 configIssueIDs:(id)a1 configArticleIDs:(id)a2 trendingArticleListID:(id)a3 currentHeadlinesTransformation:(id)a4;

@end
