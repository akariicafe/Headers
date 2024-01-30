@class FCHeldRecords, NSArray, NSDictionary, NSMutableDictionary, FCEdgeCacheHint, NSMutableArray, FCFeedDatabase;
@protocol FCCoreConfiguration, FCContentContext;

@interface FCFeedRequestOperation : FCOperation {
    NSMutableArray *_mutableNetworkEvents;
    NSDictionary *_feedRequestsByFeedID;
    NSDictionary *_databaseLookupsByFeedID;
    unsigned long long _queryBudget;
    NSMutableDictionary *_resultFeedResponses;
    FCHeldRecords *_resultHeldArticleRecords;
    FCHeldRecords *_resultHeldTagRecords;
    FCHeldRecords *_resultHeldIssueRecords;
}

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
+ (void)prewarm;
+ (id)feedRequestContentEnvironmentTokenWithContext:(id)a0;

- (void)performOperation;
- (BOOL)validateOperation;
- (void)prepareOperation;
- (unsigned long long)maxRetries;
- (BOOL)canRetryWithError:(id)a0 retryAfter:(id *)a1;
- (void)resetForRetry;
- (void)operationWillFinishWithError:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
