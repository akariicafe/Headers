@class GEOComposedRoute, NSString, NSArray, MKRoutePolyline;

@interface MKRoute : NSObject

@property (readonly, nonatomic, getter=_geoComposedRoute) GEOComposedRoute *geoComposedRoute;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSArray *advisoryNotices;
@property (readonly, nonatomic) double distance;
@property (readonly, nonatomic) double expectedTravelTime;
@property (readonly, nonatomic) unsigned long long transportType;
@property (readonly, nonatomic) MKRoutePolyline *polyline;
@property (readonly, nonatomic) NSArray *steps;
@property (readonly, nonatomic) BOOL hasTolls;
@property (readonly, nonatomic) BOOL hasHighways;

- (void).cxx_destruct;
- (id)_initWithGEOComposedRoute:(id)a0;

@end
