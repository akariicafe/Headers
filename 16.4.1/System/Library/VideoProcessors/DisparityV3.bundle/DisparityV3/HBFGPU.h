@class HBFGPUParameters, FigMetalContext;
@protocol MTLCommandQueue, MTLComputePipelineState, MTLBuffer;

@interface HBFGPU : NSObject {
    FigMetalContext *_mtlContext;
    id<MTLCommandQueue> _commandQueue;
    id<MTLComputePipelineState> _computePipelines[5];
    unsigned long long _maxThreadExecutionWidth;
    id<MTLBuffer> _res_off_buf;
}

@property (nonatomic) HBFGPUParameters *params;

- (void)releaseResouces;
- (void)waitUntilCompleted;
- (int)_doBuildErrorMapWithCommandBuffer:(id)a0 in_res_tex:(id)a1 out_tex:(id)a2;
- (int)doFilterWithCommandBuffer:(id)a0 in_I_tex:(id)a1 in_J_u32_tex:(id)a2 in_W_tex:(id)a3 out_tex:(id)a4 disparity_scaling_factor:(float)a5;
- (int)doFilterWithCommandBuffer:(SEL)a0 in_I0_u32_tex:(id)a1 in_I1_tex:(id)a2 in_uv_tex:(id)a3 out_uv_tex:(id)a4 tmp_res_tex:(id)a5 tmp_err_tex:(id)a6 tmp_uv0_tex:(id)a7 tmp_uv1_tex:(id)a8 needToComputeResidualOffset:(id)a9 disparity_axis:(BOOL)a10 disparity_scaling_factor:(float)a11;
- (void)dealloc;
- (int)_doOcclusionHandlingWithCommandBuffer:(SEL)a0 in_uv_old_tex:(id)a1 in_uv_new_tex:(id)a2 in_I0_u32_tex:(id)a3 in_I1_tex:(id)a4 out_tex:(id)a5 disparity_axis:(id)a6 disparity_scaling_factor:(float)a7;
- (id)initWithMetalContext:(id)a0;
- (int)_doComputeResidualErrorOffsetWithCommandBuffer:(id)a0 in_res_tex:(id)a1;
- (void)_setupPipelines;
- (int)_doComputeResidualErrorWithCommandBuffer:(SEL)a0 in_I0_u32_tex:(id)a1 in_I1_tex:(id)a2 in_uv_tex:(id)a3 out_tex:(id)a4 disparity_axis:(id)a5;
- (void).cxx_destruct;

@end
