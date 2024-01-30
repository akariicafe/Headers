@class GEODirectionsRequest, GEODirectionsRequester;

@interface GEODirectionsServiceRequest : NSObject {
    GEODirectionsRequest *_directionsRequest;
    GEODirectionsRequester *_directionsRequester;
    BOOL _isCancelled;
}

- (void)cancel;
- (void).cxx_destruct;
- (id)initWithDirectionsRequest:(id)a0 directionsRequester:(id)a1;

@end
