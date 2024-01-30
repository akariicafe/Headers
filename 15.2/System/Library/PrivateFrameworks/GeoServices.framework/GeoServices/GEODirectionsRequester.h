@protocol _GEODirectionsRequesterServerProxy;

@interface GEODirectionsRequester : NSObject {
    id<_GEODirectionsRequesterServerProxy> _serverProxy;
}

+ (void)useProxy:(Class)a0;
+ (void)useLocalProxy;
+ (id)sharedRequester;
+ (void)useRemoteProxy;

- (void)cancelRequest:(id)a0;
- (void)startRequest:(id)a0 auditToken:(id)a1 skipFinalize:(BOOL)a2 useBackgroundURL:(BOOL)a3 requestPriority:(id)a4 callbackQueue:(id)a5 finished:(id /* block */)a6 networkActivity:(id /* block */)a7 error:(id /* block */)a8;
- (void)startRequest:(id)a0 auditToken:(id)a1 skipFinalize:(BOOL)a2 useBackgroundURL:(BOOL)a3 requestPriority:(id)a4 finished:(id /* block */)a5 networkActivity:(id /* block */)a6 error:(id /* block */)a7;
- (void)startRequest:(id)a0 callbackQueue:(id)a1 finished:(id /* block */)a2 networkActivity:(id /* block */)a3 error:(id /* block */)a4;
- (void)finalizeRequest:(id)a0;
- (void)startRequest:(id)a0 finished:(id /* block */)a1 networkActivity:(id /* block */)a2 error:(id /* block */)a3;
- (void)startRequest:(id)a0 auditToken:(id)a1 callbackQueue:(id)a2 finished:(id /* block */)a3 networkActivity:(id /* block */)a4 error:(id /* block */)a5;
- (void)startRequest:(id)a0 auditToken:(id)a1 useBackgroundURL:(BOOL)a2 callbackQueue:(id)a3 finished:(id /* block */)a4 networkActivity:(id /* block */)a5 error:(id /* block */)a6;
- (void).cxx_destruct;
- (id)init;

@end
