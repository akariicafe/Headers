@class FigMetalContext;
@protocol MTLComputePipelineState, MTLBuffer, MTLTexture;

@interface BilateralSolverGPU : NSObject {
    FigMetalContext *_metalContext;
    id<MTLComputePipelineState> _computePipelines[9];
    struct { struct { unsigned long long width; unsigned long long height; unsigned long long depth; } dispatchThreadgroups; struct { unsigned long long width; unsigned long long height; unsigned long long depth; } threadsPerThreadgroup; } _threadGroupInfo;
    struct { float lambda; unsigned int N; unsigned short dims; float sigma_s; float sigma_r_luma; } _params;
    unsigned int _width;
    unsigned int _height;
    unsigned long long _maxVertices;
    id<MTLBuffer> _gridHashBuffer;
    id<MTLBuffer> _gridBlurBuffer;
    id<MTLBuffer> _gridCoordIndicesBuffer;
    id<MTLBuffer> _gridCoordTableBuffer;
    id<MTLTexture> _gridHashMatrix;
    id<MTLBuffer> _gridInterpIndicesBuffer;
    id<MTLBuffer> _gridInterpTableBuffer;
    id<MTLBuffer> _gridInterpPadBuffer;
    id<MTLBuffer> _A_buf;
    id<MTLBuffer> _b_buf;
    id<MTLBuffer> _s_buf;
    id<MTLBuffer> _q_buf;
    id<MTLBuffer> _Dn_buf[2];
    id<MTLBuffer> _x_buf[2];
    id<MTLBuffer> _r_buf[2];
    id<MTLBuffer> _d_buf[2];
    int _idxDnBufIn;
    int _idxSwapBufIn;
}

@property (nonatomic) BOOL useTrilinearInterpolation;

- (int)doSolveWithBilateralGridhash:(id)a0 reference:(id)a1 input:(id)a2 confidence:(id)a3 output:(id)a4 lambda:(float)a5 maxIterations:(int)a6;
- (int)_doSliceWithCommandBuffer:(id)a0 o_tex:(id)a1;
- (int)_doSliceTrilinearWithCommandBuffer:(id)a0 ref_tex:(id)a1 o_tex:(id)a2;
- (void)_prepareResources:(id)a0;
- (void)_setupPipelines;
- (int)_doPCGWithCommandBuffer:(id)a0 nIterations:(int)a1;
- (id)initWithWidth:(unsigned int)a0 height:(unsigned int)a1 maxVertices:(unsigned long long)a2 metalContext:(id)a3;
- (void).cxx_destruct;
- (void)_setupBuffer;
- (int)_doBistochastizeWithCommandBuffer:(id)a0 t_tex:(id)a1 c_tex:(id)a2 nIterations:(int)a3;

@end
