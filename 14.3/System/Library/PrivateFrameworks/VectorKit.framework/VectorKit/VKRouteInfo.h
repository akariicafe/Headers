@class GEOComposedRoute, VKRouteEtaDescription, NSArray;

@interface VKRouteInfo : NSObject

@property (readonly, nonatomic) GEOComposedRoute *route;
@property (retain, nonatomic) VKRouteEtaDescription *etaDescription;
@property (readonly, nonatomic) NSArray *waypoints;
@property (readonly, nonatomic) BOOL hasRouteEta;
@property (nonatomic) BOOL hasFocus;

- (void)dealloc;
- (id)initWithComposedRoute:(id)a0 etaDescription:(id)a1;
- (id)initWithComposedRoute:(id)a0 etaText:(id)a1;

@end
