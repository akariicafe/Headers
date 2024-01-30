@class ResamplerShader;
@protocol MTLLibrary, MTLDeviceSPI;

@interface SpatialResampler : NSObject {
    id<MTLDeviceSPI> _device;
    id<MTLLibrary> _defaultLibrary;
    ResamplerShader *_verticalResampleKernel;
    ResamplerShader *_verticalResampleChromaKernel;
    ResamplerShader *_horizontalResampleKernel;
}

- (id)initWithDevice:(id)a0;
- (void)createKernels;
- (void).cxx_destruct;
- (void)encodeToCommandBuffer:(id)a0 input:(struct __IOSurface { } *)a1 output:(struct __IOSurface { } *)a2;
- (void)encodeSpatialResampleHorizontal:(id)a0 Input:(id)a1 Output:(id)a2;
- (void)encodeSpatialResampleVertical:(id)a0 Input:(id)a1 Output:(id)a2 isChroma:(BOOL)a3;
- (id)getComputePipeLineStateForShader:(id)a0;
- (void)setupTextures:(id)a0 input:(struct __IOSurface { } *)a1 output:(struct __IOSurface { } *)a2;

@end
