@class PyrGPU, FigMetalContext;
@protocol MTLCommandQueue, MTLComputePipelineState, MTLTexture;

@interface TVL1_v3 : NSObject {
    FigMetalContext *_mtlContext;
    id<MTLCommandQueue> _commandQueue;
    id<MTLComputePipelineState> _computePipelines[5];
    struct __CVBuffer { } *_R_a_pxbuf;
    id<MTLTexture> _R_a_tex[32];
    struct __CVBuffer { } *_R_d_pxbuf;
    id<MTLTexture> _R_d_tex[32];
    struct __CVBuffer { } *_R_b_pxbuf;
    id<MTLTexture> _R_b_tex[32];
    struct __CVBuffer *_p_pxbuf[2];
    id<MTLTexture> _p_tex[32][2];
    struct __CVBuffer *_uv_relax_pxbuf[2];
    id<MTLTexture> _uv_relax_tex[32][2];
    struct __CVBuffer *_uv_pxbuf[2];
    id<MTLTexture> _uv_tex[32][2];
    id<MTLTexture> _uv_tex_user_ref;
}

@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) int countScales;
@property (readonly, nonatomic) struct CGSize { double width; double height; } outputDisparityResolution;
@property (retain, nonatomic) PyrGPU *pyramidReference;

- (int)allocateResources;
- (void).cxx_destruct;
- (void)releaseResources;
- (void)dealloc;
- (int)_setupPipelines;
- (id)initWithMetalContext:(id)a0;
- (int)_setupBuffer;
- (int)_setupTexture;
- (id)textureUVRelaxAtLevel:(int)a0 idx_swap_uv:(int)a1;
- (int)doInitPrimalDualWithCommandBuffer:(id)a0 disparity_value:(float)a1 idx_swap_uv:(int)a2 idx_swap_p:(int)a3 level:(int)a4;
- (int)doUpscalePrimalDualWithCommandBuffer:(id)a0 idx_swap_uv_in_out:(int *)a1 idx_swap_p_in_out:(int *)a2 level:(int)a3 coeff:(float)a4;
- (int)doLocalRegularizationWithCommandBuffer:(id)a0 in_tex:(id)a1 level:(int)a2 parameters:(id)a3;
- (id)textureUVAtLevel:(int)a0 idx_swap_uv:(int)a1;
- (int)doSolveChambollePrimalDualWithCommandBuffer:(SEL)a0 idx_swap_uv_in_out:(id)a1 idx_swap_p_in_out:(int *)a2 in_res_tes:(int *)a3 in_hes_tes:(id)a4 out_uv_tex:(id)a5 level:(id)a6 iterations:(int)a7 box_cstr_range:(int)a8 disparity_scaling_factor:(float)a9 parameters:(id)a10;
- (int)_doUpscaleSingleWithCommandBuffer:(id)a0 in_tex:(id)a1 out_tex:(id)a2 coeff:(float)a3;
- (int)_doUpscaleDualWithCommandBuffer:(id)a0 in_tex:(id)a1 out_tex:(id)a2;
- (id)texturePAtLevel:(int)a0 idx_swap_p:(int)a1;
- (id)textureRaAtLevel:(int)a0;
- (id)textureRbAtLevel:(int)a0;
- (id)textureRdAtLevel:(int)a0;

@end
