@class NSString;
@protocol MTLPipelineLibrarySPI, MTLResourceGroupSPI, MTLLibrary, MTLTexture, MTLComputePipelineState, MTLDeviceSPI;

@interface CVAFilterDistanceTransform : NSObject {
    id<MTLDeviceSPI> _device;
    id<MTLLibrary> _library;
    id<MTLPipelineLibrarySPI> _pipelineLibrary;
    id<MTLTexture> _closestSites;
    id<MTLResourceGroupSPI> _intermediateTexturesResourceGroup;
    id<MTLComputePipelineState> _closestSitesKernel;
    id<MTLComputePipelineState> _distanceTransformKernel;
}

@property (readonly) NSString *label;

- (void).cxx_destruct;
- (void)encodeToCommandBuffer:(id)a0 sourceTexture:(id)a1 destinationTexture:(id)a2;
- (id)initWithDevice:(id)a0 library:(id)a1 pipelineLibrary:(id)a2 textureSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a3 error:(id *)a4;

@end
