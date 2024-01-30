@class NSArray, NSString, NSError, MPCMediaRemoteMiddleware, MPCFuture;

@interface MPCMediaRemoteMiddlewarePlaybackStateOperation : MPAsyncOperation <MPMiddlewareOperation>

@property (retain, nonatomic) MPCMediaRemoteMiddleware *middleware;
@property (retain, nonatomic) MPCFuture *playbackStateFuture;
@property (readonly, nonatomic) NSError *error;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (readonly, nonatomic) NSArray *invalidationObservers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)execute;
- (id)timeoutDescription;
- (void).cxx_destruct;
- (id)initWithMiddleware:(id)a0;

@end
