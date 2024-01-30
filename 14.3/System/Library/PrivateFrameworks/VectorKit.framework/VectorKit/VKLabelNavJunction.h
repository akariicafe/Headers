@class VKLabelNavRoad, NSString, VKLabelNavRoadLabel, NSMutableArray;

@interface VKLabelNavJunction : NSObject <VKLabelNavFeature> {
    BOOL _foundRoads;
    int _largestRoadClass;
    struct { struct { id x0; char *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned int x6; unsigned long long x7; BOOL x8; unsigned long long x9; float x10; unsigned long long x11; id x12; int x13; } x0; struct { float x0; float x1; } x1; float x2; float x3; float x4; struct { float x0; float x1; } x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; short x10; short x11; unsigned char x12; float x13; float x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned char x19; unsigned char x20; unsigned char x21; unsigned char x22; BOOL x23; BOOL x24; BOOL x25; BOOL x26; BOOL x27; BOOL x28; BOOL x29; BOOL x30; } *_labelFeature;
    BOOL _areLabelsDisabled;
    BOOL _cachedSignVisibility[8];
    BOOL _isVisibilityCached[8];
    struct Matrix<double, 3, 1> { double _e[3]; } _worldCoordinate;
    double _sortValue;
}

@property (readonly, nonatomic) struct shared_ptr<md::LabelTile> { struct LabelTile *__ptr_; struct __shared_weak_count *__cntrl_; } tile;
@property (readonly, nonatomic) struct { unsigned int x0; unsigned int x1; struct *x2; } *geoJunction;
@property (readonly, nonatomic) struct Matrix<float, 2, 1> { float _e[2]; } tileCoordinate;
@property (nonatomic) struct PolylineCoordinate { unsigned int index; float offset; } routeOffset;
@property (readonly, nonatomic) NSMutableArray *roads;
@property (readonly, nonatomic) VKLabelNavRoad *outgoingRoad;
@property (readonly, nonatomic) VKLabelNavRoad *incomingRoad;
@property (nonatomic) float distanceFromPreviousShieldLabel;
@property (nonatomic) BOOL isOnDualCarriageway;
@property (readonly, nonatomic) BOOL hasSharedRouteDirection;
@property (nonatomic) struct Matrix<float, 2, 1> { float _e[2]; } sharedRouteDirection;
@property (readonly, nonatomic) BOOL isOnRoute;
@property (readonly, nonatomic) BOOL isIntraRamp;
@property (readonly, nonatomic) BOOL isTileEdgeJunction;
@property (nonatomic) BOOL isRouteRefineJunction;
@property (readonly, nonatomic) BOOL isRoadTerminus;
@property (readonly, nonatomic) BOOL isIntersection;
@property (readonly, nonatomic) BOOL isMultiRoadIntersection;
@property (readonly, nonatomic) BOOL isAwayFromRoute;
@property (readonly, nonatomic) BOOL isOffRouteGraph;
@property (readonly, nonatomic) BOOL isOverpass;
@property (nonatomic) BOOL isRouteOverpass;
@property (readonly, nonatomic) int largestRoadClass;
@property (nonatomic) unsigned long long depthFromRoute;
@property (nonatomic) VKLabelNavJunction *overpassJunction;
@property (readonly, nonatomic) double worldUnitsPerMeter;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) VKLabelNavRoadLabel *junctionSign;
@property (readonly, nonatomic) BOOL isVisible;
@property (readonly, nonatomic) int requiredLabelPlacement;
@property (nonatomic) int preferredLabelPlacement;
@property (readonly, nonatomic) BOOL isRamp;
@property (readonly, nonatomic) NSString *shieldDisplayGroup;
@property (readonly, nonatomic) BOOL isStartOfRoadName;
@property (readonly, nonatomic) BOOL isInGuidance;
@property (readonly, nonatomic) long long intraRoadPriority;
@property (readonly, nonatomic) BOOL isGuidanceStepStart;
@property (readonly, nonatomic) BOOL isEtaFeature;
@property (readonly, nonatomic) BOOL isTrafficCameraFeature;
@property (nonatomic) BOOL isPicked;

- (void)_updateWithNavContext:(struct NavContext { void /* function */ **x0; struct LabelManager *x1; struct MapNavLabeler *x2; struct LabelLayoutContext *x3; struct LabelNavLayoutContext *x4; } *)a0 threshold:(double)a1;
- (void)_updateWithNavContext:(struct NavContext { void /* function */ **x0; struct LabelManager *x1; struct MapNavLabeler *x2; struct LabelLayoutContext *x3; struct LabelNavLayoutContext *x4; } *)a0;
- (void)prepareStyleVarsWithContext:(struct NavContext { void /* function */ **x0; struct LabelManager *x1; struct MapNavLabeler *x2; struct LabelLayoutContext *x3; struct LabelNavLayoutContext *x4; } *)a0;
- (void).cxx_destruct;
- (void)createLabelWithNavContext:(struct NavContext { void /* function */ **x0; struct LabelManager *x1; struct MapNavLabeler *x2; struct LabelLayoutContext *x3; struct LabelNavLayoutContext *x4; } *)a0 isDrivingSideRight:(BOOL)a1 artworkCache:(struct VKLabelNavArtworkCache { struct unique_ptr<geo::Cache<unsigned long, geo::_retain_ptr<VKRoadSignArtwork *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::hash<unsigned long>, LRUPolicy>, std::__1::default_delete<geo::Cache<unsigned long, geo::_retain_ptr<VKRoadSignArtwork *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::hash<unsigned long>, LRUPolicy> > > { struct __compressed_pair<geo::Cache<unsigned long, geo::_retain_ptr<VKRoadSignArtwork *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::hash<unsigned long>, LRUPolicy> *, std::__1::default_delete<geo::Cache<unsigned long, geo::_retain_ptr<VKRoadSignArtwork *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::hash<unsigned long>, LRUPolicy> > > { struct Cache<unsigned long, geo::_retain_ptr<VKRoadSignArtwork *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::hash<unsigned long>, LRUPolicy> *x0; } x0; } x0; struct unique_ptr<geo::Cache<unsigned long, std::__1::shared_ptr<grl::IconImage>, std::__1::hash<unsigned long>, LRUPolicy>, std::__1::default_delete<geo::Cache<unsigned long, std::__1::shared_ptr<grl::IconImage>, std::__1::hash<unsigned long>, LRUPolicy> > > { struct __compressed_pair<geo::Cache<unsigned long, std::__1::shared_ptr<grl::IconImage>, std::__1::hash<unsigned long>, LRUPolicy> *, std::__1::default_delete<geo::Cache<unsigned long, std::__1::shared_ptr<grl::IconImage>, std::__1::hash<unsigned long>, LRUPolicy> > > { struct Cache<unsigned long, std::__1::shared_ptr<grl::IconImage>, std::__1::hash<unsigned long>, LRUPolicy> *x0; } x0; } x1; struct unique_ptr<md::RoadSignArtworkGenerator, std::__1::default_delete<md::RoadSignArtworkGenerator> > { struct __compressed_pair<md::RoadSignArtworkGenerator *, std::__1::default_delete<md::RoadSignArtworkGenerator> > { struct RoadSignArtworkGenerator *x0; } x0; } x2; BOOL x3; struct LabelImageLoader *x4; } *)a2;
- (void)evaluateCrossStreets;
- (void)evaluateCrossStreetsUsingRouteJunction:(id)a0;
- (void)layoutWithNavContext:(struct NavContext { void /* function */ **x0; struct LabelManager *x1; struct MapNavLabeler *x2; struct LabelLayoutContext *x3; struct LabelNavLayoutContext *x4; } *)a0;
- (void)dealloc;
- (unsigned char)_signOrientationWithDrivingSide:(BOOL)a0;
- (struct Matrix<double, 3, 1> { double x0[3]; })_anchorCoordinateForSignOrientation:(unsigned char)a0;
- (id)initWithGEOJunction:(struct { unsigned int x0; unsigned int x1; struct *x2; } *)a0 routeOffset:(struct PolylineCoordinate { unsigned int x0; float x1; })a1 tile:(const struct shared_ptr<md::LabelTile> { struct LabelTile *x0; struct __shared_weak_count *x1; } *)a2;
- (id)initWithRoadEdge:(const struct { struct *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; struct *x5; struct *x6; } *)a0 atA:(BOOL)a1 routeOffset:(struct PolylineCoordinate { unsigned int x0; float x1; })a2 tile:(const struct shared_ptr<md::LabelTile> { struct LabelTile *x0; struct __shared_weak_count *x1; } *)a3;
- (BOOL)matchesLocationForJunction:(id)a0;
- (void)addRouteEdge:(const struct VKLabelNavRouteRoadEdge { struct PolylineCoordinate { unsigned int x0; float x1; } x0; struct PolylineCoordinate { unsigned int x0; float x1; } x1; struct *x2; } *)a0 atA:(BOOL)a1;
- (id)description;
- (id).cxx_construct;
- (void)findRoads;

@end
