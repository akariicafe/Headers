@class NSDate;

@interface VKMuninMarker : NSObject {
    struct optional<md::mun::CollectionPoint> { BOOL _hasValue; union ValueUnion { unsigned char data[1864]; struct CollectionPoint { unsigned long long pointId; struct RigidTransform<double, float> { struct Matrix<double, 3, 1> { double _e[3]; } _translation; struct Quaternion<float> { struct Matrix<float, 3, 1> { float _e[3]; } _imaginary; float _scalar; } _rotation; } frame; struct Unit<RadianUnitDescription, float> { float _value; } heading; struct Mercator3<double> { double _e[3]; } mercatorPosition; unsigned long long time; struct small_vector<md::mun::PhotoInfo, 6> { struct PhotoInfo *_begin; struct PhotoInfo *_end; struct PhotoInfo *_fixedStorage; unsigned long long _capacity; struct type { unsigned char __lx[288]; } storage[6]; } photos; float heightAboveGroundMeters; unsigned int buildId; unsigned short bucketId; unsigned char type; unsigned char dataType; unsigned char texturedLodMask; } type; } _value; } _collectionPoint;
}

@property (readonly, nonatomic) const struct CollectionPoint { unsigned long long x0; struct RigidTransform<double, float> { struct Matrix<double, 3, 1> { double x0[3]; } x0; struct Quaternion<float> { struct Matrix<float, 3, 1> { float x0[3]; } x0; float x1; } x1; } x1; struct Unit<RadianUnitDescription, float> { float x0; } x2; struct Mercator3<double> { double x0[3]; } x3; unsigned long long x4; struct small_vector<md::mun::PhotoInfo, 6> { struct PhotoInfo *x0; struct PhotoInfo *x1; struct PhotoInfo *x2; unsigned long long x3; struct type { unsigned char x0[288]; } x4[6]; } x5; float x6; unsigned int x7; unsigned short x8; unsigned char x9; unsigned char x10; unsigned char x11; } *collectionPoint;
@property (readonly, nonatomic) BOOL canMoveToMarker;
@property (readonly, nonatomic) struct { double latitude; double longitude; double altitude; } coordinate;
@property (readonly, nonatomic) NSDate *collectionDate;
@property (readonly, nonatomic) unsigned long long pointId;
@property (readonly, nonatomic) unsigned int buildId;

- (id)initWithCoordinate:(struct { double x0; double x1; double x2; })a0;
- (void).cxx_destruct;
- (id)initWithCollectionPoint:(const struct CollectionPoint { unsigned long long x0; struct RigidTransform<double, float> { struct Matrix<double, 3, 1> { double x0[3]; } x0; struct Quaternion<float> { struct Matrix<float, 3, 1> { float x0[3]; } x0; float x1; } x1; } x1; struct Unit<RadianUnitDescription, float> { float x0; } x2; struct Mercator3<double> { double x0[3]; } x3; unsigned long long x4; struct small_vector<md::mun::PhotoInfo, 6> { struct PhotoInfo *x0; struct PhotoInfo *x1; struct PhotoInfo *x2; unsigned long long x3; struct type { unsigned char x0[288]; } x4[6]; } x5; float x6; unsigned int x7; unsigned short x8; unsigned char x9; unsigned char x10; unsigned char x11; } *)a0;
- (id).cxx_construct;

@end
