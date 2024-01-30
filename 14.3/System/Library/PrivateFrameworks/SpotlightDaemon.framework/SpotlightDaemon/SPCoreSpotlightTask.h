@class NSString, SPQueryResultsQueue, CSSearchQueryContext, NSMutableArray;

@interface SPCoreSpotlightTask : NSObject

@property (retain, nonatomic) NSMutableArray *jobs;
@property (nonatomic) double startTime;
@property (retain, nonatomic) NSString *queryString;
@property (nonatomic) struct __SIQuery { } *siQuery;
@property (retain, nonatomic) SPQueryResultsQueue *resultsQueue;
@property (retain, nonatomic) CSSearchQueryContext *queryContext;
@property (nonatomic) long long queryID;
@property BOOL canceled;
@property (nonatomic) BOOL finished;
@property (nonatomic) BOOL hasPausedResults;
@property (readonly) NSString *clientBundleID;
@property (nonatomic) BOOL willAsyncStart;
@property (copy, nonatomic) id /* block */ scheduleBlock;
@property (copy, nonatomic) id /* block */ completionBlock;

+ (id)_makeBundleQueryStringForQueryContext:(id)a0;
+ (id)_makeFilterQueryStringForQueryContext:(id)a0;
+ (id)_makeBundleQueryStringForField:(id)a0 withBundleIDs:(id)a1;
+ (id)_makePrefsQueryStringWithBundleIDs:(id)a0;
+ (id)_makeDisabledBundlesQueryStringForQueryContext:(id)a0;
+ (struct __SIQuery { } *)_makeSIQueryWithQueryString:(id)a0 queryContext:(id)a1;

- (void)cancel;
- (void)schedule;
- (void)finishWithError:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)resumeResults;
- (void)pauseResults;
- (void)start;
- (BOOL)addJob:(id)a0;
- (void)removeJob:(id)a0;
- (id)initWithQueryString:(id)a0 queryContext:(id)a1;

@end
