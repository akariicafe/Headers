@interface TSCH3DFrustumRect : NSObject

@property (readonly, nonatomic) float left;
@property (readonly, nonatomic) float right;
@property (readonly, nonatomic) float bottom;
@property (readonly, nonatomic) float top;

+ (id)rectWithLeft:(float)a0 right:(float)a1 bottom:(float)a2 top:(float)a3;

- (id)initWithLeft:(float)a0 right:(float)a1 bottom:(float)a2 top:(float)a3;
- (struct box<glm::detail::tvec2<float>> { struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } x0; struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } x1; })toBox;

@end
