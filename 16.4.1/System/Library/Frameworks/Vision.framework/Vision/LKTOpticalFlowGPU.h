@class VNMetalContext;
@protocol MTLBuffer, MTLTexture, MTLCommandQueue, MTLComputePipelineState;

@interface LKTOpticalFlowGPU : LKTOpticalFlow {
    VNMetalContext *_mtlContext;
    id<MTLCommandQueue> _commandQueue;
    id<MTLComputePipelineState> _computePipelines[9];
    unsigned long long _maxThreadExecutionWidth;
    struct CGSize { double width; double height; } _pyramid_size[10];
    id<MTLTexture> _I_tex[2][10];
    id<MTLTexture> _I_u32_alias_tex[2][10];
    struct __CVBuffer { } *_G0_pxbuf;
    struct __CVBuffer { } *_G1_pxbuf;
    id<MTLTexture> _G0_tex[10];
    id<MTLTexture> _G1_tex[10];
    struct __CVBuffer { } *_C0_pxbuf;
    struct __CVBuffer { } *_C1_pxbuf;
    id<MTLTexture> _C0_tex[10];
    id<MTLTexture> _C1_tex[10];
    id<MTLBuffer> _Adiagb_buf[2];
    id<MTLBuffer> _Ixy_buf[2];
    struct __CVBuffer { } *_w_pxbuf;
    id<MTLTexture> _w_tex[10];
    struct __CVBuffer *_uv_pxbuf[2];
    id<MTLTexture> _uv_tex[2][10];
    id<MTLTexture> _uv_u32_alias_tex[2][10];
    int _current_frame_index;
    id<MTLTexture> _uv_tex_user_ref;
}

- (void)waitUntilCompleted;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_computeFeaturesDerivativesWithCommandBuffer:(id)a0 in_tex:(id)a1 out_tex:(id)a2;
- (void)_computeFeaturesWithCommandBuffer:(id)a0 in_tex:(id)a1 out_tex:(id)a2;
- (void)_computeOpticalFlow;
- (BOOL)_createImagePyramidWithCommandBuffer:(id)a0 in_pixelbuf:(struct __CVBuffer { } *)a1 I_idx:(int)a2 error:(id *)a3;
- (void)_doNLRegularizationWithCommandBuffer:(id)a0 in_uv_tex:(id)a1 join_tex:(id)a2 w_tex:(id)a3 out_uv_tex:(id)a4;
- (void)_doSolverWithCommandBuffer:(id)a0 scale:(SEL)a1 scale_xy_inv:(id)a2 coeff:(int)a3 in_uv_tex:(id)a4 out_uv_tex:(id)a5 out_w_tex:(id)a6;
- (void)_downscale2XWithCommandBuffer:(id)a0 in_u32_alias_tex:(id)a1 out_u32_alias_tex:(id)a2;
- (void)_initMemory:(int)a0 height:(int)a1 numScales:(int)a2;
- (BOOL)_setupBufferAndReturnError:(id *)a0;
- (BOOL)_setupPipelinesReturnError:(id *)a0;
- (void)_zeroFlowWithCommandBuffer:(id)a0 uv_tex:(id)a1;
- (BOOL)estimateFlowFromReference:(struct __CVBuffer { } *)a0 target:(struct __CVBuffer { } *)a1 error:(id *)a2;
- (BOOL)estimateFlowStream:(struct __CVBuffer { } *)a0 error:(id *)a1;
- (id)initWithMetalContext:(id)a0 width:(int)a1 height:(int)a2 numScales:(int)a3 error:(id *)a4;
- (BOOL)setOutputUV:(struct __CVBuffer { } *)a0 error:(id *)a1;

@end
