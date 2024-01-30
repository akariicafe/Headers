@class H13FastPowerBlurShaders, FigMetalContext;

@interface H13FastPowerBlurStageMetal : NSObject

@property (retain, nonatomic) FigMetalContext *metal;
@property (readonly, nonatomic) H13FastPowerBlurShaders *shaders;

- (id)initWithMetalContext:(id)a0;
- (void).cxx_destruct;
- (int)_applyPowerBlurWithParams:(const struct { unsigned short x0; float x1; float x2; struct { float x0; float x1; float x2; float x3; float x4; } x3; float x4; float x5; union { } x6; union { } x7; } *)a0 halfResATex:(id)a1 halfResBTex:(id)a2 commandBuffer:(id)a3;
- (int)_remosaicRgbWithParams:(const struct { unsigned short x0; float x1; float x2; struct { float x0; float x1; float x2; float x3; float x4; } x3; float x4; float x5; union { } x6; union { } x7; } *)a0 inputTex:(id)a1 lscGainsTex:(id)a2 outputTex:(id)a3 commandBuffer:(id)a4;
- (int)_remosaicYuvWithParams:(const struct { unsigned short x0; float x1; float x2; struct { float x0; float x1; float x2; float x3; float x4; } x3; float x4; float x5; union { } x6; union { } x7; } *)a0 inputLumaTex:(id)a1 inputChromaTex:(id)a2 lscGainsTex:(id)a3 outputTex:(id)a4 commandBuffer:(id)a5;
- (int)_resampleHalfSizeToFullSizeRgbWithParams:(const struct { unsigned short x0; float x1; float x2; struct { float x0; float x1; float x2; float x3; float x4; } x3; float x4; float x5; union { } x6; union { } x7; } *)a0 inputTex:(id)a1 halfResTex:(id)a2 outputTex:(id)a3 commandBuffer:(id)a4;
- (int)_resampleHalfSizeToFullSizeYuvWithParams:(const struct { unsigned short x0; float x1; float x2; struct { float x0; float x1; float x2; float x3; float x4; } x3; float x4; float x5; union { } x6; union { } x7; } *)a0 inputLumaTex:(id)a1 inputChromaTex:(id)a2 halfResTex:(id)a3 outputLumaTex:(id)a4 outputChromaTex:(id)a5 commandBuffer:(id)a6;
- (int)_resampleRawAndCreateHighFrequencyMapWithParams:(const struct { unsigned short x0; float x1; float x2; struct { float x0; float x1; float x2; float x3; float x4; } x3; float x4; float x5; union { } x6; union { } x7; } *)a0 rawTex:(id)a1 halfResTex:(id)a2 commandBuffer:(id)a3;
- (int)_validateThreadsPerThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 forPipeline:(id)a1;
- (int)runWithConfig:(const struct { unsigned short x0; float x1; float x2; struct { float x0; float x1; float x2; float x3; float x4; } x3; float x4; float x5; union { } x6; union { } x7; } *)a0 inputLumaTex:(id)a1 inputChromaTex:(id)a2 outputLumaTex:(id)a3 outputChromaTex:(id)a4 lscGainsTex:(id)a5;
- (int)runWithConfig:(const struct { unsigned short x0; float x1; float x2; struct { float x0; float x1; float x2; float x3; float x4; } x3; float x4; float x5; union { } x6; union { } x7; } *)a0 inputTex:(id)a1 outputTex:(id)a2 lscGainsTex:(id)a3;

@end
