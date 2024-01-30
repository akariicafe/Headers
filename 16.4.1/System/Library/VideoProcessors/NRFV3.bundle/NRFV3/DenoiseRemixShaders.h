@class DenoiseRemixFragmentShader;
@protocol MTLComputePipelineState;

@interface DenoiseRemixShaders : NSObject {
    DenoiseRemixFragmentShader *_denoiseChroma;
    DenoiseRemixFragmentShader *_denoiseLumaDenoiseRemixChroma;
    DenoiseRemixFragmentShader *_denoiseRemixLumaChroma;
    DenoiseRemixFragmentShader *_remixLuma;
    DenoiseRemixFragmentShader *_denoiseRemixLuma;
    id<MTLComputePipelineState> _varianceSharpening;
}

- (void).cxx_destruct;
- (id)initWithMetal:(id)a0 vertFunc:(id)a1 pixelFormatLuma:(unsigned long long)a2 pixelFormatChroma:(unsigned long long)a3 options:(const struct DenoiseRemixStageOptions { int x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; } *)a4;

@end
