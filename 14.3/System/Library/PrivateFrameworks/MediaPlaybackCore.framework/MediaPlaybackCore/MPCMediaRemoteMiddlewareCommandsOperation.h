@class NSArray, NSString, NSError, MPCMediaRemoteMiddleware, MPCFuture;

@interface MPCMediaRemoteMiddlewareCommandsOperation : MPAsyncOperation <MPMiddlewareOperation>

@property (retain, nonatomic) MPCMediaRemoteMiddleware *middleware;
@property (retain, nonatomic) MPCFuture *supportedCommandsFuture;
@property (readonly, nonatomic) NSError *error;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (readonly, nonatomic) NSArray *invalidationObservers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)execute;
- (id)timeoutDescription;
- (id)initWithMiddleware:(id)a0;

@end
