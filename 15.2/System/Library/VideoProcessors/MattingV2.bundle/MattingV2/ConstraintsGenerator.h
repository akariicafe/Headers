@class FigMetalContext, MPSImageAreaMin, MPSImageThresholdBinary, MPSImageThresholdBinaryInverse;
@protocol MTLTexture, MTLDevice, MTLComputePipelineState;

@interface ConstraintsGenerator : NSObject {
    id<MTLDevice> _device;
    id<MTLTexture> _tmpSegmentation;
    id<MTLTexture> _fgErodedSegmentation;
    id<MTLTexture> _bgErodedSegmentation;
    MPSImageThresholdBinary *_fgThresholdFilter;
    MPSImageThresholdBinaryInverse *_bgThresholdFilter;
    MPSImageAreaMin *_erosionFilter;
    id<MTLComputePipelineState> _assembleConstraintsKernel;
    FigMetalContext *_metalContext;
}

@property (readonly, nonatomic) unsigned long long preallocatedSize;

- (id)initWithMetalContext:(id)a0;
- (void).cxx_destruct;
- (int)prepareForConfiguration:(struct { unsigned int x0; unsigned int x1; float x2; float x3; unsigned int x4; })a0;
- (int)encodeToCommandBuffer:(id)a0 segmentationTexture:(id)a1 constraintsTexture:(id)a2 config:(struct { unsigned int x0; unsigned int x1; float x2; float x3; unsigned int x4; })a3;

@end
