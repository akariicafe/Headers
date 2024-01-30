@class NSString, NSArray, NSURL, GEODirectionsResponse, MKMapItem;

@interface MKDirectionsResponse : NSObject {
    GEODirectionsResponse *_geoResponse;
}

@property (readonly, retain, nonatomic) NSURL *_mapsURL;
@property (readonly, retain, nonatomic) GEODirectionsResponse *_geoResponse;
@property (readonly, retain, nonatomic) NSString *_incidentDescription;
@property (readonly, nonatomic) MKMapItem *source;
@property (readonly, nonatomic) MKMapItem *destination;
@property (readonly, nonatomic) NSArray *routes;

+ (id)_responseWithGEODirectionsRouteResponse:(id)a0 routeRequest:(id)a1 request:(id)a2 origin:(id)a3 destination:(id)a4 error:(id *)a5;

- (void).cxx_destruct;
- (id)_initWithGEORouteResponse:(id)a0 routeRequest:(id)a1 request:(id)a2 origin:(id)a3 destination:(id)a4;

@end
