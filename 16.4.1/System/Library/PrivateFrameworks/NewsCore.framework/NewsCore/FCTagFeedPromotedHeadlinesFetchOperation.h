@class FCCloudContext, NSArray;
@protocol FCTagProviding, FCFeedPersonalizing, FCCoreConfiguration;

@interface FCTagFeedPromotedHeadlinesFetchOperation : FCOperation {
    id<FCCoreConfiguration> _configuration;
    FCCloudContext *_cloudContext;
    id<FCTagProviding> _tag;
    id<FCFeedPersonalizing> _personalizer;
    double _expireAfterTimeWindow;
    NSArray *_resultHeadlines;
}

@property (copy, nonatomic) id /* block */ fetchCompletionHandler;

- (void)operationWillFinishWithError:(id)a0;
- (void)performOperation;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 cloudContext:(id)a1 tag:(id)a2 personalizer:(id)a3 expireAfterTimeWindow:(double)a4;

@end
