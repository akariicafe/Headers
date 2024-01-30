@class GEOComposedRoute, NSArray, VKRouteEtaDescription, VKRouteRangeAnnotationInfo;

@interface VKRouteInfo : NSObject {
    VKRouteRangeAnnotationInfo *_routeEtaAnnotation;
}

@property (readonly, nonatomic) GEOComposedRoute *route;
@property (retain, nonatomic) VKRouteEtaDescription *etaDescription;
@property (retain, nonatomic) NSArray *routeLegEtaAnnotations;
@property (retain, nonatomic) NSArray *debugAnnotations;
@property (readonly, nonatomic) BOOL hasRouteEta;
@property (readonly, nonatomic) BOOL hasRouteLegEtas;
@property (nonatomic) BOOL hasFocus;
@property (readonly, nonatomic) NSArray *trafficAnnotations;
@property (readonly, nonatomic) NSArray *exitSignAnnotations;
@property (readonly, nonatomic) NSArray *waypoints;

- (void).cxx_destruct;
- (void)_decodeVisualInfos:(id)a0 withRouteEtaType:(long long)a1 into:(id)a2;
- (id)initWithComposedRoute:(id)a0 etaDescription:(id)a1;
- (id)initWithComposedRoute:(id)a0 etaText:(id)a1;
- (void)visitAnnotations:(id /* block */)a0;
- (id)waypointForWaypoint:(id)a0;

@end
