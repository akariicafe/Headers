@class FCMapTable, FCCloudContext, NSArray, NSDictionary, NSError, FCDateRange, NFUnfairLock;
@protocol FCCoreConfiguration;

@interface FCMyArticlesOperation : FCOperation {
    BOOL _isStreamingFinished;
    NSArray *_feedItems;
    NSArray *_sortedNonEditorialFeedItems;
    FCMapTable *_nonEditorialScoreProfiles;
    NSDictionary *_feedContextByFeedID;
    NSError *_error;
    NFUnfairLock *_feedItemsLock;
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
@property (readonly, copy) NSArray *sortedNonEditorialFeedItems;
@property (readonly) FCMapTable *nonEditorialScoreProfiles;
@property (readonly, copy) NSDictionary *feedContextByFeedID;
@property (readonly, copy) NSError *error;
@property (readonly) BOOL isStreamingFinished;
@property (nonatomic) long long binOverride;
@property (copy, nonatomic) id /* block */ feedItemCompletionBlock;
@property (nonatomic) unsigned long long maxNumberOfFeedsToQuery;
@property (nonatomic) unsigned long long perFeedLimit;

- (void)performOperation;
- (BOOL)validateOperation;
- (void)operationWillFinishWithError:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
