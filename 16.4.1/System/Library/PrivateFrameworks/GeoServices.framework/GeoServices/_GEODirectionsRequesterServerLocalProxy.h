@class NSString;

@interface _GEODirectionsRequesterServerLocalProxy : GEOServiceRequester <_GEODirectionsRequesterServerProxy>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancelRequest:(id)a0;
- (id)_validateResponse:(id)a0;
- (void)startRequest:(id)a0 auditToken:(id)a1 useBackgroundURL:(BOOL)a2 requestPriority:(id)a3 callbackQueue:(id)a4 finished:(id /* block */)a5 networkActivity:(id /* block */)a6 error:(id /* block */)a7;

@end
