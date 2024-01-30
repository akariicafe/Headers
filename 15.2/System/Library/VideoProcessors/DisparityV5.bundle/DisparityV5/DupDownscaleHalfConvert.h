@class FigMetalContext;
@protocol MTLComputePipelineState;

@interface DupDownscaleHalfConvert : NSObject {
    FigMetalContext *_MetalContext;
    id<MTLComputePipelineState> _KernelYUVA;
    id<MTLComputePipelineState> _KernelY;
    id<MTLComputePipelineState> _KernelDownscaleConvertAndCenterCrop;
    id<MTLComputePipelineState> _KernelDownscaleAndCrop;
    BOOL _ContextAvailable;
    BOOL _ResourcesAvailable;
}

- (id)initWithMetalContext:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (int)ReleaseResources;
- (int)GenerateImageYUVA:(struct __CVBuffer { } *)a0 outYuvaWidth:(unsigned int)a1 outYuvaHeight:(unsigned int)a2 outY:(struct __CVBuffer { } *)a3 inYuv420:(struct __CVBuffer { } *)a4 gainToApplyToOutputs:(float)a5 waitForCompletion:(BOOL)a6;
- (int)AllocateResources;
- (int)GenerateImageYUVA:(struct __CVBuffer { } *)a0 outY:(struct __CVBuffer { } *)a1 inYuv420:(struct __CVBuffer { } *)a2 waitForCompletion:(BOOL)a3;
- (int)GenerateImageY:(id)a0 inYuv420:(id)a1 waitForCompletion:(BOOL)a2;
- (int)DownscaleConvertAndCenterCrop:(struct __CVBuffer { } *)a0 outCroppedLuma:(struct __CVBuffer { } *)a1 inYuv420:(struct __CVBuffer { } *)a2;
- (int)DownscaleAndCrop:(float)a0 outY:(struct __CVBuffer { } *)a1 inYuv420:(struct __CVBuffer { } *)a2;

@end
