@class FCCloudContext, NSArray, NSString, FCCachePolicy;
@protocol FCFeedTransforming;

@interface FCCurrentMagazineContentFetchOperation : FCOperation

@property (retain, nonatomic) FCCloudContext *context;
@property (retain, nonatomic) NSArray *configIssueIDs;
@property (retain, nonatomic) NSArray *configArticleIDs;
@property (copy, nonatomic) NSString *trendingArticleListID;
@property (retain, nonatomic) id<FCFeedTransforming> currentHeadlinesTransformation;
@property (retain, nonatomic) NSArray *resultConfigIssues;
@property (retain, nonatomic) NSArray *resultConfigHeadlines;
@property (retain, nonatomic) NSArray *resultCurrentIssues;
@property (retain, nonatomic) NSArray *resultCurrentFeatureHeadlines;
@property (retain, nonatomic) NSArray *resultTrendingHeadlines;
@property (retain, nonatomic) FCCachePolicy *cachedPolicy;
@property (copy, nonatomic) id /* block */ fetchCompletionHandler;

- (id)init;
- (void).cxx_destruct;
- (BOOL)validateOperation;
- (void)performOperation;
- (void)_fetchConfigContentAndCurrentIssuesWithCompletion:(id /* block */)a0;
- (void)_fetchCurrentFeatureHeadlinesWithCompletion:(id /* block */)a0;
- (id)_filterInaccessibleIssues:(id)a0;
- (id)_filterInaccessibleHeadlines:(id)a0;
- (id)initWithContext:(id)a0 configIssueIDs:(id)a1 configArticleIDs:(id)a2 trendingArticleListID:(id)a3 currentHeadlinesTransformation:(id)a4;
- (void)operationWillFinishWithError:(id)a0;

@end
