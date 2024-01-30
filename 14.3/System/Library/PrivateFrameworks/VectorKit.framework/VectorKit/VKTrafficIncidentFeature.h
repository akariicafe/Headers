@class GEORestrictionInfo, NSString, NSArray, GEOFormattedString, NSDate;

@interface VKTrafficIncidentFeature : VKTrafficFeature {
    GEORestrictionInfo *_restrictionInfo;
}

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) NSString *uniqueString;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) BOOL isNotForDisplay;
@property (nonatomic) long long routeRelevance;
@property (nonatomic) BOOL isOnSelectedRoute;
@property (readonly, nonatomic) NSString *street;
@property (readonly, nonatomic) NSString *crossStreet;
@property (readonly, nonatomic) NSString *info;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSDate *lastUpdatedDate;
@property (readonly, nonatomic) GEOFormattedString *effectiveTimeRange;
@property (readonly, nonatomic) NSArray *restrictionDetails;
@property (readonly, nonatomic) GEOFormattedString *formattedTitle;
@property (readonly, nonatomic) GEOFormattedString *formattedSubtitle;
@property (readonly, nonatomic) long long significance;

+ (id)stringForIncidentType:(long long)a0;
+ (id)stringForRouteRelevance:(long long)a0;
+ (id)stringForIncidentSignificance:(long long)a0;
+ (long long)incidentTypeForGeoRouteIncident:(id)a0;

- (void)populateDebugNode:(struct DebugTreeNode { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x0; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x1; struct vector<gdc::DebugTreeNode, std::__1::allocator<gdc::DebugTreeNode> > { struct DebugTreeNode *x0; struct DebugTreeNode *x1; struct __compressed_pair<gdc::DebugTreeNode *, std::__1::allocator<gdc::DebugTreeNode> > { struct DebugTreeNode *x0; } x2; } x2; struct vector<gdc::DebugTreeProperty, std::__1::allocator<gdc::DebugTreeProperty> > { struct DebugTreeProperty *x0; struct DebugTreeProperty *x1; struct __compressed_pair<gdc::DebugTreeProperty *, std::__1::allocator<gdc::DebugTreeProperty> > { struct DebugTreeProperty *x0; } x2; } x3; } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasSameIdentifier:(id)a0;
- (void)dealloc;
- (id)initWithIncidentData:(const struct Incident { struct GeoCoordinates { struct Longitude { unsigned int x0; } x0; struct Latitude { unsigned int x0; } x1; int x2; } x0; struct String { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x1; struct String { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x2; int x3; struct String { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x4; struct String { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x5; long long x6; long long x7; long long x8; long long x9; int x10; unsigned char x11; BOOL x12; int x13; unsigned char x14; unsigned char x15; } *)a0 worldPoint:(struct Matrix<double, 3, 1> { double x0[3]; } *)a1;
- (id)initWithIncidentType:(long long)a0 uniqueIdentifier:(id)a1 position:(struct { double x0; double x1; })a2 routeRelevance:(long long)a3 laneType:(long long)a4 significance:(long long)a5 onRoute:(id)a6;
- (id)initWithRouteIncident:(id)a0 routeOffsetInMeters:(unsigned int)a1 routeRelevance:(long long)a2 onRoute:(id)a3;

@end
