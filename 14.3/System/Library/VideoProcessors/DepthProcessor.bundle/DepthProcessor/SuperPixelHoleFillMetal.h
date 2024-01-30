@class FigMetalContext;
@protocol MTLComputePipelineState, MTLBuffer;

@interface SuperPixelHoleFillMetal : NSObject {
    FigMetalContext *_metalContext;
    id<MTLComputePipelineState> _kernelConvertToRbga;
    id<MTLComputePipelineState> _kernelComputeStage0;
    id<MTLComputePipelineState> _kernelComputeStage1;
    id<MTLComputePipelineState> _kernelComputeStage2;
    id<MTLComputePipelineState> _kernelComputeStage4;
    id<MTLComputePipelineState> _kernelComputeStage5;
    id<MTLComputePipelineState> _kernelFindLabelRoi;
    id<MTLComputePipelineState> _kernelSuperPixel2Image;
    id<MTLComputePipelineState> _kernelComputeConfidence;
    id<MTLBuffer> _workMem;
    id<MTLBuffer> _superPixelsBoundaries;
    char *_solverMemoryPointer;
    unsigned int _maxNumSuperPixels;
    struct { struct { int rowCount; int columnCount; long long *columnStarts; int *rowIndices; struct { unsigned char transpose : 1; unsigned char triangle : 1; unsigned char kind : 2; unsigned short _reserved : 11; unsigned char _allocatedBySparse : 1; } attributes; unsigned char blockSize; } structure; float *data; } _matrixAtA;
    struct { int count; float *data; } _vectorAtB;
    struct { int count; float *data; } _vectorX;
}

- (void).cxx_destruct;
- (void)releaseResources;
- (int)allocateResources:(unsigned int)a0;
- (void)dealloc;
- (id)initWithMetalContext:(id)a0;
- (int)convertFrom420fPixelBuffer:(struct { struct { unsigned int x0; unsigned int x1; unsigned int x2; } x0; struct { float x0; float x1; unsigned int x2; float x3; } x1; struct { struct { unsigned int x0; float x1; float x2; float x3; } x0; struct { float x0; float x1; unsigned int x2; } x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; } x2; struct { float x0; float x1; float x2; float x3; float x4; } x3; })a0 lumaTexture:(id)a1 chromaTexture:(id)a2 toSlicRgbaTexture:(id)a3;
- (int)computeStage0:(struct { struct { unsigned int x0; unsigned int x1; unsigned int x2; } x0; struct { float x0; float x1; unsigned int x2; float x3; } x1; struct { struct { unsigned int x0; float x1; float x2; float x3; } x0; struct { float x0; float x1; unsigned int x2; } x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; } x2; struct { float x0; float x1; float x2; float x3; float x4; } x3; })a0 inImageTexture:(id)a1 inLabelTexture:(id)a2 inBodyMaskTexture:(id)a3 inConfMapTexture:(id)a4;
- (int)computeStage4:(struct { struct { unsigned int x0; unsigned int x1; unsigned int x2; } x0; struct { float x0; float x1; unsigned int x2; float x3; } x1; struct { struct { unsigned int x0; float x1; float x2; float x3; } x0; struct { float x0; float x1; unsigned int x2; } x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; } x2; struct { float x0; float x1; float x2; float x3; float x4; } x3; })a0 inLabelTexture:(id)a1 inDepthTex:(id)a2 inConfTex:(id)a3 inDistanceTransformMapTex:(id)a4 maxDist:(float)a5 sigma_den:(float)a6;
- (int)computeStageSolver:(struct { struct { unsigned int x0; unsigned int x1; unsigned int x2; } x0; struct { float x0; float x1; unsigned int x2; float x3; } x1; struct { struct { unsigned int x0; float x1; float x2; float x3; } x0; struct { float x0; float x1; unsigned int x2; } x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; } x2; struct { float x0; float x1; float x2; float x3; float x4; } x3; })a0 inLabelTexture:(id)a1 inConfTex:(id)a2 inImageTex:(id)a3 outDepthTex:(id)a4 outConfTex:(id)a5;
- (int)RunSolver:(float)a0;

@end
