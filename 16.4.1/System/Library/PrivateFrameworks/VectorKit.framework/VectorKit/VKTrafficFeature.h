@class NSString, GEOFeatureStyleAttributes;

@interface VKTrafficFeature : NSObject <NSCopying> {
    struct { double x; double y; double z; } _worldPoint;
    double _approachingDistanceInMeters;
}

@property (readonly, nonatomic) struct Mercator3<double> { double x0[3]; } mercatorPoint;
@property (readonly, nonatomic) float minZoom;
@property (readonly, nonatomic) float maxZoom;
@property (readonly, nonatomic) int groupIdentifier;
@property (readonly, nonatomic) unsigned int groupItemVerticalDisplayOrder;
@property (readonly, nonatomic) unsigned int groupItemHorizontalDisplayOrder;
@property (readonly, nonatomic) unsigned char collisionPriority;
@property (readonly, nonatomic) double routeOffsetInMeters;
@property (readonly, nonatomic) double facingAzimuth;
@property (nonatomic) BOOL shouldUpdateStyle;
@property (nonatomic) long long navigationState;
@property (nonatomic) struct optional<gss::RouteLegWhen> { BOOL _hasValue; union ValueUnion { unsigned char data[1]; unsigned char type; } _value; } routeLegWhen;
@property (readonly, nonatomic) struct vector<GeoCodecsFeatureStylePair, geo::StdAllocator<GeoCodecsFeatureStylePair, mdm::Allocator>> { struct GeoCodecsFeatureStylePair *x0; struct GeoCodecsFeatureStylePair *x1; struct __compressed_pair<GeoCodecsFeatureStylePair *, geo::StdAllocator<GeoCodecsFeatureStylePair, mdm::Allocator>> { struct GeoCodecsFeatureStylePair *x0; struct StdAllocator<GeoCodecsFeatureStylePair, mdm::Allocator> { struct Allocator *x0; } x1; } x2; } attributes;
@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) long long trafficFeatureType;
@property (readonly, nonatomic) struct PolylineCoordinate { unsigned int index; float offset; } routeOffset;
@property (readonly, nonatomic) struct PolylineCoordinate { unsigned int index; float offset; } approachingRouteOffset;
@property (readonly, nonatomic) struct { double latitude; double longitude; double altitude; } position;
@property (readonly, nonatomic) GEOFeatureStyleAttributes *styleAttributes;

+ (id)stringForFeatureType:(long long)a0;
+ (id)newTrafficFeatureForEnrouteNotice:(id)a0 onRoute:(id)a1;
+ (id)stringForNavState:(long long)a0;

- (BOOL)isGrouped;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isSignal;
- (void).cxx_destruct;
- (BOOL)isRouteAnnotation;
- (BOOL)isCamera;
- (id)initWithEnrouteNotice:(id)a0 onRoute:(id)a1;
- (id)initWithFeatureType:(long long)a0 uniqueIdentifier:(id)a1 position:(struct { double x0; double x1; double x2; })a2 direction:(double)a3 routeOffset:(struct PolylineCoordinate { unsigned int x0; float x1; })a4 routeOffsetInMeters:(double)a5;
- (id)initWithFeatureType:(long long)a0 uniqueIdentifier:(id)a1 position:(struct { double x0; double x1; double x2; })a2 onRoute:(id)a3;
- (id)initWithFeatureType:(long long)a0 uniqueIdentifier:(id)a1 routeOffset:(struct PolylineCoordinate { unsigned int x0; float x1; })a2 onRoute:(id)a3;
- (BOOL)isAheadButNotApproaching;
- (BOOL)isApproaching;
- (BOOL)isBehind;
- (BOOL)isIncident;
- (BOOL)isUserReportedIncident;
- (void)populateDebugNode:(void *)a0;
- (void)updateNavigationStateForRouteUserOffset:(const struct PolylineCoordinate { unsigned int x0; float x1; } *)a0;

@end
