@class FCFeedRange, NSArray, FCCloudContext, NSSet, NSDate, FCFeedDescriptor;
@protocol FCFeedPersonalizing, FCCoreConfiguration;

@interface FCLegacyTagFeedHeadlinesFetchOperation : FCOperation {
    BOOL _fetchOrdinaryItemsFromCache;
    BOOL _resultFinished;
    id<FCCoreConfiguration> _configuration;
    FCCloudContext *_cloudContext;
    FCFeedDescriptor *_feedDescriptor;
    id<FCFeedPersonalizing> _personalizer;
    NSSet *_shownArticleIDs;
    NSSet *_shownClusterIDs;
    NSArray *_resultOrdinaryHeadlines;
    NSArray *_resultPinnedHeadlines;
    FCFeedRange *_resultFetchedFreeRange;
    FCFeedRange *_resultFetchedPaidRange;
}

@property (copy, nonatomic) id /* block */ fetchCompletionHandler;
@property (copy, nonatomic) NSDate *topOfFeedDate;
@property (copy, nonatomic) FCFeedRange *freeFeedRange;
@property (copy, nonatomic) FCFeedRange *paidFeedRange;
@property (nonatomic) long long maxFetchCount;
@property (copy, nonatomic) NSArray *precedingHeadlines;

- (void)performOperation;
- (void)prepareOperation;
- (unsigned long long)maxRetries;
- (BOOL)canRetryWithError:(id)a0 retryAfter:(id *)a1;
- (void)resetForRetry;
- (void)operationWillFinishWithError:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 cloudContext:(id)a1 feedDescriptor:(id)a2 personalizer:(id)a3;

@end
