@class MPSImageThresholdBinaryInverse, MPSImageAreaMin, MPSImageThresholdBinary;
@protocol MattingFilter, MTLDevice, MTLLibrary, MTLTexture, MTLComputePipelineState;

@interface XMattingSolver : NSObject {
    id<MTLDevice> _device;
    id<MTLLibrary> _library;
    id<MTLComputePipelineState> _applySolverConstraintsKernel;
    id<MTLComputePipelineState> _solverConstraintsKernel;
    id<MTLTexture> _tmpSegmentation;
    id<MTLTexture> _fgErodedSegmentation;
    id<MTLTexture> _bgErodedSegmentation;
    id<MattingFilter> _mattingFilter;
    MPSImageThresholdBinary *_fgThresholdFilter;
    MPSImageThresholdBinaryInverse *_bgThresholdFilter;
    MPSImageAreaMin *_erosionFilter;
}

@property struct { unsigned int internalWidth; unsigned int internalHeight; unsigned int radius; unsigned int subsampling; float epsilon; unsigned int iterations; BOOL useDepthFilter; float fgThresholdValue; float bgThresholdValue; unsigned int erosionKernelSize; unsigned int resolutionMode; } config;

- (int)_compileShadersWithLibrary:(id)a0;
- (id)initWithDevice:(id)a0 library:(id)a1;
- (int)allocateResources:(struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; float x4; unsigned int x5; BOOL x6; float x7; float x8; unsigned int x9; unsigned int x10; })a0;
- (void)releaseResources;
- (int)encodeConstraintsOn:(id)a0 segmentation:(id)a1 constraints:(id)a2;
- (int)enqueueSolveOn:(id)a0 constraints:(id)a1 colorGuide:(id)a2 extraGuide:(id)a3 inputTexture:(id)a4 outputTexture:(id)a5;
- (int)encodeApplySolverConstraintsOn:(id)a0 constraints:(id)a1 filteredSegmentation:(id)a2 segmentation:(id)a3;
- (void).cxx_destruct;

@end
