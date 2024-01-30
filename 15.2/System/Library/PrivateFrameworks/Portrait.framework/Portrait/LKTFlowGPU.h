@class PTMTLDropHints;
@protocol MTLDevice, MTLTexture, MTLComputePipelineState, MTLBuffer;

@interface LKTFlowGPU : NSObject {
    id<MTLDevice> _device;
    id<MTLComputePipelineState> _computePipelines[12];
    unsigned long long _maxThreadExecutionWidth;
    struct CGSize { double width; double height; } _ref_pyr_size[10];
    struct CGSize { double width; double height; } _aux_pyr_size[10];
    id<MTLTexture> _I_tex[2][10];
    id<MTLTexture> _I_u32_alias_tex[2][10];
    id<MTLTexture> _G0_tex[10];
    id<MTLTexture> _G1_tex[10];
    id<MTLTexture> _C0_tex[10];
    id<MTLTexture> _C1_tex[10];
    id<MTLBuffer> _Adiagb_buf[2];
    id<MTLBuffer> _Ixy_buf[2];
    id<MTLBuffer> _idt_buf;
    id<MTLTexture> _w_tex[10];
    id<MTLTexture> _uv_fwd_tex[2][10];
    id<MTLTexture> _uv_bwd_tex[2][10];
    id<MTLTexture> _uv_fwd_u32_alias_tex[2][10];
    id<MTLTexture> _uv_bwd_u32_alias_tex[2][10];
    int _current_frame_index;
    BOOL _indexUpdated[2];
    id<MTLTexture> _uv_fwd_tex_user_ref;
    id<MTLTexture> _uv_bwd_tex_user_ref;
    id<MTLBuffer> _kpt_buf;
    PTMTLDropHints *_dropHints;
}

@property (readonly, nonatomic) BOOL isValid;
@property (nonatomic) BOOL needConversionBGRA2YUVA;
@property (readonly, nonatomic) struct CGSize { double width; double height; } ref_size;
@property (readonly, nonatomic) struct CGSize { double width; double height; } aux_size;
@property (readonly, nonatomic) int nscales;
@property (readonly, nonatomic) int streamFrameCount;
@property (nonatomic) int nwarpings;
@property (nonatomic) BOOL useNonLocalRegularization;
@property (nonatomic) int nlreg_radius;
@property (nonatomic) int nlreg_padding;
@property (nonatomic) float nlreg_sigma_l;
@property (nonatomic) float nlreg_sigma_c;
@property (nonatomic) float nlreg_sigma_w;
@property (nonatomic) BOOL isBidirectional;
@property (nonatomic) BOOL isInverse;
@property (readonly, nonatomic) id<MTLBuffer> keypoints;

+ (void)_computeScalingFactor:(id)a0 dst_tex:(id)a1 scale_xy_inv:(void *)a2 coeff:(float *)a3;

- (void).cxx_destruct;
- (void)setPreset:(long long)a0;
- (int)_setupBuffer;
- (void)reset;
- (void)_setupPipelines;
- (int)_zeroFlowWithCommandBuffer:(id)a0 uv_tex:(id)a1;
- (int)_computeFeaturesWithCommandBuffer:(id)a0 in_tex:(id)a1 out_tex:(id)a2;
- (int)_computeFeaturesDerivativesWithCommandBuffer:(id)a0 in_tex:(id)a1 out_tex:(id)a2;
- (int)_doNLRegularizationWithCommandBuffer:(id)a0 in_uv_tex:(id)a1 join_tex:(id)a2 w_tex:(id)a3 out_uv_tex:(id)a4;
- (void)_setDefaultParameters;
- (void)_initMemory:(int)a0 height:(int)a1 nscales:(int)a2;
- (int)_enqueueKeypointsFromFlowWithCommandBuffer:(id)a0 in_uv_fwd_tex:(id)a1 in_uv_bwd_tex:(id)a2 out_kpt_buf:(id)a3 block_size:(int)a4 bidirectional_error:(float)a5 out_num_keypoints:(unsigned short *)a6;
- (int)_doSolverWithCommandBuffer:(id)a0 scale:(int)a1 in_uv_tex:(id)a2 in_G0_tex:(id)a3 in_G1_tex:(id)a4 in_C0_tex:(id)a5 in_C1_tex:(id)a6 out_uv_tex:(id)a7 out_w_tex:(id)a8;
- (int)_enqueueFlowConsistencyWithCommandBuffer:(id)a0 in_uv0_tex:(id)a1 in_uv1_tex:(id)a2 out_uv_tex:(id)a3;
- (int)_downscale2XWithCommandBuffer:(id)a0 in_tex:(id)a1 out_tex:(id)a2;
- (id)newBufferWithPixelFormat:(unsigned long long)a0 width:(int)a1 data:(const void *)a2;
- (int)setOutputTexUVForward:(id)a0 backward:(id)a1;
- (int)_createImagePyramidWithCommandBuffer:(id)a0 in_tex:(id)a1 I_idx:(int)a2;
- (int)_computeOpticalFlowBidirectional:(id)a0;
- (int)_computeOpticalFlow:(id)a0 computeFeatureI0:(BOOL)a1 computeFeatureI1:(BOOL)a2;
- (id)initWithDevice:(id)a0 width:(int)a1 height:(int)a2 nscales:(int)a3;
- (int)setOutputTexUV:(id)a0;
- (int)estimateFlowFromTexReference:(id)a0 target:(id)a1 commandBuffer:(id)a2;
- (int)estimateFlowStreamTex:(id)a0 index:(int)a1 doOpticalFlow:(BOOL)a2 commandBuffer:(id)a3;
- (int)estimateFlowStreamTex:(id)a0 commandBuffer:(id)a1;
- (int)computeKeypointsFromTexForwardFlow:(id)a0 backwardFlow:(id)a1 bidirectionalError:(float)a2 blockSize:(int)a3 outNumKeypoints:(unsigned short *)a4 commandBuffer:(id)a5;

@end
