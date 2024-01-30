@class NSString, NSArray, NSHashTable, VKRouteInfo, GEOComposedWaypoint;

@interface VKRouteContext : NSObject {
    BOOL _hasContextChangedForLabels;
    NSHashTable *_labelObservers;
    BOOL _hasContextChangedForRouteLine;
    NSHashTable *_routeLineObservers;
    BOOL _hasContextChangedForAlternateRouteLines;
    NSHashTable *_alternateRouteLineObservers;
    struct multimap<unsigned int, std::vector<RouteSection>, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, std::vector<RouteSection>>>> { struct __tree<std::__value_type<unsigned int, std::vector<RouteSection>>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, std::vector<RouteSection>>, std::less<unsigned int>, true>, std::allocator<std::__value_type<unsigned int, std::vector<RouteSection>>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, std::vector<RouteSection>>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, std::vector<RouteSection>>, std::less<unsigned int>, true>> { unsigned long long __value_; } __pair3_; } __tree_; } _shareSections;
}

@property (readonly, nonatomic) VKRouteInfo *routeInfo;
@property (readonly, nonatomic) unsigned char useType;
@property (nonatomic) struct PolylineCoordinate { unsigned int index; float offset; } routeOffset;
@property (nonatomic) long long currentSegmentIndex;
@property (nonatomic) long long currentStepIndex;
@property (nonatomic) BOOL snappingToTransitLines;
@property (readonly, nonatomic) GEOComposedWaypoint *currentWaypoint;
@property (readonly, nonatomic) unsigned char currentWaypointProximity;
@property (nonatomic) long long inspectedSegmentIndex;
@property (nonatomic) long long inspectedStepIndex;
@property (nonatomic) struct { double latitude; double longitude; } puckLocation;
@property (nonatomic) float puckRadius;
@property (nonatomic) unsigned long long puckSnappedStopID;
@property (retain, nonatomic) NSString *locale;
@property (retain, nonatomic) NSString *accessPointEntryName;
@property (retain, nonatomic) NSString *accessPointExitName;
@property (retain, nonatomic) NSArray *alternateRoutes;
@property (readonly, nonatomic) unsigned long long totalRouteCount;

- (id).cxx_construct;
- (id)description;
- (void).cxx_destruct;
- (void)addShareSections:(const struct { id x0; struct PolylineCoordinate { unsigned int x0; float x1; } x1; struct PolylineCoordinate { unsigned int x0; float x1; } x2; } *)a0 shareCount:(unsigned int)a1;
- (id)initWithComposedRoute:(id)a0 useType:(unsigned char)a1;
- (id)_hashTableForObserverType:(unsigned char)a0;
- (void)_setHasContextChangedForObserverType:(unsigned char)a0 withValue:(BOOL)a1;
- (void)addObserver:(id)a0 withType:(unsigned char)a1;
- (void)forEachRouteInfo:(id /* block */)a0;
- (void)forEachSectionWithShareCount:(unsigned int)a0 dothis:(id /* block */)a1;
- (id)initWithRouteInfo:(id)a0 useType:(unsigned char)a1;
- (void)removeObserver:(id)a0 withType:(unsigned char)a1;
- (void)resetNotificationsForObserverType:(unsigned char)a0;
- (void)setCurrentWaypoint:(id)a0 withProximity:(unsigned char)a1;

@end
