@class NSURL;

@interface CLAvailabilityTileParser : NSObject {
    struct shared_ptr<AvailabilityTile> { struct AvailabilityTile *__ptr_; struct __shared_weak_count *__cntrl_; } _avlTile;
}

@property (readonly, nonatomic) NSURL *path;

+ (void)_setParamOverrides:(struct LocalizerParameters { void /* function */ **x0; unsigned long long x1; unsigned int x2; int x3; int x4; int x5; float x6; float x7; struct MotionTruthParameters *x8; struct MultiphoneDbmParameters *x9; struct PedometryCompassMotionParameters *x10; struct InjectionParameters *x11; struct PdrParameters *x12; struct WifiParameters *x13; float x14; int x15; struct BodyFixedDetectorParameters *x16; double x17; float x18; float x19; float x20; float x21; struct BeaconParameters *x22; float x23; int x24; double x25; struct WallBehaviorParamaters *x26; struct DynamicUniverseParameters *x27; struct AltitudeParameters *x28; double x29; BOOL x30; BOOL x31; BOOL x32; float x33; struct GpsFusionGlobalParameters *x34; struct DeadReckoningParameters *x35; struct ClientCoarseIndoorParameters *x36; struct GpsFusionGlobalParameters *x37; float x38; float x39; struct PedometryCompassMotionParameters *x40; float x41; float x42; struct CoarseRegionalParameters *x43; struct GpsStrobeParameters *x44; int x45; unsigned int x46[2]; } *)a0 fromDict:(id)a1;
+ (BOOL)generateAvlTileFromJSON:(id)a0 atPath:(id)a1;

- (id)initWithTilePathIncrementalIO:(id)a0;
- (BOOL)tileIsOpenForIncrementalIO;
- (int)numTotalExpectedExteriorsInVenues;
- (void).cxx_destruct;
- (id)init;
- (id)initWithEmptyTile;
- (int)numVenuesExpected;
- (void *)getAvlTile;
- (BOOL)_openTileFileForIncrementalIO;
- (BOOL)getNextVenueBoundsIncrementally:(void *)a0;
- (id).cxx_construct;
- (unsigned long long)venuesCount;

@end
