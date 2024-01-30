@class geo_isolater, NSMutableDictionary, GEODirectionsService;

@interface MNDirectionsRequestManager : NSObject {
    NSMutableDictionary *_pendingRequests;
    geo_isolater *_pendingRequestsIsolater;
    GEODirectionsService *_directionsService;
}

- (id)init;
- (void).cxx_destruct;
- (void)_logRoutes:(id)a0 error:(id)a1;
- (void)_requestDirectionsFromTraceWithPath:(id)a0 feedback:(id)a1 auditToken:(id)a2 finishedHandler:(id /* block */)a3;
- (void)_requestServerDirections:(id)a0 preferredRoute:(id)a1 withIdentifier:(id)a2 auditToken:(id)a3 finishedHandler:(id /* block */)a4;
- (void)cancelDirectionsRequestWithIdentifier:(id)a0;
- (void)requestDirections:(id)a0 withIdentifier:(id)a1 auditToken:(id)a2 finishedHandler:(id /* block */)a3;

@end
