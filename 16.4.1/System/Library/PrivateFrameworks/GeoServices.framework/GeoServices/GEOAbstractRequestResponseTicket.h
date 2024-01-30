@class GEOPDPlaceResponse, GEOPDPlaceRequest;

@interface GEOAbstractRequestResponseTicket : GEOAbstractTicket {
    GEOPDPlaceRequest *_request;
    id _requestToken;
    GEOPDPlaceResponse *_response;
}

- (id)initWithTraits:(id)a0;
- (id)initWithRequest:(id)a0 traits:(id)a1;
- (void)cancel;
- (struct { int x0; union { int x0; int x1; int x2; } x1; })dataRequestKind;
- (void).cxx_destruct;
- (void)performSubmitWithHandler:(id /* block */)a0 auditToken:(id)a1 timeout:(double)a2 networkActivity:(id /* block */)a3;
- (void)performSubmitWithHandler:(id /* block */)a0 timeout:(double)a1 networkActivity:(id /* block */)a2;

@end
