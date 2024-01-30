@interface _GEOCoordinatePath : NSObject <NSSecureCoding> {
    union { struct ControlPoint *zilch; struct *basic; void *data; } _coordinates;
    BOOL _usesZilch;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct ControlPoint { int x0; struct GeoCoordinates { struct Longitude { unsigned int x0; } x0; struct Latitude { unsigned int x0; } x1; int x2; } x1; struct Angle { unsigned short x0; } x2; struct FormOfWay { int x0; } x3; struct FunctionalClass { int x0; } x4; int x5; } *zilchControlPoints;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) double length;
@property (readonly, nonatomic) double *pointLengths;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (struct { double x0; double x1; double x2; })coordinateAt:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (void)setZilchCoordinates:(struct ControlPoint { int x0; struct GeoCoordinates { struct Longitude { unsigned int x0; } x0; struct Latitude { unsigned int x0; } x1; int x2; } x1; struct Angle { unsigned short x0; } x2; struct FormOfWay { int x0; } x3; struct FunctionalClass { int x0; } x4; int x5; } *)a0 count:(unsigned long long)a1;
- (void)setBasicCoordinates:(struct { double x0; double x1; double x2; } *)a0 count:(unsigned long long)a1;
- (void)setPointLengths:(double *)a0;

@end
