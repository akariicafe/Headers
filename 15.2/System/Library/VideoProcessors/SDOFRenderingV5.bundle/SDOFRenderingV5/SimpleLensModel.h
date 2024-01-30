@class FigMetalContext;
@protocol MTLComputePipelineState, MTLBuffer;

@interface SimpleLensModel : NSObject {
    FigMetalContext *_mtlCtx;
    id<MTLComputePipelineState> _minMax0_kernel;
    id<MTLComputePipelineState> _minMax1_kernel;
    id<MTLComputePipelineState> _minMax2_kernel;
    id<MTLComputePipelineState> _calc_kernel;
    id<MTLBuffer> _minMaxAtomic_buf;
    id<MTLBuffer> _minMaxResult_buf;
}

- (id)initWithMetalContext:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)deallocateResources;
- (int)enqueueSlmCalcWithInputShiftMap:(id)a0 slmParams:(id)a1 simpleLensParams:(const struct simple_lens_model_params { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; } *)a2;
- (int)allocateResourcesForShiftMapWidth:(unsigned long long)a0 shiftMapHeight:(unsigned long long)a1;
- (int)enqueueCalcWithSimpleLensParams:(const struct simple_lens_model_params { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; } *)a0 inputShiftMap:(id)a1 outputSlmParams:(id)a2;
- (int)enqueueMinMaxWithInputShiftMapTex:(id)a0;

@end
