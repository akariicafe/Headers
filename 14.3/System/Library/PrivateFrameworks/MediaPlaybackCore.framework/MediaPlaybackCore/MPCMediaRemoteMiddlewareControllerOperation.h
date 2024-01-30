@class MPCPlayerPath, NSString, NSArray, MPCMediaRemoteMiddleware, NSError, MPCFuture, MPCMediaRemoteController, NSMapTable;

@interface MPCMediaRemoteMiddlewareControllerOperation : MPAsyncOperation <MPCMediaRemoteMiddlewareControllerProviding, MPMiddlewareAutomaticDependencyOperation>

@property (readonly, nonatomic) MPCFuture *controllerFuture;
@property (readonly, nonatomic) MPCMediaRemoteController *controller;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) MPCMediaRemoteMiddleware *middleware;
@property (retain, nonatomic) MPCPlayerPath *playerPath;
@property (retain, nonatomic) MPCFuture *controllerFuture;
@property (readonly, nonatomic) NSArray *inputProtocols;
@property (readonly, nonatomic) NSArray *outputProtocols;
@property (retain, nonatomic) NSMapTable *inputOperations;
@property (readonly, nonatomic) NSError *error;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (readonly, nonatomic) NSArray *invalidationObservers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)execute;
- (id)initWithMiddleware:(id)a0 playerPath:(id)a1;
- (id)timeoutDescription;

@end
