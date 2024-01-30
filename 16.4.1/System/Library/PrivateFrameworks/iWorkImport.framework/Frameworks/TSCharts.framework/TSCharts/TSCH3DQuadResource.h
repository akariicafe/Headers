@interface TSCH3DQuadResource : TSCH3DDataBufferResource

+ (id)normalized2D;
+ (id)normalized3D;
+ (id)normalized4D;
+ (id)normalizedCenteredCube;
+ (id)normalizedCube;
+ (id)resourceForBox2:(struct box<glm::detail::tvec2<float>> { struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } x0; struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } x1; })a0;

@end
