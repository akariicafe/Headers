@class FCArticleAudioTrack;
@protocol FCContentContext;

@interface FCAudioTrackFetchOperation : FCOperation

@property (readonly, nonatomic) id<FCContentContext> context;
@property (readonly, nonatomic) FCArticleAudioTrack *audioTrack;
@property (nonatomic) BOOL cachedOnly;
@property (copy, nonatomic) id /* block */ interestTokenHandler;
@property (copy, nonatomic) id /* block */ archiveHandler;
@property (copy, nonatomic) id /* block */ fetchCompletionHandler;

- (void)operationWillFinishWithError:(id)a0;
- (void)performOperation;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0 audioTrack:(id)a1;

@end
