@class FCFeedDatabase, NSMutableDictionary, NSArray, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, FCCoreConfiguration, FCContentContext;

@interface FCFeedStreamingRequestOperation : FCOperation

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain, nonatomic) NSMutableArray *feedRangeSteps;
@property (retain, nonatomic) NSMutableDictionary *aggregateFeedResponsesByFeedID;
@property (retain, nonatomic) NSMutableArray *aggregateFeedItems;
@property (retain, nonatomic) id<FCContentContext> context;
@property (retain, nonatomic) id<FCCoreConfiguration> configuration;
@property (retain, nonatomic) FCFeedDatabase *feedDatabase;
@property (copy, nonatomic) NSArray *feedRequests;
@property (nonatomic) long long streamingType;
@property (nonatomic) BOOL throttled;
@property (nonatomic) unsigned long long cutoffAtCount;
@property (nonatomic) long long options;
@property (copy, nonatomic) NSArray *feedTransformations;
@property (copy, nonatomic) id /* block */ streamingResultsHandler;
@property (copy, nonatomic) id /* block */ requestCompletionHandler;

- (void).cxx_destruct;
- (BOOL)validateOperation;
- (id)_feedRangeCoveredByRequests;
- (id)_feedRangeBrokenIntoSteps:(id)a0;
- (void)_startNextFetchStep;
- (void)_appendFeedResponses:(id)a0 feedItems:(id)a1;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;

@end
