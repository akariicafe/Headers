@class NSError, NSArray, FCMyArticlesTiming, NFUnfairLock, NSDictionary, FCDateRange, FCCloudContext, FCThreadSafeMutableDictionary;
@protocol FCCoreConfiguration;

@interface FCMyArticlesOperation : FCOperation {
    BOOL _isStreamingFinished;
    NSDictionary *_feedContextByFeedID;
    NSArray *_streamingFeedItems;
    NSArray *_allFeedItems;
    NFUnfairLock *_feedItemsLock;
    FCThreadSafeMutableDictionary *_scoreProfilesByConfigurationSet;
    double _timeSpentScoring;
}

@property (copy, nonatomic) id<FCCoreConfiguration> configuration;
@property (retain, nonatomic) FCCloudContext *context;
@property (copy, nonatomic) FCDateRange *dateRange;
@property (nonatomic) BOOL streamFeedItems;
@property (nonatomic) BOOL scoreFeedItems;
@property (nonatomic) long long streamFeedItemsCount;
@property (nonatomic) BOOL includeEvergreenFeedItems;
@property (copy, nonatomic) id /* block */ feedItemsChangedHandler;
@property (readonly, copy) NSArray *feedItems;
@property (readonly, copy) NSDictionary *feedContextByFeedID;
@property (readonly, copy) NSError *error;
@property (readonly) BOOL isStreamingFinished;
@property (nonatomic) long long binOverride;
@property (copy, nonatomic) id /* block */ feedItemCompletionBlock;
@property (nonatomic) unsigned long long maxNumberOfFeedsToQuery;
@property (nonatomic) unsigned long long perFeedLimit;
@property (readonly, nonatomic) FCMyArticlesTiming *timing;

- (BOOL)validateOperation;
- (void)operationWillFinishWithError:(id)a0;
- (void)performOperation;
- (id)init;
- (id)scoreProfilesForConfigurationSet:(long long)a0;
- (void).cxx_destruct;

@end
