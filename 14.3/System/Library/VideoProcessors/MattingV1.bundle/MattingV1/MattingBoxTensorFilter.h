@class MPSImageBox;
@protocol MTLLibrary, MTLDevice, MTLComputePipelineState;

@interface MattingBoxTensorFilter : NSObject {
    id<MTLDevice> _device;
    id<MTLLibrary> _library;
    MPSImageBox *_boxfilter;
    unsigned int _radius;
    unsigned int _depthRadius;
    id<MTLComputePipelineState> _depthFilterSeparableSlidingStacks_arrayKernel;
    id<MTLComputePipelineState> _renormalizeFromMPSImageEdgeModeZeroKernel;
}

+ (id)supportedPixelFormats;

- (id)initWithDevice:(id)a0 library:(id)a1;
- (void).cxx_destruct;
- (void)releaseResources;
- (int)allocateResources:(struct { unsigned int x0; unsigned int x1; })a0;
- (int)_compileShadersWithLibrary:(id)a0;
- (int)encodeSeparableSlidingStackOnCommandBuffer:(id)a0 sourceTexture:(id)a1 destinationTexture:(id)a2;
- (int)encodeOnCommandBuffer:(id)a0 sourceTexture:(id)a1 destinationTexture:(id)a2;

@end
