@class BilateralGridShaders, FigMetalContext;
@protocol MTLTexture, MTLBuffer;

@interface BilateralGrid : NSObject {
    id<MTLTexture> _grid_tex;
    id<MTLBuffer> _uniforms;
    FigMetalContext *_metal;
    BilateralGridShaders *_shaders;
    BOOL _normalizeGridConfidence;
    int _space_sigma;
    float _range_sigma;
    unsigned long long _input_width;
    unsigned long long _input_height;
    int _grid_width;
    int _grid_height;
    int _grid_depth;
    id<MTLTexture> _tmp_grid_tex;
    id<MTLBuffer> _max_grid_confidence;
    id<MTLTexture> _bistochast_m_tex;
    id<MTLTexture> _bistochast_n_tex;
    id<MTLTexture> _A_tex;
    id<MTLTexture> _x0_tex;
    id<MTLTexture> _x1_tex;
    id<MTLTexture> _residual0_tex;
    id<MTLTexture> _residual1_tex;
    id<MTLTexture> _confidence_solved_tex;
    id<MTLTexture> _d0_tex;
    id<MTLTexture> _d1_tex;
    id<MTLTexture> _q_tex;
    id<MTLBuffer> _l0_buf;
    id<MTLBuffer> _l1_buf;
    id<MTLBuffer> _alpha_buf;
    id<MTLBuffer> _residual_buf;
    id<MTLBuffer> _hasconverged_buf;
}

+ (int)prewarmShaders:(id)a0;

- (void)releaseResources;
- (void)dealloc;
- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (id)allocGridTexture:(unsigned long long)a0;
- (int)allocateResourcesWithConfiguration:(struct BilateralGridConfiguration { int x0; float x1; struct BilateralSolverConfiguration { float x0; float x1; float x2; float x3; } x2; } *)a0 width:(unsigned long long)a1 height:(unsigned long long)a2;
- (int)blurAndNormalize:(id)a0 grid_tmp_tex:(id)a1;
- (int)buildWithGuideAndConfidence:(SEL)a0 target:(id)a1 confidence:(id)a2 grid_tex:(id)a3 ltc_tex:(id)a4 gtcRatio_tex:(id)a5 gtcFinal_tex:(id)a6 ltmROI:(id)a7;
- (int)config:(unsigned long long)a0 height:(unsigned long long)a1 space_sigma:(int)a2 range_sigma:(float)a3 solver:(struct BilateralSolverConfiguration { float x0; float x1; float x2; float x3; })a4;
- (int)filter:(id)a0 output:(id)a1;
- (id)initWithContext:(id)a0 normalizeGridConfidence:(BOOL)a1;
- (int)jointfilter:(struct __CVBuffer { } *)a0 target:(struct __CVBuffer { } *)a1 output:(struct __CVBuffer { } *)a2;
- (int)solverBistochastize:(int)a0;
- (id)solverPcg:(int)a0;
- (int)solverfilter:(struct __CVBuffer { } *)a0 target:(struct __CVBuffer { } *)a1 confidence:(struct __CVBuffer { } *)a2 output:(struct __CVBuffer { } *)a3;
- (int)solverfilterWithGuide:(SEL)a0 target:(id)a1 confidence:(id)a2 ltc_tex:(id)a3 gtcRatio_tex:(id)a4 gtcFinal_tex:(id)a5 ltmROI:(id)a6 output:(id)a7;
- (int)solverfilterWithGuide:(id)a0 target:(id)a1 confidence:(id)a2 output:(id)a3;
- (int)upsample:(SEL)a0 grid_tex:(id)a1 conf_tex:(id)a2 ltc_tex:(id)a3 gtcRatio_tex:(id)a4 gtcFinal_tex:(id)a5 ltmROI:(id)a6 output:(id)a7;

@end
