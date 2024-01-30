@class NSURL;

@interface CLAvailabilityTileParser : NSObject {
    struct shared_ptr<AvailabilityTile> { struct AvailabilityTile *__ptr_; struct __shared_weak_count *__cntrl_; } _avlTile;
}

@property (readonly, nonatomic) NSURL *path;

+ (void)_setParamOverrides:(struct LocalizerParameters { void /* function */ **x0; unsigned long long x1; unsigned int x2; int x3; int x4; int x5; float x6; float x7; struct MotionTruthParameters *x8; struct MultiphoneDbmParameters *x9; struct PedometryCompassMotionParameters *x10; struct InjectionParameters *x11; struct PdrParameters *x12; struct WifiParameters *x13; float x14; int x15; struct BodyFixedDetectorParameters *x16; double x17; float x18; float x19; float x20; float x21; struct BeaconParameters *x22; float x23; int x24; double x25; struct WallBehaviorParamaters *x26; struct DynamicUniverseParameters *x27; struct AltitudeParameters *x28; double x29; BOOL x30; BOOL x31; BOOL x32; float x33; struct GpsFusionGlobalParameters *x34; struct DeadReckoningParameters *x35; struct ClientCoarseIndoorParameters *x36; struct GpsFusionGlobalParameters *x37; float x38; float x39; struct PedometryCompassMotionParameters *x40; float x41; float x42; struct CoarseRegionalParameters *x43; struct GpsStrobeParameters *x44; int x45; unsigned int x46[2]; } *)a0 fromDict:(id)a1;
+ (BOOL)generateAvlTileFromJSON:(id)a0 atPath:(id)a1;

- (id)init;
- (BOOL)getNextVenueBoundsIncrementally:(struct VenueBounds { void /* function */ **x0; struct RepeatedPtrField<std::__1::basic_string<char> > { void **x0; int x1; int x2; int x3; } x1; struct RepeatedPtrField<proto::availability::LatLonPolygon> { void **x0; int x1; int x2; int x3; } x2; struct TileDownloadConfiguration *x3; struct LatLonPolygon *x4; struct RepeatedField<unsigned int> { unsigned int *x0; int x1; int x2; } x5; int x6; int x7; unsigned int x8[1]; } *)a0;
- (id)initWithEmptyTile;
- (void).cxx_destruct;
- (id)initWithTilePathIncrementalIO:(id)a0;
- (BOOL)tileIsOpenForIncrementalIO;
- (unsigned long long)venuesCount;
- (id).cxx_construct;
- (int)numTotalExpectedExteriorsInVenues;
- (int)numVenuesExpected;
- (struct AvailabilityTile { struct shared_ptr<proto::availability::AvailabilityTile> { struct AvailabilityTile *x0; struct __shared_weak_count *x1; } x0; BOOL x1; struct unique_ptr<wireless_diagnostics::google::protobuf::io::FileInputStream, std::__1::default_delete<wireless_diagnostics::google::protobuf::io::FileInputStream> > { struct __compressed_pair<wireless_diagnostics::google::protobuf::io::FileInputStream *, std::__1::default_delete<wireless_diagnostics::google::protobuf::io::FileInputStream> > { struct FileInputStream *x0; } x0; } x2; struct path { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x0; } x3; int x4; int x5; long long x6; long long x7; struct unique_ptr<FileHandleWrapper, std::__1::default_delete<FileHandleWrapper> > { struct __compressed_pair<FileHandleWrapper *, std::__1::default_delete<FileHandleWrapper> > { struct FileHandleWrapper *x0; } x0; } x8; int x9; long long x10; } *)getAvlTile;
- (BOOL)_openTileFileForIncrementalIO;

@end
