@class NSString, geo_isolater, NSMapTable;

@interface _GEODirectionsRequesterServerRemoteProxy : NSObject <_GEODirectionsRequesterServerProxy> {
    geo_isolater *_isolater;
    NSMapTable *_pendingRequestConnections;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancelRequest:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)_takeConnectionForRequest:(id)a0;
- (void)startRequest:(id)a0 auditToken:(id)a1 useBackgroundURL:(BOOL)a2 requestPriority:(id)a3 callbackQueue:(id)a4 finished:(id /* block */)a5 networkActivity:(id /* block */)a6 error:(id /* block */)a7;

@end
