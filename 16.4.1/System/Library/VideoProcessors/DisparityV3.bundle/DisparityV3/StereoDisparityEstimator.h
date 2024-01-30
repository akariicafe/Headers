@class NSArray, PyrGPU, FigMetalContext, TVL1_v3, HBFGPU;
@protocol MTLCommandQueue, MTLComputePipelineState, MTLTexture;

@interface StereoDisparityEstimator : NSObject {
    FigMetalContext *_mtlContext;
    id<MTLCommandQueue> _commandQueue;
    id<MTLComputePipelineState> _computePipelines[3];
    struct CGSize { double width; double height; } _ref_input_res;
    struct CGSize { double width; double height; } _tgt_input_res;
    struct CGSize { double width; double height; } _ref_max_input_res;
    struct CGSize { double width; double height; } _tgt_max_input_res;
    struct __CVBuffer { } *_ref_mixed_pxbuf;
    id<MTLTexture> _ref_mixed_tex[32];
    id<MTLTexture> _ref_mixed_u32_tex[32];
    struct __CVBuffer { } *_tgt_mixed_pxbuf;
    struct __CVBuffer { } *_res_pxbuf;
    id<MTLTexture> _res_tex[32];
    struct __CVBuffer { } *_Hes_pxbuf;
    id<MTLTexture> _Hes_tex[32];
    id<MTLTexture> _uv_tex_user_ref;
    TVL1_v3 *_tvl1Instance;
    HBFGPU *_hbfgpuInstance;
}

@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) struct CGSize { double width; double height; } outputDisparityResolution;
@property (nonatomic) long long outputFlowOrientation;
@property (retain, nonatomic) NSArray *allLevelParameters;
@property (readonly, nonatomic) PyrGPU *pyr_ref;
@property (readonly, nonatomic) PyrGPU *pyr_tgt;

- (void)releaseResources;
- (int)_doPostProcessingWithCommandBuffer:(id)a0 in_ref_u32_tex:(id)a1 in_tgt_tex:(id)a2 in_uv_tex:(id)a3 out_uv_tex:(id)a4 level:(int)a5 disparity_scaling_factor:(float)a6;
- (void)waitUntilCompleted;
- (int)_createPyramidsForReference:(id)a0 andTarget:(id)a1;
- (struct CGSize { double x0; double x1; })_integerTargetDimensionsFromReferenceWidth:(int)a0 height:(int)a1;
- (int)_doCostWithCommandBuffer:(id)a0 in_I0_u32_tex:(id)a1 in_I1_tex:(id)a2 in_uv_tex:(id)a3 out_res_tex:(id)a4 out_hes_tex:(id)a5 level:(int)a6;
- (int)_doChannelMixingWithCommandBuffer:(SEL)a0 fromTexture:(id)a1 toTexture:(id)a2 level:(id)a3 a:(int)a4 b:(struct { void /* unknown type, empty encoding */ x0[3]; })a5;
- (int)_setupPyramidsWithScalingFactor:(float)a0 nScales:(int)a1;
- (void)dealloc;
- (int)allocateResourcesWithConfiguration:(const struct { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGSize { double x0; double x1; } x3; struct CGSize { double x0; double x1; } x4; float x5; int x6; } *)a0;
- (id)initWithMetalContext:(id)a0;
- (int)_setupTVL1Instance;
- (int)_setupPipelines;
- (int)estimateDisparityFromReference:(SEL)a0 target:(id)a1 init_disparity_value:(id)a2 box_cstr_range:(float)a3 disparity_scaling_factor:(float)a4;
- (int)_computeDisparityFromResolution:(SEL)a0 init_disparity_value:(struct CGSize { double x0; double x1; })a1 box_cstr_range:(float)a2 disparity_scaling_factor:(float)a3;
- (int)_initSubModules;
- (void).cxx_destruct;
- (int)_setupBuffer;
- (int)_setupTexture;
- (void)reset;
- (int)setOutputDisparity:(struct __CVBuffer { } *)a0;

@end
