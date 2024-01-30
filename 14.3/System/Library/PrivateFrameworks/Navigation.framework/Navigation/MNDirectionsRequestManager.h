@class geo_isolater, NSMutableDictionary, GEODirectionService;

@interface MNDirectionsRequestManager : NSObject {
    NSMutableDictionary *_pendingRequests;
    geo_isolater *_pendingRequestsIsolater;
    GEODirectionService *_directionsService;
}

- (id)init;
- (void).cxx_destruct;
- (void)cancelDirectionsRequestWithIdentifier:(id)a0;
- (void)_requestDirectionsFromTraceWithPath:(id)a0 feedback:(id)a1 auditToken:(id)a2 finishedHandler:(id /* block */)a3;
- (void)_requestServerDirections:(id)a0 withIdentifier:(id)a1 auditToken:(id)a2 finishedHandler:(id /* block */)a3;
- (void)requestDirections:(id)a0 withIdentifier:(id)a1 auditToken:(id)a2 finishedHandler:(id /* block */)a3;

@end
