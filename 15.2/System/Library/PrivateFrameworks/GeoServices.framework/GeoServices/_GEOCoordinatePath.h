@class NSArray;

@interface _GEOCoordinatePath : NSObject <NSSecureCoding> {
    struct vector<GEOLocationCoordinate3D, std::allocator<GEOLocationCoordinate3D>> { struct *__begin_; struct *__end_; struct __compressed_pair<GEOLocationCoordinate3D *, std::allocator<GEOLocationCoordinate3D>> { struct *__value_; } __end_cap_; } _basicCoordinates;
    struct vector<zilch::ControlPoint, std::allocator<zilch::ControlPoint>> { struct ControlPoint *__begin_; struct ControlPoint *__end_; struct __compressed_pair<zilch::ControlPoint *, std::allocator<zilch::ControlPoint>> { struct ControlPoint *__value_; } __end_cap_; } _zilchPoints;
    NSArray *_supportPoints;
    struct vector<double, std::allocator<double>> { double *__begin_; double *__end_; struct __compressed_pair<double *, std::allocator<double>> { double *__value_; } __end_cap_; } _pointLengths;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct ControlPoint { int x0; struct GeoCoordinates { struct Longitude { unsigned int x0; } x0; struct Latitude { unsigned int x0; } x1; int x2; } x1; struct Angle { unsigned short x0; } x2; struct FormOfWay { int x0; } x3; struct FunctionalClass { int x0; } x4; int x5; } *zilchControlPoints;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) double length;
@property (readonly, nonatomic) double *pointLengths;
@property (nonatomic) unsigned long long pathStartIndex;
@property (nonatomic) double pathStartOffset;

- (struct { double x0; double x1; double x2; })coordinateAt:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (void)setBasicCoordinates:(void *)a0;
- (void)calibratePointLengths:(void *)a0 startIndex:(unsigned long long)a1 endIndex:(unsigned long long)a2 rangeLength:(double)a3;
- (void)setPointLengths:(void *)a0;
- (id)initWithGeoRoutingPathData:(id)a0 pathStartIndex:(unsigned long long)a1;
- (void)setZilchPoints:(void *)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;

@end
