@class PTMTLDropHints;
@protocol MTLLibrary, MTLTexture, MTLComputePipelineState, MTLDeviceSPI;

@interface PTGlobalReduction : NSObject {
    id<MTLDeviceSPI> _device;
    id<MTLLibrary> _library;
    id<MTLTexture> _texPing;
    id<MTLTexture> _texPong;
    id<MTLComputePipelineState> _parallelReductionAverage;
    id<MTLComputePipelineState> _parallelReductionMax;
    id<MTLComputePipelineState> _parallelReductionMin;
    PTMTLDropHints *_dropHints;
}

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 library:(id)a1 pipelineLibrary:(id)a2 textureSize:(struct CGSize { double x0; double x1; })a3 pixelFormat:(unsigned long long)a4;
- (void)parallelReductionAverage:(id)a0 inTexture:(id)a1 outGlobalAverage:(id)a2;
- (id)initWithDevice:(id)a0 library:(id)a1 pipelineLibrary:(id)a2 textureSize:(struct CGSize { double x0; double x1; })a3;
- (void)parallelReductionMinMax:(id)a0 inTexture:(id)a1 globalMinMaxBuffer:(id)a2;
- (void)parallelReduction:(id)a0 inTexture:(id)a1 globalBuffer:(id)a2 offset:(int)a3 pipelineState:(id)a4;
- (void)parallelReductionMax:(id)a0 inTexture:(id)a1 globalMaxBuffer:(id)a2;
- (void)parallelReductionMin:(id)a0 inTexture:(id)a1 globalMinBuffer:(id)a2;

@end
