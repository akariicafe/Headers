@class FCCurrentAudioContent;
@protocol FCContentContext;

@interface FCCurrentAudioContentFetchOperation : FCOperation {
    id<FCContentContext> _context;
    FCCurrentAudioContent *_resultCurrentContent;
}

@property (copy, nonatomic) id /* block */ fetchCompletionHandler;

- (void)performOperation;
- (BOOL)validateOperation;
- (void)operationWillFinishWithError:(id)a0;
- (id)_promiseConfiguration;
- (id)_promiseContentWithConfiguration:(id)a0;
- (id)_promisePlaceholderContentWithConfiguration:(id)a0;
- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
