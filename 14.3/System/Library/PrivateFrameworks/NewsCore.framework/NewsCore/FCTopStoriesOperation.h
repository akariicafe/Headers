@class FCCloudContext, FCForYouConfig, FCTopStoriesOperationResult, NSError;
@protocol FCChannelProviding, FCCoreConfiguration;

@interface FCTopStoriesOperation : FCOperation

@property (copy) id<FCChannelProviding> topStoriesChannel;
@property (retain) FCTopStoriesOperationResult *topStoriesResult;
@property (retain) FCForYouConfig *forYouConfig;
@property (retain) NSError *error;
@property (copy, nonatomic) id<FCCoreConfiguration> configuration;
@property (retain, nonatomic) FCCloudContext *context;
@property (copy) id /* block */ catchUpCompletionHandler;

- (void).cxx_destruct;
- (void)_checkShouldShowTopStoriesWithCompletionHandler:(id /* block */)a0;
- (BOOL)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;

@end
