@class GEOPDPlaceResponse, GEOPDPlaceRequest;
@protocol GEOMapItem;

@interface _GEOPlaceRequestTicket : GEOAbstractMapServiceTicket {
    GEOPDPlaceRequest *_request;
    GEOPDPlaceResponse *_response;
    id<GEOMapItem> _mapItemToRefine;
    id /* block */ _preSubmitUpdateRequestBlock;
    id /* block */ _retryRequestForErrorBlock;
}

- (void)cancel;
- (void).cxx_destruct;
- (id)initWithRequest:(id)a0 traits:(id)a1;
- (id)initWithRequest:(id)a0 traits:(id)a1 preSubmitUpdateRequestBlock:(id /* block */)a2 retryForErrorBlock:(id /* block */)a3;
- (void)applyToCorrectedSearch:(id)a0;
- (id)description;
- (struct { int x0; union { int x0; int x1; int x2; } x1; })dataRequestKind;
- (id)initWithTraits:(id)a0;
- (id)initWithRequest:(id)a0 traits:(id)a1 mapItemToRefine:(id)a2 preSubmitUpdateRequestBlock:(id /* block */)a3 retryForErrorBlock:(id /* block */)a4;
- (id)resultSectionHeader;
- (void)_processRequest:(id)a0 auditToken:(id)a1 timeout:(double)a2 withHandler:(id /* block */)a3 refinedHandler:(id /* block */)a4 networkActivity:(id /* block */)a5;
- (void)submitWithRefinedHandler:(id /* block */)a0 auditToken:(id)a1 timeout:(long long)a2 networkActivity:(id /* block */)a3;
- (id)initWithRequest:(id)a0 traits:(id)a1 mapItemToRefine:(id)a2;
- (void)applyToPlaceInfo:(id)a0;
- (void)submitWithHandler:(id /* block */)a0 auditToken:(id)a1 timeout:(long long)a2 networkActivity:(id /* block */)a3;

@end
