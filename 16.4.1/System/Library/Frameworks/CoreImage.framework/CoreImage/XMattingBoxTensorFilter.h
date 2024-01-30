@class MPSImageBox;
@protocol MTLDevice, MTLLibrary, MTLTexture, MTLComputePipelineState;

@interface XMattingBoxTensorFilter : NSObject {
    id<MTLDevice> _device;
    id<MTLLibrary> _library;
    MPSImageBox *_boxfilter;
    unsigned int _radius;
    unsigned int _depthRadius;
    BOOL _supportsReadWriteTextures;
    id<MTLTexture> _tmpTexture;
    id<MTLComputePipelineState> _depthFilterSeparableSlidingStacks_arrayKernel;
    id<MTLComputePipelineState> _renormalizeFromMPSImageEdgeModeZeroKernel;
}

+ (id)supportedPixelFormats;

- (int)_compileShadersWithLibrary:(id)a0;
- (id)initWithDevice:(id)a0 library:(id)a1;
- (int)allocateResources:(struct { unsigned int x0; unsigned int x1; })a0;
- (void)releaseResources;
- (int)encodeSeparableSlidingStackOnCommandBuffer:(id)a0 sourceTexture:(id)a1 destinationTexture:(id)a2;
- (int)encodeOnCommandBuffer:(id)a0 sourceTexture:(id)a1 destinationTexture:(id)a2;
- (void).cxx_destruct;

@end
