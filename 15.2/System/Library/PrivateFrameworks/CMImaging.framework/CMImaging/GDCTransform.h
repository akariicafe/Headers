@class FigMetalContext;
@protocol MTLComputePipelineState, MTLSamplerState;

@interface GDCTransform : NSObject {
    id<MTLComputePipelineState> _pipelineStates[1];
    id<MTLSamplerState> _samplers[3];
    FigMetalContext *_metalContext;
}

- (void).cxx_destruct;
- (int)_compileShaders;
- (int)_setSamplersWithNormalizedCoordinates:(BOOL)a0;
- (struct { float x0[8]; struct { void /* unknown type, empty encoding */ x0[3]; } x1; float x2; float x3; int x4; BOOL x5; })_legacyParametersToUniforms:(const struct { float x0[8]; float x1[8]; float x2; float x3; float x4; float x5; float x6; float x7[9]; float x8[9]; struct CGSize { double x0; double x1; } x9; BOOL x10; int x11; } *)a0 withScale:(float)a1 andMode:(int)a2;
- (id)initWithOptionalCommandQueue:(id)a0;
- (int)transformFrom:(id)a0 to:(id)a1 withParameters:(const struct { float x0[8]; float x1[8]; float x2; float x3; float x4; float x5; float x6; float x7[9]; float x8[9]; struct CGSize { double x0; double x1; } x9; BOOL x10; int x11; } *)a2 withScale:(float)a3 withMode:(int)a4 andCommandBuffer:(id)a5;

@end
