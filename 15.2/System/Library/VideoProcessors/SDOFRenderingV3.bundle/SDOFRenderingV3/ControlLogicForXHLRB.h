@class FigMetalContext;
@protocol MTLComputePipelineState, MTLBuffer;

@interface ControlLogicForXHLRB : NSObject {
    FigMetalContext *_mtlCtx;
    id<MTLBuffer> _nClippedPixelsBuf;
    id<MTLComputePipelineState> _count_clipped_kernel;
    BOOL _shadersLoaded;
}

- (id)initWithMetalContext:(id)a0;
- (void).cxx_destruct;
- (void)constAddFp16:(id)a0 name:(id)a1 value:(float)a2;
- (int)loadShaders;
- (int)validateInputsWithInputMetadata:(const struct xhlrb_input_image_metadata { float x0; float x1; } *)a0 inputSlmParams:(id)a1 inputShiftMap:(id)a2 inputLuma:(id)a3 inputChroma:(id)a4 outputParams:(struct xhlrb_control_params { int x0; float x1; float x2; float x3; } *)a5;
- (int)calculateXHLRBParamsWithInputMetadata:(const struct xhlrb_input_image_metadata { float x0; float x1; } *)a0 controlLogicParams:(const struct xhlrb_control_logic_params { int x0; float x1; float x2; float x3; float x4; float x5; int x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; } *)a1 inputSlmParams:(id)a2 inputShiftMap:(id)a3 inputLuma:(id)a4 inputChroma:(id)a5 outputParams:(struct xhlrb_control_params { int x0; float x1; float x2; float x3; } *)a6;
- (int)enqueueControlLogicWithInputMetadata:(const struct xhlrb_input_image_metadata { float x0; float x1; } *)a0 controlLogicParams:(const struct xhlrb_control_logic_params { int x0; float x1; float x2; float x3; float x4; float x5; int x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; } *)a1 inputSlmParams:(id)a2 inputShiftMap:(id)a3 inputLuma:(id)a4 inputChroma:(id)a5 outputParams:(struct xhlrb_control_params { int x0; float x1; float x2; float x3; } *)a6;

@end
