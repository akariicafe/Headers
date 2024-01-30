@interface GKPolygonObstacle : GKObstacle <NSSecureCoding> {
    struct GKCPolygonObstacle { void /* function */ **x0; struct vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> > { struct __compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> > { void *x0; } **x0; } x1; struct PolygonObstacle { void /* function */ **x0; struct vector<OpenSteer::Vec3, std::__1::allocator<OpenSteer::Vec3> > { struct Vec3 *x0; struct Vec3 *x1; struct __compressed_pair<OpenSteer::Vec3 *, std::__1::allocator<OpenSteer::Vec3> > { struct Vec3 *x0; } x2; } x1; } x2; id x3; } *_cPolygonObstacle;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long vertexCount;

+ (id)obstacleWithPoints:(void *)a0 count:(unsigned long long)a1;

- (id)init;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void /* unknown type, empty encoding */)vertexAtIndex:(unsigned long long)a0;
- (id)initWithPoints:(void *)a0 count:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;
- (struct GKCPolygonObstacle { void /* function */ **x0; struct vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> > { struct __compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> > { void *x0; } **x0; } x1; struct PolygonObstacle { void /* function */ **x0; struct vector<OpenSteer::Vec3, std::__1::allocator<OpenSteer::Vec3> > { struct Vec3 *x0; struct Vec3 *x1; struct __compressed_pair<OpenSteer::Vec3 *, std::__1::allocator<OpenSteer::Vec3> > { struct Vec3 *x0; } x2; } x1; } x2; id x3; } *)cPolygonObstacle;
- (struct Obstacle { void /* function */ **x0; } *)obstacle;
- (void)setCPolygonObstacle:(struct GKCPolygonObstacle { void /* function */ **x0; struct vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> > { struct __compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> > { void *x0; } **x0; } x1; struct PolygonObstacle { void /* function */ **x0; struct vector<OpenSteer::Vec3, std::__1::allocator<OpenSteer::Vec3> > { struct Vec3 *x0; struct Vec3 *x1; struct __compressed_pair<OpenSteer::Vec3 *, std::__1::allocator<OpenSteer::Vec3> > { struct Vec3 *x0; } x2; } x1; } x2; id x3; } *)a0;

@end
