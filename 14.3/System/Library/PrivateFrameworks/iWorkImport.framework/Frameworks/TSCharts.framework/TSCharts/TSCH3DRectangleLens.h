@interface TSCH3DRectangleLens : TSCH3DLens

@property (readonly, nonatomic) float width;
@property (readonly, nonatomic) float height;
@property (nonatomic) float left;
@property (nonatomic) float right;
@property (nonatomic) float bottom;
@property (nonatomic) float top;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)normalize;
- (id)description;
- (void)deviceNormalize;
- (void)setPerPixelSize:(struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } *)a0;
- (id)narrowByNormalizedBounds:(struct box<glm::detail::tvec2<float> > { struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } x0; struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } x1; } *)a0;
- (id)shiftByPercentage:(struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } *)a0;
- (id)frustumRect;
- (void)setPerPixel:(struct box<glm::detail::tvec2<int> > { struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } x0; struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } x1; } *)a0;
- (id)narrowedByNormalizedBounds:(struct box<glm::detail::tvec2<float> > { struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } x0; struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } x1; } *)a0;
- (id)shiftedByPercentage:(struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } *)a0;

@end
