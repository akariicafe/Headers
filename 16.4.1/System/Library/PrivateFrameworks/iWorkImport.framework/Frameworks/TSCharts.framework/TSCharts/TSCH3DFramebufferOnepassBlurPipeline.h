@interface TSCH3DFramebufferOnepassBlurPipeline : TSCH3DFramebufferCopyPipeline

@property (readonly, nonatomic) struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } pixelSize;

+ (id)pipelineWithProcessor:(id)a0 session:(id)a1 pixelSize:(const void *)a2;

- (id).cxx_construct;
- (id)initWithProcessor:(id)a0 session:(id)a1 pixelSize:(const void *)a2;
- (void)updateShaderEffectsStates;

@end
