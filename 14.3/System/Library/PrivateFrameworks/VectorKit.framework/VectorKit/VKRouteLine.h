@class GEOComposedRoute, VKPolylineOverlayRenderRegion, NSSet, VKPolylineOverlay;
@protocol VKRouteLineObserverProtocol;

@interface VKRouteLine : NSObject {
    BOOL _matchToRoads;
    struct Matrix<double, 4, 4> { double _e[16]; } _inverseMatrix;
    double _boundsUnitsPerMeter;
    double _metersPerPoint;
    double _boundsInWorldUnit;
    double _viewUnitsPerPoint;
    struct fast_shared_ptr<md::RouteLineSection, std::allocator> { struct _fast_shared_ptr_control *_control; } _userLocationSection;
    struct PolylineCoordinate { unsigned int index; float offset; } _userLocationIndex;
    struct Matrix<float, 2, 1> { float _e[2]; } _userLocation;
    double _lastTrafficTimeStamp;
    NSSet *_retainedTiles;
    struct ManeuverArrowCoordinates { struct vector<md::ManeuverArrowInfo, std::__1::allocator<md::ManeuverArrowInfo> > { struct ManeuverArrowInfo *__begin_; struct ManeuverArrowInfo *__end_; struct __compressed_pair<md::ManeuverArrowInfo *, std::__1::allocator<md::ManeuverArrowInfo> > { struct ManeuverArrowInfo *__value_; } __end_cap_; } _maneuverArrows; } _maneuverArrowCoordinates;
    double _builtViewUnitsPerPoint;
}

@property BOOL hasNewRoadMatches;
@property (readonly, nonatomic) struct vector<geo::fast_shared_ptr<md::RouteLineSection, std::allocator>, std::__1::allocator<geo::fast_shared_ptr<md::RouteLineSection, std::allocator> > > { struct fast_shared_ptr<md::RouteLineSection, std::allocator> *__begin_; struct fast_shared_ptr<md::RouteLineSection, std::allocator> *__end_; struct __compressed_pair<geo::fast_shared_ptr<md::RouteLineSection, std::allocator> *, std::__1::allocator<geo::fast_shared_ptr<md::RouteLineSection, std::allocator> > > { struct fast_shared_ptr<md::RouteLineSection, std::allocator> *__value_; } __end_cap_; } sections;
@property (readonly, nonatomic) struct Box<double, 2> { struct Matrix<double, 2, 1> { double _e[2]; } _minimum; struct Matrix<double, 2, 1> { double _e[2]; } _maximum; } bounds;
@property (readonly, nonatomic) VKPolylineOverlayRenderRegion *renderRegion;
@property (readonly, nonatomic) VKPolylineOverlay *overlay;
@property (readonly, nonatomic) GEOComposedRoute *composedRoute;
@property (nonatomic) id<VKRouteLineObserverProtocol> observer;
@property (nonatomic) double simplificationEpsilonPoints;

- (void).cxx_destruct;
- (id)initWithPolylineOverlay:(id)a0;
- (void)forEachSection:(id /* block */)a0;
- (void)createMeshIfNecessary:(long long)a0;
- (void)dealloc;
- (BOOL)needsUpdateForViewingScale:(double)a0;
- (BOOL)buildRouteLine:(id)a0 matchToRoads:(BOOL)a1 viewUnitsPerPoint:(double)a2 force:(BOOL)a3;
- (void)generateArrowsForManeuverDisplayMode:(int)a0 routeLineWidth:(double)a1;
- (void)splitRouteLineAtAnnotation:(id)a0;
- (struct vector<gm::Matrix<float, 2, 1>, std::__1::allocator<gm::Matrix<float, 2, 1> > > { struct Matrix<float, 2, 1> *x0; struct Matrix<float, 2, 1> *x1; struct __compressed_pair<gm::Matrix<float, 2, 1> *, std::__1::allocator<gm::Matrix<float, 2, 1> > > { struct Matrix<float, 2, 1> *x0; } x2; })maneuverPoints;
- (struct Matrix<double, 4, 4> { double x0[16]; })maneuverTransform;
- (id).cxx_construct;
- (void)_updateBounds:(id)a0;
- (void)_updateTilesCovered:(id)a0;
- (BOOL)isTrafficUpToDate;
- (BOOL)isTrafficUptoDate:(double)a0;
- (struct Matrix<double, 4, 4> { double x0[16]; })inverseManeuverTransform;
- (double)boundsUnitsPerMeter;

@end
