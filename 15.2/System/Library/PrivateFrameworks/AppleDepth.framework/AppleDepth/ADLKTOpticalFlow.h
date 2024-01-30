@protocol MTLDevice, MTLTexture, MTLComputePipelineState, MTLBuffer;

@interface ADLKTOpticalFlow : NSObject {
    int _resX;
    int _resY;
    unsigned long long _nscales;
    unsigned int _nwarpings[10];
    BOOL _useNonLocalRegularization;
    int _nlreg_radius;
    int _nlreg_padding;
    float _nlreg_sigma_l;
    float _nlreg_sigma_c;
    float _nlreg_sigma_w;
    id<MTLDevice> _device;
    struct CGSize { double width; double height; } _pyramid_size[10];
    unsigned long long _maxThreadExecutionWidth;
    id<MTLComputePipelineState> _computePipelines[9];
    struct __CVBuffer *_uv_pxbuf[2];
    id<MTLTexture> _uv_tex[2][10];
    id<MTLTexture> _uv_u32_alias_tex[2][10];
    id<MTLBuffer> _Adiagb_buf[2];
    id<MTLBuffer> _Ixy_buf[2];
    struct __CVBuffer { } *_w_pxbuf;
    id<MTLTexture> _w_tex[10];
}

@property (class, readonly) unsigned int MaxScales;

+ (struct { unsigned long long x0; id x1; BOOL x2; int x3; int x4; float x5; float x6; float x7; })defaultConfig;
+ (struct CGSize { double x0; double x1; })getNextPyramidLevelSize:(struct CGSize { double x0; double x1; })a0;

- (void).cxx_destruct;
- (void)dealloc;
- (void)_setupPipelines;
- (void)_zeroFlowWithCommandBuffer:(id)a0 uv_tex:(id)a1;
- (int)_computeFeaturesWithCommandBuffer:(id)a0 in_tex:(id)a1 out_tex:(id)a2;
- (int)_computeFeaturesDerivativesWithCommandBuffer:(id)a0 in_tex:(id)a1 out_tex:(id)a2;
- (void)_doNLRegularizationWithCommandBuffer:(id)a0 in_uv_tex:(id)a1 join_tex:(id)a2 w_tex:(id)a3 out_uv_tex:(id)a4;
- (id)initWithDevice:(id)a0 inputSize:(struct CGSize { double x0; double x1; })a1 scales:(unsigned long long)a2;
- (long long)encodePyramidFeaturesToCommandBuffer:(id)a0 colorTexture:(id)a1 outPyramidsArray:(id)a2 outFeaturesArray:(id)a3 outDerivitiveArray:(id)a4;
- (long long)encodeOpticalFlowSolverToCommandBuffer:(id)a0 currentFeaturesArray:(id)a1 currentDerivitiveArray:(id)a2 previousFeaturesArray:(id)a3 previousDerivitiveArray:(id)a4 currentPyramidsArray:(id)a5 outShiftMap:(id)a6;
- (int)_downscale2XWithCommandBuffer:(SEL)a0 in_tex:(id)a1 out_tex:(id)a2 scaling_factor:(id)a3;
- (BOOL)_createImagePyramidWithCommandBuffer:(id)a0 inOutPyramidsArray:(id)a1 error:(id *)a2;
- (BOOL)_createImagePyramidWithCommandBuffer:(id)a0 in_BGRATex:(id)a1 outPyramidsArray:(id)a2 error:(id *)a3;
- (int)_doSolverWithCommandBuffer:(SEL)a0 currentFeatures:(id)a1 currentDerivitive:(id)a2 previousFeatures:(id)a3 previousDerivitive:(id)a4 scale:(id)a5 coeff:(int)a6 in_uv_tex:(id)a7 out_uv_tex:(id)a8 out_w_tex:(id)a9;
- (void)setPyramidSizes;
- (BOOL)_setupBufferAndReturnErrorWithDevice:(id)a0 error:(id *)a1;
- (id)initWithDevice:(id)a0 inputSize:(struct CGSize { double x0; double x1; })a1 config:(struct { unsigned long long x0; id x1; BOOL x2; int x3; int x4; float x5; float x6; float x7; })a2;

@end
