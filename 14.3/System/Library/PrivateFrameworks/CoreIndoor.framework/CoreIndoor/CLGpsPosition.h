@interface CLGpsPosition : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > > { struct duration<long long, std::__1::ratio<1, 1000000000> > { long long __rep_; } __d_; } expiry;
@property (readonly, nonatomic) struct { int suitability; struct { double latitude; double longitude; } coordinate; double horizontalAccuracy; double altitude; double verticalAccuracy; double speed; double speedAccuracy; double course; double courseAccuracy; double timestamp; int confidence; double lifespan; int type; struct { double latitude; double longitude; } rawCoordinate; double rawCourse; int floor; unsigned int integrity; int referenceFrame; int rawReferenceFrame; int signalEnvironmentType; } gpsLocation;
@property (readonly, nonatomic) struct { double odometer; double deltaDistance; double deltaDistanceAccuracy; double timestampGps; double machtime; float horzUncSemiMaj; float horzUncSemiMin; float horzUncSemiMajAz; BOOL isFitnessMatch; int matchQuality; struct { double latitude; double longitude; } matchCoordinate; double matchCourse; int matchFormOfWay; int matchRoadClass; BOOL matchShifted; struct { double rawUnmodifiedCourse; double rawUnmodifiedCourseUnc; BOOL isStatic; BOOL isMounted; } mapMatcherData; struct { double value; double std; } pressure; int undulationModel; float undulation; struct { double latitude; double longitude; } specialCoordinate; double specialHorizontalAccuracy; double machContinuousTime; int originDevice; BOOL isMatcherPropagatedCoordinates; double slope; double maxAbsSlope; double groundAltitude; double groundAltitudeUncertainty; double rawHorizontalAccuracy; double rawCourseAccuracy; BOOL isCoordinateFused; struct { double latitude; double longitude; } fusedCoordinate; double fusedHorizontalAccuracy; int fusedReferenceFrame; double fusedCourse; double fusedCourseAccuracy; } gpsLocationPrivate;

- (id)init;
- (id)initWithLocation:(const struct { int x0; struct { double x0; double x1; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; int x10; double x11; int x12; struct { double x0; double x1; } x13; double x14; int x15; unsigned int x16; int x17; int x18; int x19; } *)a0 andPrivateLocation:(const struct { double x0; double x1; double x2; double x3; double x4; float x5; float x6; float x7; BOOL x8; int x9; struct { double x0; double x1; } x10; double x11; int x12; int x13; BOOL x14; struct { double x0; double x1; BOOL x2; BOOL x3; } x15; struct { double x0; double x1; } x16; int x17; float x18; struct { double x0; double x1; } x19; double x20; double x21; int x22; BOOL x23; double x24; double x25; double x26; double x27; double x28; double x29; BOOL x30; struct { double x0; double x1; } x31; double x32; int x33; double x34; double x35; } *)a1;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id).cxx_construct;
- (BOOL)isStaleFix:(struct time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > > { struct duration<long long, std::__1::ratio<1, 1000000000> > { long long x0; } x0; })a0;
- (void)encodeWithCoder:(id)a0;

@end
