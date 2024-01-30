@class FigMetalContext;
@protocol MTLComputePipelineState;

@interface RegWarpHelper : NSObject {
    FigMetalContext *_metal;
    id<MTLComputePipelineState> _downsampleAndConvert10To8;
}

+ (int)prewarmShaders:(id)a0;

- (void).cxx_destruct;
- (id)initWithMetal:(id)a0;
- (int)convertInput10BitPixBuf:(struct __CVBuffer { } *)a0 downsampledOutput8BitPixBuf:(struct __CVBuffer { } *)a1 mtlCommandBuffer:(id)a2;

@end
