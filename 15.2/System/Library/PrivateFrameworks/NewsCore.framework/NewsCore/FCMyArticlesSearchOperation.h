@class NSArray, NSDictionary, FCCloudContext, FCFeedItemFeature, FCDateRange;

@interface FCMyArticlesSearchOperation : FCOperation

@property (retain, nonatomic) NSArray *resultFeedItems;
@property (copy) NSDictionary *resultFeedContextByFeedID;
@property (retain, nonatomic) FCCloudContext *context;
@property (copy, nonatomic) FCFeedItemFeature *feature;
@property (copy, nonatomic) FCDateRange *dateRange;
@property (nonatomic) BOOL channelsOnly;
@property (nonatomic) BOOL cachedOnly;
@property (nonatomic) BOOL unreadOnly;
@property (copy, nonatomic) id /* block */ searchCompletionHandler;

- (void)performOperation;
- (BOOL)validateOperation;
- (void)operationWillFinishWithError:(id)a0;
- (void)_generateFeedRequestsForFeedRange:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
