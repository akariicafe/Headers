@class FCEdgeCacheHint, NSMutableDictionary, NSDictionary, FCHeldRecords, NSArray, NSMutableArray, FCFeedDatabase;
@protocol FCCoreConfiguration, FCContentContext;

@interface FCFeedRequestOperation : FCOperation

@property (retain, nonatomic) NSMutableArray *mutableNetworkEvents;
@property (retain, nonatomic) NSDictionary *feedRequestsByFeedID;
@property (retain, nonatomic) NSDictionary *databaseLookupsByFeedID;
@property (nonatomic) unsigned long long queryBudget;
@property (retain, nonatomic) NSMutableDictionary *resultFeedResponses;
@property (retain, nonatomic) FCHeldRecords *resultHeldArticleRecords;
@property (retain, nonatomic) FCHeldRecords *resultHeldTagRecords;
@property (retain, nonatomic) FCHeldRecords *resultHeldIssueRecords;
@property (retain, nonatomic) id<FCContentContext> context;
@property (retain, nonatomic) id<FCCoreConfiguration> configuration;
@property (retain, nonatomic) FCFeedDatabase *feedDatabase;
@property (copy, nonatomic) NSArray *feedRequests;
@property (nonatomic) unsigned long long maxCount;
@property (nonatomic) long long options;
@property (copy, nonatomic) NSArray *feedTransformations;
@property (copy, nonatomic) FCEdgeCacheHint *edgeCacheHint;
@property (nonatomic) unsigned long long expectedNetworkEventCount;
@property (readonly, nonatomic) NSArray *networkEvents;
@property (copy, nonatomic) id /* block */ requestCompletionHandler;
@property (copy, nonatomic) id /* block */ requestCompletionHandlerWithHeldRecords;

+ (void)initialize;
+ (BOOL)_orderFeedTopKEnabled;
+ (void)prewarm;
+ (id)feedRequestContentEnvironmentTokenWithContext:(id)a0;

- (void)prepareOperation;
- (void)resetForRetry;
- (unsigned long long)maxRetries;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)_networkEventCount;
- (unsigned long long)_maxAllowedDroppedFeeds;
- (BOOL)validateOperation;
- (void)_gatherAllOrderFeedResponsesWithCompletionHandler:(id /* block */)a0;
- (id)_additionalHTTPHeadersForOrderFeedRequest;
- (BOOL)canRetryWithError:(id)a0 retryAfter:(id *)a1;
- (unsigned long long)_orderFeedTopKFromBin:(long long)a0 timeInterval:(double)a1;
- (BOOL)_shouldReturnItemsFromDroppedFeedResponse:(id)a0;
- (void)performOperation;
- (void)_gatherAllMultiFeedResponsesWithCompletionHandler:(id /* block */)a0;
- (id)_failureResponseForRequest:(id)a0 error:(id)a1;
- (void)operationWillFinishWithError:(id)a0;
- (void)_gatherEdgeCachedFeedResponsesWithCompletionHandler:(id /* block */)a0;
- (id)_orderFeedIDFromFeedID:(id)a0;
- (id)_normalizedFeedRange:(id)a0;
- (BOOL)_countOfDroppedFeeds;

@end
