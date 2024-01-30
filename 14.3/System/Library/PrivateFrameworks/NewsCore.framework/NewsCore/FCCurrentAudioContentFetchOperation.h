@class FCCurrentAudioContent;
@protocol FCContentContext;

@interface FCCurrentAudioContentFetchOperation : FCOperation

@property (readonly, nonatomic) id<FCContentContext> context;
@property (copy, nonatomic) FCCurrentAudioContent *resultCurrentContent;
@property (copy, nonatomic) id /* block */ fetchCompletionHandler;

- (id)initWithContext:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)validateOperation;
- (id)_promiseContentWithConfiguration:(id)a0;
- (void)performOperation;
- (id)_promisePlaceholderContentWithConfiguration:(id)a0;
- (id)_promiseConfiguration;
- (void)operationWillFinishWithError:(id)a0;

@end
