@class NSString, geo_isolater, NSMutableArray;

@interface _GEODirectionsRequesterServerRemoteProxy : NSObject <_GEODirectionsRequesterServerProxy> {
    geo_isolater *_isolater;
    NSMutableArray *_pendingRequests;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancelRequest:(id)a0;
- (id)init;
- (void)startRequest:(id)a0 auditToken:(id)a1 isDoomRequest:(BOOL)a2 requestPriority:(id)a3 callbackQueue:(id)a4 finished:(id /* block */)a5 networkActivity:(id /* block */)a6 error:(id /* block */)a7;
- (void).cxx_destruct;
- (BOOL)_finishRequest:(id)a0;

@end
