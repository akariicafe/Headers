@class NSArray, NSDictionary, NSMapTable, NSError, FCCloudContext, FCDateRange;
@protocol FCCoreConfiguration;

@interface FCMyArticlesOperation : FCOperation

@property (copy) NSArray *feedItems;
@property (copy) NSDictionary *feedContextByFeedID;
@property (copy) NSError *error;
@property (nonatomic) BOOL isStreamingFinished;
@property (copy) NSArray *sortedNonEditorialFeedItems;
@property (retain) NSMapTable *nonEditorialScoreProfiles;
@property (copy, nonatomic) id<FCCoreConfiguration> configuration;
@property (retain, nonatomic) FCCloudContext *context;
@property (copy, nonatomic) FCDateRange *dateRange;
@property (nonatomic) BOOL streamFeedItems;
@property (nonatomic) long long streamFeedItemsCount;
@property (nonatomic) BOOL includeEvergreenFeedItems;
@property (copy, nonatomic) id /* block */ feedItemsChangedHandler;
@property (nonatomic) long long binOverride;
@property (copy, nonatomic) id /* block */ feedItemCompletionBlock;
@property (nonatomic) unsigned long long maxNumberOfFeedsToQuery;
@property (nonatomic) unsigned long long perFeedLimit;

- (id)init;
- (void).cxx_destruct;
- (BOOL)validateOperation;
- (void)_fetchTagsForQueryingWithCompletionHandler:(id /* block */)a0;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;
- (void)_appendFeedItems:(id)a0 forceChangeNotification:(BOOL)a1;

@end
