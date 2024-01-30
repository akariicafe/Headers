@interface GKPath : NSObject {
    struct PolylinePathway { void /* function */ **_vptr$Pathway; int pointCount; struct Vec3 *points; float radius; BOOL cyclic; float segmentLength; float segmentProjection; struct Vec3 { float x; float y; float z; } local; struct Vec3 { float x; float y; float z; } chosen; struct Vec3 { float x; float y; float z; } segmentNormal; float *lengths; struct Vec3 *normals; float totalPathLength; } _pathway;
}

@property (nonatomic) float radius;
@property (readonly) unsigned long long numPoints;
@property (nonatomic, getter=isCyclical) BOOL cyclical;

+ (id)pathWithFloat3Points:(void *)a0 count:(unsigned long long)a1 radius:(float)a2 cyclical:(BOOL)a3;
+ (id)pathWithGraphNodes:(id)a0 radius:(float)a1;
+ (id)pathWithPoints:(void *)a0 count:(unsigned long long)a1 radius:(float)a2 cyclical:(BOOL)a3;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void /* unknown type, empty encoding */)pointAtIndex:(unsigned long long)a0;
- (id)initWithFloat3Points:(void *)a0 count:(unsigned long long)a1 radius:(float)a2 cyclical:(BOOL)a3;
- (id)initWithPoints:(void *)a0 count:(unsigned long long)a1 radius:(float)a2 cyclical:(BOOL)a3;
- (struct PolylinePathway { void /* function */ **x0; int x1; struct Vec3 *x2; float x3; BOOL x4; float x5; float x6; struct Vec3 { float x0; float x1; float x2; } x7; struct Vec3 { float x0; float x1; float x2; } x8; struct Vec3 { float x0; float x1; float x2; } x9; float *x10; struct Vec3 *x11; float x12; } *)pathway;
- (BOOL)_cyclical;
- (void /* unknown type, empty encoding */)float2AtIndex:(unsigned long long)a0;
- (void /* unknown type, empty encoding */)float3AtIndex:(unsigned long long)a0;
- (id)initWithGraphNodes:(id)a0 radius:(float)a1;
- (void)set_cyclical:(BOOL)a0;

@end
