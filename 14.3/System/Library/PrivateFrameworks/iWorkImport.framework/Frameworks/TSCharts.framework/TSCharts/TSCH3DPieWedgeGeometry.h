@class TSCH3DNormalDirectionMapper;

@interface TSCH3DPieWedgeGeometry : TSCH3DGeometry

@property (nonatomic) float startAngle;
@property (nonatomic) float endAngle;
@property (nonatomic) long long angleSteps;
@property (nonatomic) long long radiusSteps;
@property (nonatomic) long long bevelEdgeSteps;
@property (nonatomic) float radius;
@property (nonatomic) float bottomZ;
@property (nonatomic) float topZ;
@property (readonly, nonatomic) unsigned int capOffset;
@property (readonly, nonatomic) unsigned int capCount;
@property (readonly, nonatomic) TSCH3DNormalDirectionMapper *normalDirectionMapper;

- (id)init;
- (void)dealloc;
- (void)generateArrays;
- (int)geometryCount;
- (id)selectionKnobPositions;
- (float)bevelHeight;
- (void)generateRoundedTop:(struct vector<float, std::__1::allocator<float> > { float *x0; float *x1; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x0; } x2; } *)a0 radiusArray:(struct vector<float, std::__1::allocator<float> > { float *x0; float *x1; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x0; } x2; } *)a1;
- (void)p_generateBevelCoordinates:(struct vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > > { struct tvec3<float> *x0; struct tvec3<float> *x1; struct __compressed_pair<glm::detail::tvec3<float> *, std::__1::allocator<glm::detail::tvec3<float> > > { struct tvec3<float> *x0; } x2; } *)a0 andAngles:(struct vector<float, std::__1::allocator<float> > { float *x0; float *x1; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x0; } x2; } *)a1 radiusArray:(const struct vector<float, std::__1::allocator<float> > { float *x0; float *x1; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x0; } x2; } *)a2 topArray:(const struct vector<float, std::__1::allocator<float> > { float *x0; float *x1; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x0; } x2; } *)a3;
- (void)p_generateAngles:(struct vector<float, std::__1::allocator<float> > { float *x0; float *x1; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x0; } x2; } *)a0;
- (BOOL)isFullCircle;

@end
