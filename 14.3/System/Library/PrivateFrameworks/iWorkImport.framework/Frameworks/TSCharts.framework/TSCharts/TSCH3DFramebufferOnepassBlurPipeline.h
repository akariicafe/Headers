@interface TSCH3DFramebufferOnepassBlurPipeline : TSCH3DFramebufferCopyPipeline

@property (readonly, nonatomic) struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } pixelSize;

+ (id)pipelineWithProcessor:(id)a0 session:(id)a1 pixelSize:(const struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } *)a2;

- (void)dealloc;
- (id).cxx_construct;
- (void)updateShaderEffectsStates;
- (id)initWithProcessor:(id)a0 session:(id)a1 pixelSize:(const struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } *)a2;

@end
