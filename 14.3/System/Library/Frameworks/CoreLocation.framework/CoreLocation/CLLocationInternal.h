@class CLLocationMatchInfo, _CLLocationFusionInfo, NSData, _CLLocationGroundAltitude;

@interface CLLocationInternal : NSObject {
    struct { int suitability; struct { double latitude; double longitude; } coordinate; double horizontalAccuracy; double altitude; double verticalAccuracy; double speed; double speedAccuracy; double course; double courseAccuracy; double timestamp; int confidence; double lifespan; int type; struct { double latitude; double longitude; } rawCoordinate; double rawCourse; int floor; unsigned int integrity; int referenceFrame; int rawReferenceFrame; int signalEnvironmentType; } fLocation;
    CLLocationMatchInfo *fMatchInfo;
    _CLLocationGroundAltitude *fGroundAltitude;
    double fTrustedTimestamp;
    NSData *fCoarseMetaData;
    _CLLocationFusionInfo *fFusionInfo;
    double fRawHorizontalAccuracy;
    double fRawCourseAccuracy;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithClientLocation:(struct { int x0; struct { double x0; double x1; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; int x10; double x11; int x12; struct { double x0; double x1; } x13; double x14; int x15; unsigned int x16; int x17; int x18; int x19; })a0 matchInfo:(id)a1 trustedTimestamp:(double)a2 groundAltitude:(id)a3 fusionInfo:(id)a4 rawHorizontalAccuracy:(double)a5 rawCourseAccuracy:(double)a6 coarseMetaData:(id)a7;
- (void)dealloc;
- (id)initWithClientLocation:(struct { int x0; struct { double x0; double x1; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; int x10; double x11; int x12; struct { double x0; double x1; } x13; double x14; int x15; unsigned int x16; int x17; int x18; int x19; })a0;
- (id)initWithClientLocation:(struct { int x0; struct { double x0; double x1; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; int x10; double x11; int x12; struct { double x0; double x1; } x13; double x14; int x15; unsigned int x16; int x17; int x18; int x19; })a0 matchInfo:(id)a1 trustedTimestamp:(double)a2 groundAltitude:(id)a3 fusionInfo:(id)a4 rawHorizontalAccuracy:(double)a5 rawCourseAccuracy:(double)a6;
- (id)initWithClientLocation:(struct { int x0; struct { double x0; double x1; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; int x10; double x11; int x12; struct { double x0; double x1; } x13; double x14; int x15; unsigned int x16; int x17; int x18; int x19; })a0 clientLocationPrivate:(struct { double x0; double x1; double x2; double x3; double x4; float x5; float x6; float x7; BOOL x8; int x9; struct { double x0; double x1; } x10; double x11; int x12; int x13; BOOL x14; struct { double x0; double x1; BOOL x2; BOOL x3; } x15; struct { double x0; double x1; } x16; int x17; float x18; struct { double x0; double x1; } x19; double x20; double x21; int x22; BOOL x23; double x24; double x25; double x26; double x27; double x28; double x29; BOOL x30; struct { double x0; double x1; } x31; double x32; int x33; double x34; double x35; })a1 coarseMetaData:(id)a2;
- (id)initWithClientLocation:(struct { int x0; struct { double x0; double x1; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; int x10; double x11; int x12; struct { double x0; double x1; } x13; double x14; int x15; unsigned int x16; int x17; int x18; int x19; })a0 coarseMetaData:(id)a1;
- (id)initWithClientLocation:(struct { int x0; struct { double x0; double x1; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; int x10; double x11; int x12; struct { double x0; double x1; } x13; double x14; int x15; unsigned int x16; int x17; int x18; int x19; })a0 matchInfo:(id)a1 trustedTimestamp:(double)a2 groundAltitude:(id)a3;
- (id)initWithClientLocation:(struct { int x0; struct { double x0; double x1; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; int x10; double x11; int x12; struct { double x0; double x1; } x13; double x14; int x15; unsigned int x16; int x17; int x18; int x19; })a0 clientLocationPrivate:(struct { double x0; double x1; double x2; double x3; double x4; float x5; float x6; float x7; BOOL x8; int x9; struct { double x0; double x1; } x10; double x11; int x12; int x13; BOOL x14; struct { double x0; double x1; BOOL x2; BOOL x3; } x15; struct { double x0; double x1; } x16; int x17; float x18; struct { double x0; double x1; } x19; double x20; double x21; int x22; BOOL x23; double x24; double x25; double x26; double x27; double x28; double x29; BOOL x30; struct { double x0; double x1; } x31; double x32; int x33; double x34; double x35; })a1;

@end
