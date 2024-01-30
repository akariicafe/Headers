@class FCFeedRange, FCCloudContext, NSArray, NSSet, FCFeedDescriptor, NSDate;
@protocol FCFeedPersonalizing, FCCoreConfiguration;

@interface FCTagFeedHeadlinesFetchOperation : FCOperation

@property (readonly, copy, nonatomic) id<FCCoreConfiguration> configuration;
@property (readonly, nonatomic) FCCloudContext *cloudContext;
@property (readonly, nonatomic) FCFeedDescriptor *feedDescriptor;
@property (readonly, nonatomic) id<FCFeedPersonalizing> personalizer;
@property (copy, nonatomic) id /* block */ fetchCompletionHandler;
@property (copy, nonatomic) NSDate *topOfFeedDate;
@property (copy, nonatomic) FCFeedRange *freeFeedRange;
@property (copy, nonatomic) FCFeedRange *paidFeedRange;
@property (nonatomic) long long maxFetchCount;
@property (copy, nonatomic) NSArray *precedingAdjacentHeadlines;
@property (copy, nonatomic) NSArray *followingAdjacentHeadlines;
@property (copy, nonatomic) NSSet *shownArticleIDs;
@property (copy, nonatomic) NSSet *shownClusterIDs;

- (void).cxx_destruct;
- (id)feedTransformations;
- (id)filterTransformationWithFilterOptions:(long long)a0 additionalArticleIDs:(id)a1;
- (void)performOperation;
- (id)filterTransformationWithFilterOptions:(long long)a0;
- (void)_fetchOrdinaryHeadlinesWithCompletionHandler:(id /* block */)a0;
- (void)_fetchPinnedHeadlinesWithCompletionHandler:(id /* block */)a0;
- (void)supplementFeedItems:(id)a0 forTag:(id)a1 fromCursor:(id)a2 completionHandler:(id /* block */)a3;
- (id)initWithConfiguration:(id)a0 cloudContext:(id)a1 feedDescriptor:(id)a2 personalizer:(id)a3;

@end
