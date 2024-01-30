@class GEOComposedRoute, VKRouteEtaDescription, NSArray;

@interface VKRouteInfo : NSObject

@property (readonly, nonatomic) GEOComposedRoute *route;
@property (retain, nonatomic) VKRouteEtaDescription *etaDescription;
@property (readonly, nonatomic) NSArray *waypoints;
@property (readonly, nonatomic) BOOL hasRouteEta;
@property (nonatomic) BOOL hasFocus;
@property (readonly, nonatomic) NSArray *trafficAnnotations;
@property (readonly, nonatomic) NSArray *exitSignAnnotations;

- (void)dealloc;
- (id)initWithComposedRoute:(id)a0 etaDescription:(id)a1;
- (void)_decodeVisualInfos:(id)a0 withRouteEtaType:(long long)a1 into:(id)a2;
- (id)initWithComposedRoute:(id)a0 etaText:(id)a1;

@end
