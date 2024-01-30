@class FCFeedViewport, FCCloudContext, FCFeedDescriptor, FCFeedViewportDiff;
@protocol FCCoreConfiguration;

@interface FCFeedViewportRefreshOperation : FCOperation

@property (retain, nonatomic) FCFeedViewport *resultViewport;
@property (retain, nonatomic) FCFeedViewportDiff *resultDiff;
@property (copy, nonatomic) id<FCCoreConfiguration> configuration;
@property (retain, nonatomic) FCCloudContext *context;
@property (retain, nonatomic) FCFeedViewport *viewport;
@property (retain, nonatomic) FCFeedDescriptor *feedDescriptor;
@property (copy, nonatomic) id /* block */ refreshCompletionHandler;

- (void).cxx_destruct;
- (BOOL)validateOperation;
- (void)_continueWithRefreshDate:(id)a0 forYouConfig:(id)a1;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;

@end
