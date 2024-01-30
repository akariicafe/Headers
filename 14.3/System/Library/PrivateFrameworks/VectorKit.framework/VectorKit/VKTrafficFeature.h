@class NSString, GEOFeatureStyleAttributes;

@interface VKTrafficFeature : NSObject <NSCopying> {
    struct Matrix<double, 3, 1> { double _e[3]; } _worldPoint;
    double _approachingDistanceInMeters;
}

@property (readonly, nonatomic) struct Mercator2<double> { double x0[2]; } mercatorPoint;
@property (readonly, nonatomic) float minZoom;
@property (readonly, nonatomic) float maxZoom;
@property (readonly, nonatomic) int groupIdentifier;
@property (readonly, nonatomic) unsigned int groupItemVerticalDisplayOrder;
@property (readonly, nonatomic) unsigned int groupItemHorizontalDisplayOrder;
@property (readonly, nonatomic) unsigned char collisionPriority;
@property (readonly, nonatomic) double routeOffsetInMeters;
@property (nonatomic) BOOL shouldUpdateStyle;
@property (nonatomic) long long navigationState;
@property (nonatomic) struct optional<gss::RouteLegWhen> { BOOL _hasValue; union ValueUnion { unsigned char data[1]; unsigned char type; } _value; } routeLegWhen;
@property (readonly, nonatomic) struct vector<GEOFeatureStylePair, geo::StdAllocator<GEOFeatureStylePair, mdm::Allocator> > { struct *x0; struct *x1; struct __compressed_pair<GEOFeatureStylePair *, geo::StdAllocator<GEOFeatureStylePair, mdm::Allocator> > { struct *x0; struct StdAllocator<GEOFeatureStylePair, mdm::Allocator> { struct Allocator *x0; } x1; } x2; } attributes;
@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) long long trafficFeatureType;
@property (readonly, nonatomic) struct PolylineCoordinate { unsigned int index; float offset; } routeOffset;
@property (readonly, nonatomic) struct PolylineCoordinate { unsigned int index; float offset; } approachingRouteOffset;
@property (readonly, nonatomic) struct { double latitude; double longitude; } position;
@property (readonly, nonatomic) GEOFeatureStyleAttributes *styleAttributes;

+ (id)newTrafficFeatureForEnrouteNotice:(id)a0 onRoute:(id)a1;
+ (id)stringForFeatureType:(long long)a0;
+ (id)stringForNavState:(long long)a0;

- (BOOL)isGrouped;
- (BOOL)isBehind;
- (id)initWithEnrouteNotice:(id)a0 onRoute:(id)a1;
- (void)populateDebugNode:(struct DebugTreeNode { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x0; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x1; struct vector<gdc::DebugTreeNode, std::__1::allocator<gdc::DebugTreeNode> > { struct DebugTreeNode *x0; struct DebugTreeNode *x1; struct __compressed_pair<gdc::DebugTreeNode *, std::__1::allocator<gdc::DebugTreeNode> > { struct DebugTreeNode *x0; } x2; } x2; struct vector<gdc::DebugTreeProperty, std::__1::allocator<gdc::DebugTreeProperty> > { struct DebugTreeProperty *x0; struct DebugTreeProperty *x1; struct __compressed_pair<gdc::DebugTreeProperty *, std::__1::allocator<gdc::DebugTreeProperty> > { struct DebugTreeProperty *x0; } x2; } x3; } *)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithFeatureType:(long long)a0 uniqueIdentifier:(id)a1 routeOffset:(struct PolylineCoordinate { unsigned int x0; float x1; })a2 onRoute:(id)a3;
- (BOOL)isAheadButNotApproaching;
- (id)initWithFeatureType:(long long)a0 uniqueIdentifier:(id)a1 position:(struct { double x0; double x1; })a2 routeOffset:(struct PolylineCoordinate { unsigned int x0; float x1; })a3 routeOffsetInMeters:(double)a4;
- (BOOL)isCamera;
- (id).cxx_construct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isRouteAnnotation;
- (BOOL)isSignal;
- (BOOL)isApproaching;
- (id)initWithFeatureType:(long long)a0 uniqueIdentifier:(id)a1 position:(struct { double x0; double x1; })a2 onRoute:(id)a3;
- (BOOL)isIncident;
- (void)updateNavigationStateForRouteUserOffset:(const struct PolylineCoordinate { unsigned int x0; float x1; } *)a0;

@end
