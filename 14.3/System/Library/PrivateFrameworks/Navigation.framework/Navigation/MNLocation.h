@class NSDate, NSUUID, GEORouteMatch, NSString, CLLocation, GEORoadMatch, GEONavigationMatchInfo;

@interface MNLocation : CLLocation <NSSecureCoding> {
    unsigned long long _traceIndex;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int _nav_source;
@property (nonatomic) unsigned long long traceIndex;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) GEORoadMatch *roadMatch;
@property (retain, nonatomic) CLLocation *rawLocation;
@property (readonly, nonatomic) NSUUID *routeID;
@property (retain, nonatomic) GEORouteMatch *routeMatch;
@property (retain, nonatomic) GEONavigationMatchInfo *detailedMatchInfo;
@property (copy, nonatomic) NSString *roadName;
@property (copy, nonatomic) NSString *shieldText;
@property (nonatomic) long long shieldType;
@property (nonatomic) unsigned int roadLineType;
@property (nonatomic) int rampType;
@property (nonatomic) unsigned long long speedLimit;
@property (nonatomic) BOOL speedLimitIsMPH;
@property (nonatomic) long long speedLimitShieldType;
@property (nonatomic) BOOL isDirectional;
@property (nonatomic) BOOL locationUnreliable;
@property (readonly, nonatomic) unsigned long long stepIndex;
@property (readonly, nonatomic) BOOL isProjected;
@property (retain, nonatomic) NSDate *expirationDate;
@property (retain, nonatomic) NSDate *originalDate;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } rawShiftedCoordinate;
@property (nonatomic) BOOL isLeeched;

- (BOOL)isEqualToLocation:(id)a0;
- (id)initWithRoadMatch:(id)a0 rawLocation:(id)a1 locationMatchType:(unsigned long long)a2;
- (id)matchInfo;
- (void).cxx_destruct;
- (id)initWithGEOLocation:(id)a0;
- (struct CLLocationCoordinate2D { double x0; double x1; })_navigation_rawShiftedCoordinate;
- (id)initWithCoder:(id)a0;
- (id)propagatedLocationForTimeInterval:(double)a0 shouldProjectAlongRoute:(BOOL)a1;
- (id)initWithClientLocation:(struct { int x0; struct { double x0; double x1; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; int x10; double x11; int x12; struct { double x0; double x1; } x13; double x14; int x15; unsigned int x16; int x17; int x18; int x19; })a0;
- (id)description;
- (struct { struct { id x0; char *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned int x6; unsigned long long x7; BOOL x8; unsigned long long x9; float x10; unsigned long long x11; id x12; int x13; } x0; unsigned long long x1; unsigned long long x2; int x3; int x4; int x5; unsigned long long x6; unsigned long long x7; unsigned int x8; unsigned int x9; union { struct { struct { float x0; float x1; } x0; struct { float x0; float x1; } x1; } x0; struct { float x0; float x1; float x2; float x3; } x1; } x10; struct *x11; struct { unsigned short x0[2]; unsigned short x1[2]; } x12; unsigned char x13; BOOL x14; unsigned char x15; BOOL x16; BOOL x17; unsigned char x18; BOOL x19; unsigned short x20; struct _NSRange { unsigned long long x0; unsigned long long x1; } x21; BOOL x22; unsigned int x23; } *)_roadFeature;
- (id)initWithRawLocation:(id)a0 locationMatchType:(unsigned long long)a1;
- (BOOL)_navigation_isStale;
- (id)_navigation_detailedMatchInfo;
- (BOOL)_navigation_hasValidCourse;
- (id)initWithRawLocation:(id)a0;
- (id)_referenceFrameAsString:(int)a0;
- (id)initWithRouteMatch:(id)a0 rawLocation:(id)a1 locationMatchType:(unsigned long long)a2;
- (id)_navigation_routeMatch;
- (void)encodeWithCoder:(id)a0;

@end
