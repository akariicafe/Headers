@class NSObject;
@protocol OS_dispatch_group, MTLCommandBuffer, MTLDevice, MTLTexture, MTLComputePipelineState, MTLBuffer;

@interface CIBilateralSolverGPU : NSObject {
    id<MTLCommandBuffer> _commandBuffer;
    id<MTLDevice> _metalDevice;
    id<MTLComputePipelineState> _computePipelines[9];
    NSObject<OS_dispatch_group> *_computePipelinesGroup;
    struct { struct { unsigned long long width; unsigned long long height; unsigned long long depth; } dispatchThreadgroups; struct { unsigned long long width; unsigned long long height; unsigned long long depth; } threadsPerThreadgroup; } _threadGroupInfo;
    struct { float lambda; unsigned int N; unsigned short dims; float sigma_s; float sigma_r_luma; } _params;
    struct { void /* unknown type, empty encoding */ reference; void /* unknown type, empty encoding */ confidence; void /* unknown type, empty encoding */ disparity; void /* unknown type, empty encoding */ output; } _offsets;
    int _width;
    int _height;
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

- (int)_doSliceWithCommandBuffer:(id)a0 o_tex:(id)a1;
- (int)_doSliceTrilinearWithCommandBuffer:(id)a0 ref_tex:(id)a1 o_tex:(id)a2;
- (void)_prepareResources:(id)a0;
- (int)_doPCGWithCommandBuffer:(id)a0 nIterations:(int)a1;
- (void).cxx_destruct;
- (void)_setupBuffer;
- (int)_doBistochastizeWithCommandBuffer:(id)a0 t_tex:(id)a1 c_tex:(id)a2 lambda:(float)a3 nIterations:(int)a4;
- (void)_setupMetal;
- (void)_setupPipelineCache;
- (void)_setupPipelinesAsync:(id /* block */)a0;
- (int)doSolveWithBilateralGridhash:(id)a0 reference:(id)a1 disparity:(id)a2 confidence:(id)a3 output:(id)a4 lambda:(float)a5 maxIterations:(int)a6 offsets:(struct { } *)a7;
- (id)initWithWidth:(int)a0 height:(int)a1 maxVertices:(unsigned long long)a2 commandBuffer:(id)a3;

@end
