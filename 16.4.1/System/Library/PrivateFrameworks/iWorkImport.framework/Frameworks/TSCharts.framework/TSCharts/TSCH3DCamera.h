@class TSCH3DLens;

@interface TSCH3DCamera : NSObject <NSCopying>

@property (nonatomic) float viewportScale;
@property (nonatomic) float viewportSamples;
@property (nonatomic) struct box<glm::detail::tvec2<int>> { struct tvec2<int> { union { int x; int r; int s; } ; union { int y; int g; int t; } ; } _min; struct tvec2<int> { union { int x; int r; int s; } ; union { int y; int g; int t; } ; } _max; } viewport;
@property (nonatomic) struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } containingViewportOffset;
@property (retain, nonatomic) TSCH3DLens *lens;
@property (readonly, nonatomic) struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } position;
@property (readonly, nonatomic) struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } direction;
@property (nonatomic) struct tmat4x4<float> { struct tvec4<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; union { float w; float a; float q; } ; } value[4]; } transform;
@property (readonly, nonatomic) struct tmat4x4<float> { struct tvec4<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; union { float x0; float x1; float x2; } x3; } x0[4]; } space;
@property (readonly, nonatomic) struct tmat4x4<float> { struct tvec4<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; union { float x0; float x1; float x2; } x3; } x0[4]; } projection;
@property (readonly, nonatomic) struct tmat4x4<float> { struct tvec4<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; union { float x0; float x1; float x2; } x3; } x0[4]; } normalizedProjection;
@property (readonly, nonatomic) struct tmat4x4<float> { struct tvec4<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; union { float x0; float x1; float x2; } x3; } x0[4]; } viewportProjection;
@property (readonly, nonatomic) struct tmat4x4<float> { struct tvec4<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; union { float x0; float x1; float x2; } x3; } x0[4]; } modelViewProjection;
@property (readonly, nonatomic) struct tmat4x4<float> { struct tvec4<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; union { float x0; float x1; float x2; } x3; } x0[4]; } modelViewNormalizedProjection;

+ (id)perspective;
+ (id)orthographicPerPixelWithBounds:(const void *)a0;
+ (id)cameraWithLens:(id)a0 size:(const void *)a1;
+ (id)orthographic;
+ (id)orthographicPerPixelWithSize:(const void *)a0;
+ (id)orthographicWithSize:(const void *)a0;
+ (id)perspectiveWithSize:(const void *)a0;

- (void)setPosition:(struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; })a0;
- (void)setDirection:(struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; })a0;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; })backProjectCameraSpacePoint:(const void *)a0;
- (void)calculateCullingPlanes:(void *)a0;
- (struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; })fastProjectNormalizedPoint:(const void *)a0 planeDistance:(float)a1;
- (id)frustumSliceAtDistance:(float)a0;
- (id)initWithLens:(id)a0 size:(const void *)a1;
- (id)matrixDescription;
- (struct tmat4x4<float> { struct tvec4<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; union { float x0; float x1; float x2; } x3; } x0[4]; })modelViewViewportProjectionWithViewportScale:(float)a0;
- (id)narrowByNormalizedBounds:(const void *)a0;
- (id)narrowedByNormalizedBounds:(const void *)a0;
- (id)narrowedByViewport:(const void *)a0;
- (id)narrowedByViewport:(const void *)a0 samples:(long long)a1;
- (id)pixelAlignedForScaledViewport:(const void *)a0 viewportScale:(float)a1 samples:(float)a2 correspondingNoramlizedBounds:(const void *)a3;
- (struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; })projectNormalizedPoint:(const void *)a0 planeDistance:(float)a1;
- (void)setContainingViewportSize:(const void *)a0;
- (id)shiftByPixels:(const void *)a0;
- (id)shiftedByPixels:(const void *)a0;

@end
