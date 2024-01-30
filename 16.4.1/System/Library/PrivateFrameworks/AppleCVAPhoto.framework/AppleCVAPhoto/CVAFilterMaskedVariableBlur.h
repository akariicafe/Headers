@class NSString, MPSImageGaussianPyramid;
@protocol MTLComputePipelineState, MTLDeviceSPI;

@interface CVAFilterMaskedVariableBlur : NSObject {
    id<MTLDeviceSPI> _device;
    MPSImageGaussianPyramid *_gaussianPyramid;
    id<MTLComputePipelineState> _maskedVariableBlurKernel;
}

@property (readonly) NSString *label;

+ (void)prewarmGaussianPyramid:(id)a0 device:(id)a1 commandBuffer:(id)a2;

- (void)encodeToCommandBuffer:(id)a0 source:(id)a1 destination:(id)a2 mask:(id)a3 maxBlurRadius:(float)a4;
- (id)initWithDevice:(id)a0 library:(id)a1 pipelineLibrary:(id)a2 commandQueue:(id)a3 kernelSize:(int)a4 error:(id *)a5;
- (void)encodeBlurPyramidInPlaceToCommandBuffer:(id)a0 inoutTexture:(id)a1;
- (void).cxx_destruct;

@end
