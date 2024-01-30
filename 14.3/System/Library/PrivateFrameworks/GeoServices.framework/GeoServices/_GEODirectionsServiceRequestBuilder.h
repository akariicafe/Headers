@class GEORouteAttributes;

@interface _GEODirectionsServiceRequestBuilder : NSObject {
    GEORouteAttributes *_builder;
    id /* block */ _block;
}

+ (id)builderFor:(id)a0 withBlock:(id /* block */)a1;

- (void).cxx_destruct;
- (BOOL)shouldRetryForError:(id)a0;
- (void)buildRequest:(id)a0 result:(id /* block */)a1;

@end
