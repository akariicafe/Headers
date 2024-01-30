@protocol MTLCommandQueue, MTLDevice, MTLComputePipelineState;

@interface ARGPUCubemapConverter : NSObject {
    id<MTLDevice> _device;
    id<MTLCommandQueue> _commandQueue;
    id<MTLComputePipelineState> _cubemapToLatLongPipelineState;
    id<MTLComputePipelineState> _latLongToCubemapPipelineState;
    BOOL _gpuFamilyAtleast4;
}

- (id)init;
- (void).cxx_destruct;
- (id)equirectangularTextureFromCubemapTexture:(id)a0 rotation:(struct { void /* unknown type, empty encoding */ x0[3]; })a1 width:(unsigned long long)a2 height:(unsigned long long)a3;
- (id)cubemapTextureFromEquirectangularTexture:(id)a0 rotation:(struct { void /* unknown type, empty encoding */ x0[3]; })a1 size:(unsigned long long)a2;

@end
