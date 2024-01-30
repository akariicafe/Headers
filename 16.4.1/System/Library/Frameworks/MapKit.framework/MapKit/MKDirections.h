@class NSObject, GEODirectionsRequest, GEORouteAttributes, NSError, MKDirectionsRequest, GEOQuickETARequester, GEOQuickETARequest;
@protocol MKLocationManagerOperation, OS_dispatch_group;

@interface MKDirections : NSObject {
    MKDirectionsRequest *_request;
    GEODirectionsRequest *_geoRequest;
    GEOQuickETARequest *_etaRequest;
    GEOQuickETARequester *_etaRequester;
    id<MKLocationManagerOperation> _locationOperation;
    NSObject<OS_dispatch_group> *_waypointsDispatchGroup;
    GEORouteAttributes *_routeAttributes;
    NSError *_previousError;
}

@property (readonly, nonatomic, getter=isCalculating) BOOL calculating;

- (id)initWithRequest:(id)a0;
- (void)cancel;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_issueDirectionsRequestForOrigin:(id)a0 destination:(id)a1 completionHandler:(id /* block */)a2;
- (void)_calculateDirectionsWithTraits:(id)a0 completionHandler:(id /* block */)a1;
- (void)_calculateETAWithTraits:(id)a0 completionHandler:(id /* block */)a1;
- (void)_cleanupLocationOperation;
- (void)_establishCurrentLocationAndThen:(id /* block */)a0;
- (void)_issueETARequestForOrigin:(id)a0 destination:(id)a1 completionHandler:(id /* block */)a2;
- (void)_performWithValidCurrentLocationAndWaypointsForQuickETA:(BOOL)a0 traits:(id)a1 handler:(id /* block */)a2;
- (void)calculateDirectionsWithCompletionHandler:(id /* block */)a0;
- (void)calculateETAWithCompletionHandler:(id /* block */)a0;

@end
