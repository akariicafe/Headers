@class FigMetalContext;
@protocol MTLCommandQueue, MTLComputePipelineState, MTLTexture;

@interface PyrGPU : NSObject {
    FigMetalContext *_mtlContext;
    id<MTLCommandQueue> _commandQueue;
    id<MTLComputePipelineState> _computePipelines[2];
    id<MTLComputePipelineState> _KernelDownscaleImage1[3][3];
    struct CGSize { double width; double height; } _input_res;
    struct CGSize { double width; double height; } _max_input_res;
    struct { struct CGSize { double width; double height; } real_res; int kernel_filter; void /* unknown type, empty encoding */ scaling_factor; void /* unknown type, empty encoding */ resampling_factor; int idx_ref; BOOL use_antialiasing; } _pyrInfoArray[32];
    struct CGSize { double width; double height; } _pyr_int_dims[32];
    struct CGSize { double width; double height; } _pyr_real_dims[32];
    struct __CVBuffer *_pyr_pxbuf[32];
    id<MTLTexture> _pyr_tex[32];
    id<MTLTexture> _pyr_u32_alias_tex[32];
    struct __CVBuffer *_antialiasing_pxbuf[2];
}

@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) int countScales;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } *pyramidDimensions;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } *realPyramidDimensions;
@property (nonatomic) BOOL useAntialiasingForDownsamplingToFinestResolution;

+ (struct { struct CGSize { double x0; double x1; } x0; int x1; int x2; BOOL x3; })_determineFilterFromResolution:(struct CGSize { double x0; double x1; })a0 toResolution:(struct CGSize { double x0; double x1; })a1;

- (int)_createTextureViewsFromResolution:(struct CGSize { double x0; double x1; })a0;
- (id)textureRGBAU8AtScale:(int)a0;
- (void)releaseResources;
- (int)populatePyramidSchemeFromResolution:(struct CGSize { double x0; double x1; })a0 toResolution:(struct CGSize { double x0; double x1; })a1 scalingFactor:(float)a2 scales:(int)a3 allowSuccessiveDownscale2x:(BOOL)a4;
- (id)textureU32AliasAtScale:(int)a0;
- (int)populatePyramidSchemeFromReference:(id)a0 inputResolution:(struct CGSize { double x0; double x1; })a1;
- (void)dealloc;
- (id)initWithMetalContext:(id)a0;
- (int)_downscaleAntialiasingWithCommandBuffer:(id)a0 in_tex:(id)a1 out_tex:(id)a2 in_ref_res:(struct CGSize { double x0; double x1; })a3 out_ref_res:(struct CGSize { double x0; double x1; })a4;
- (int)doImagePyramidWithCommandBuffer:(id)a0 in_tex:(id)a1;
- (void)_setupPipelines;
- (int)_doRPDDownscale1WithCommandBuffer:(SEL)a0 in_tex:(id)a1 out_tex:(id)a2 scaling_factor:(id)a3;
- (int)allocateResourcesWithMaxInputResolution:(struct CGSize { double x0; double x1; })a0;
- (int)downscale2XEqualWithCommandBuffer:(id)a0 in_u32_alias_tex:(id)a1 out_u32_alias_tex:(id)a2;
- (int)_downscale2XBelowWithCommandBuffer:(SEL)a0 in_tex:(id)a1 out_tex:(id)a2 scaling_factor:(id)a3;
- (void).cxx_destruct;

@end
