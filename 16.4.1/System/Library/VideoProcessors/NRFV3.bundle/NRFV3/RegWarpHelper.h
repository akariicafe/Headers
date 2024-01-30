@class FigMetalContext;
@protocol MTLComputePipelineState;

@interface RegWarpHelper : NSObject {
    FigMetalContext *_metal;
    id<MTLComputePipelineState> _downsampleAndConvert10To8;
    id<MTLComputePipelineState> _downsampleRGBToLuma;
}

+ (int)prewarmShaders:(id)a0;

- (id)initWithMetal:(id)a0;
- (void).cxx_destruct;
- (int)convertInput10BitPixBuf:(struct __CVBuffer { } *)a0 downsampledOutput8BitPixBuf:(struct __CVBuffer { } *)a1 mtlCommandBuffer:(id)a2;
- (int)downsampleInputRGB:(id)a0 toLuma:(id)a1;

@end
