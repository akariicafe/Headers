@interface TSCH3DPerspectiveLens : TSCH3DLens

@property (nonatomic) float fov;
@property (nonatomic) float aspect;
@property (readonly, nonatomic) float width;
@property (readonly, nonatomic) float height;

- (struct tmat4x4<float> { struct tvec4<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; union { float x0; float x1; float x2; } x3; } x0[4]; })matrix;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)calculateCullingPlanes:(void *)a0;
- (id)frustumRect;
- (id)narrowedByNormalizedBounds:(void *)a0;
- (id)shiftedByPercentage:(void *)a0;
- (id)frustumRectAtDistance:(float)a0;
- (id)asFrustumLens;
- (id)matrixDescription;

@end
