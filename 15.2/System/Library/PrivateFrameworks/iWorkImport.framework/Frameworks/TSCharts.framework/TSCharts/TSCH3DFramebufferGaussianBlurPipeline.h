@interface TSCH3DFramebufferGaussianBlurPipeline : TSCH3DFramebufferCopyPipeline

@property (nonatomic) struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } tapUnit;

+ (id)effectsArray;

- (id).cxx_construct;
- (id)initWithProcessor:(id)a0 session:(id)a1;
- (void)updateShaderEffectsStates;

@end
