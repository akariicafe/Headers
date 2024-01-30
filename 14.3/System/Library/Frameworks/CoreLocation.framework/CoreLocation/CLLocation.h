@class CLLocationMatchInfo, NSString, CLFloor, NSData, NSDate, _CLLocationGroundAltitude;

@interface CLLocation : NSObject <NSCopying, NSSecureCoding> {
    id _internal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) CLLocationMatchInfo *matchInfo;
@property (readonly, nonatomic) _CLLocationGroundAltitude *_groundAltitude;
@property (readonly, nonatomic) struct { int x0; struct { double x0; double x1; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; int x10; double x11; int x12; struct { double x0; double x1; } x13; double x14; int x15; unsigned int x16; int x17; int x18; int x19; } clientLocation;
@property (readonly, nonatomic) NSString *iso6709Notation;
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) NSData *coarseMetaData;
@property (nonatomic) int referenceFrame;
@property (readonly, nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } rawCoordinate;
@property (readonly, nonatomic) double rawHorizontalAccuracy;
@property (readonly, nonatomic) double rawCourse;
@property (readonly, nonatomic) double rawCourseAccuracy;
@property (readonly, nonatomic) unsigned int integrity;
@property (readonly, nonatomic) double trustedTimestamp;
@property (readonly, nonatomic) BOOL isAltitudeWgs84Available;
@property (readonly, nonatomic) double altitudeWgs84;
@property (readonly, nonatomic, getter=isCoordinateFused) BOOL coordinateFused;
@property (readonly, nonatomic) int signalEnvironmentType;
@property (readonly, nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } coordinate;
@property (readonly, nonatomic) double altitude;
@property (readonly, nonatomic) double horizontalAccuracy;
@property (readonly, nonatomic) double verticalAccuracy;
@property (readonly, nonatomic) double course;
@property (readonly, nonatomic) double courseAccuracy;
@property (readonly, nonatomic) double speed;
@property (readonly, nonatomic) double speedAccuracy;
@property (readonly, copy, nonatomic) NSDate *timestamp;
@property (readonly, copy, nonatomic) CLFloor *floor;

+ (double)rangeForTransmitPower:(double)a0;
+ (id)filterOutliers:(id)a0 options:(id)a1;
+ (double)rangeForReductiveFilterOptions:(id)a0;
+ (id)deriveLocationFromLocations:(id)a0 options:(id)a1;
+ (id)locationByReductivelyFilteringLocations:(id)a0 options:(id)a1;
+ (id)filterOutliers:(id)a0;
+ (id)deriveLocationFromLocations:(id)a0;
+ (id)locationByReductivelyFilteringLocations:(id)a0;

- (id)initWithCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 altitude:(double)a1 horizontalAccuracy:(double)a2 verticalAccuracy:(double)a3 course:(double)a4 courseAccuracy:(double)a5 speed:(double)a6 speedAccuracy:(double)a7 timestamp:(id)a8;
- (id)init;
- (void)setHorizontalAccuracy:(double)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithClientLocation:(struct { int x0; struct { double x0; double x1; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; int x10; double x11; int x12; struct { double x0; double x1; } x13; double x14; int x15; unsigned int x16; int x17; int x18; int x19; })a0 matchInfo:(id)a1 trustedTimestamp:(double)a2 groundAltitude:(id)a3 fusionInfo:(id)a4 rawHorizontalAccuracy:(double)a5 rawCourseAccuracy:(double)a6 coarseMetaData:(id)a7;
- (id)_initWithCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 altitude:(double)a1 horizontalAccuracy:(double)a2 verticalAccuracy:(double)a3 course:(double)a4 courseAccuracy:(double)a5 speed:(double)a6 speedAccuracy:(double)a7 timestamp:(id)a8 floor:(int)a9;
- (void)unmatch;
- (void)dealloc;
- (id)shortDescription;
- (id)initWithCoder:(id)a0;
- (id)initWithClientLocation:(struct { int x0; struct { double x0; double x1; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; int x10; double x11; int x12; struct { double x0; double x1; } x13; double x14; int x15; unsigned int x16; int x17; int x18; int x19; })a0;
- (id)_initWithRTLocation:(id)a0;
- (id)description;
- (id)initWithLatitude:(double)a0 longitude:(double)a1;
- (id)initWithClientLocation:(struct { int x0; struct { double x0; double x1; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; int x10; double x11; int x12; struct { double x0; double x1; } x13; double x14; int x15; unsigned int x16; int x17; int x18; int x19; })a0 matchInfo:(id)a1 trustedTimestamp:(double)a2 groundAltitude:(id)a3 fusionInfo:(id)a4 rawHorizontalAccuracy:(double)a5 rawCourseAccuracy:(double)a6;
- (id)initWithClientLocation:(struct { int x0; struct { double x0; double x1; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; int x10; double x11; int x12; struct { double x0; double x1; } x13; double x14; int x15; unsigned int x16; int x17; int x18; int x19; })a0 clientLocationPrivate:(struct { double x0; double x1; double x2; double x3; double x4; float x5; float x6; float x7; BOOL x8; int x9; struct { double x0; double x1; } x10; double x11; int x12; int x13; BOOL x14; struct { double x0; double x1; BOOL x2; BOOL x3; } x15; struct { double x0; double x1; } x16; int x17; float x18; struct { double x0; double x1; } x19; double x20; double x21; int x22; BOOL x23; double x24; double x25; double x26; double x27; double x28; double x29; BOOL x30; struct { double x0; double x1; } x31; double x32; int x33; double x34; double x35; })a1 coarseMetaData:(id)a2;
- (id)jsonObject;
- (id)initWithClientLocation:(struct { int x0; struct { double x0; double x1; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; int x10; double x11; int x12; struct { double x0; double x1; } x13; double x14; int x15; unsigned int x16; int x17; int x18; int x19; })a0 coarseMetaData:(id)a1;
- (double)getDistanceFrom:(id)a0;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 altitude:(double)a1 horizontalAccuracy:(double)a2 verticalAccuracy:(double)a3 timestamp:(id)a4;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 altitude:(double)a1 horizontalAccuracy:(double)a2 verticalAccuracy:(double)a3 course:(double)a4 speed:(double)a5 timestamp:(id)a6;
- (id)snapToResolution:(double)a0;
- (id)propagateLocationToTime:(double)a0;
- (id)initWithClientLocation:(struct { int x0; struct { double x0; double x1; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; int x10; double x11; int x12; struct { double x0; double x1; } x13; double x14; int x15; unsigned int x16; int x17; int x18; int x19; })a0 matchInfo:(id)a1 trustedTimestamp:(double)a2;
- (id)initWithClientLocation:(struct { int x0; struct { double x0; double x1; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; int x10; double x11; int x12; struct { double x0; double x1; } x13; double x14; int x15; unsigned int x16; int x17; int x18; int x19; })a0 matchInfo:(id)a1;
- (id)initWithClientLocation:(struct { int x0; struct { double x0; double x1; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; int x10; double x11; int x12; struct { double x0; double x1; } x13; double x14; int x15; unsigned int x16; int x17; int x18; int x19; })a0 matchInfo:(id)a1 trustedTimestamp:(double)a2 groundAltitude:(id)a3;
- (double)distanceFromLocation:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithClientLocation:(struct { int x0; struct { double x0; double x1; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; int x10; double x11; int x12; struct { double x0; double x1; } x13; double x14; int x15; unsigned int x16; int x17; int x18; int x19; })a0 clientLocationPrivate:(struct { double x0; double x1; double x2; double x3; double x4; float x5; float x6; float x7; BOOL x8; int x9; struct { double x0; double x1; } x10; double x11; int x12; int x13; BOOL x14; struct { double x0; double x1; BOOL x2; BOOL x3; } x15; struct { double x0; double x1; } x16; int x17; float x18; struct { double x0; double x1; } x19; double x20; double x21; int x22; BOOL x23; double x24; double x25; double x26; double x27; double x28; double x29; BOOL x30; struct { double x0; double x1; } x31; double x32; int x33; double x34; double x35; })a1;

@end
