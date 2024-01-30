@class FigMetalContext;
@protocol MTLBuffer, MTLDevice, MTLSamplerState, MTLCommandQueue, MTLRenderPipelineState;

@interface GDCProcessor : NSObject {
    id<MTLDevice> _mtlDevice;
    id<MTLCommandQueue> _mtlCommandQueue;
    id<MTLSamplerState> _samplers[3];
    id<MTLRenderPipelineState> _pipelineStates[2];
    FigMetalContext *_metalContext;
    id<MTLBuffer> _distortUniforms;
    id<MTLBuffer> _unDistortUniforms;
}

- (id)initWithMetalContext:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (int)compileShadersWithLib:(id)a0;
- (int)setSamplers:(BOOL)a0;
- (int)GDCFrom:(id)a0 to:(id)a1 parameters:(struct { float x0[8]; float x1[8]; float x2; float x3; float x4; float x5; float x6; float x7[9]; float x8[9]; BOOL x9; BOOL x10; float x11; } *)a2;
- (int)GDCFrom:(id)a0 to:(id)a1 parameters:(struct { float x0[8]; float x1[8]; float x2; float x3; float x4; float x5; float x6; float x7[9]; float x8[9]; BOOL x9; BOOL x10; float x11; } *)a2 commandBuffer:(id)a3;
- (int)GDCDistort:(id)a0 to:(id)a1 parameters:(struct { float x0[8]; float x1[8]; float x2; float x3; float x4; float x5; float x6; float x7[9]; float x8[9]; BOOL x9; BOOL x10; float x11; } *)a2;
- (int)GDCDistort:(id)a0 to:(id)a1 parameters:(struct { float x0[8]; float x1[8]; float x2; float x3; float x4; float x5; float x6; float x7[9]; float x8[9]; BOOL x9; BOOL x10; float x11; } *)a2 commandBuffer:(id)a3;
- (int)GDCFromPixelBuffer:(struct __CVBuffer { } *)a0 toPixelBuffer:(struct __CVBuffer { } *)a1 parameters:(struct { float x0[8]; float x1[8]; float x2; float x3; float x4; float x5; float x6; float x7[9]; float x8[9]; BOOL x9; BOOL x10; float x11; } *)a2;
- (int)GDCDistortPixelBuffer:(struct __CVBuffer { } *)a0 toPixelBuffer:(struct __CVBuffer { } *)a1 parameters:(struct { float x0[8]; float x1[8]; float x2; float x3; float x4; float x5; float x6; float x7[9]; float x8[9]; BOOL x9; BOOL x10; float x11; } *)a2;
- (int)initMetal;

@end
