@protocol MTLDevice, MTLTexture, MTLCommandQueue, MTLComputePipelineState;

@interface ARGPUImageUndistortion : NSObject {
    id<MTLDevice> _device;
    id<MTLCommandQueue> _commandQueue;
    id<MTLComputePipelineState> _yuvPipelineState;
    id<MTLComputePipelineState> _rgbPipelineState;
    id<MTLComputePipelineState> _lutGenerationPipelineState;
    id<MTLTexture> _lut;
    struct { void /* unknown type, empty encoding */ columns[3]; } _fisheyeIntrinsics;
    void /* unknown type, empty encoding */ _fisheyeRadialCoefficients;
    struct { void /* unknown type, empty encoding */ columns[3]; } _rectilinearIntrinsics;
}

- (id)init;
- (void).cxx_destruct;
- (void)undistortFisheyeImage:(SEL)a0 withFisheyeIntrinsics:(struct __CVBuffer { } *)a1 withFisheyeRadialCoefficients:(struct { void /* unknown type, empty encoding */ x0[3]; })a2 toRectilinearImage:(struct __CVBuffer **)a3 withRectilinearIntrinsics:(struct { void /* unknown type, empty encoding */ x0[3]; })a4;
- (BOOL)undistortFisheyeTexture:(SEL)a0 withFisheyeIntrinsics:(id)a1 withFisheyeRadialCoefficients:(struct { void /* unknown type, empty encoding */ x0[3]; })a2 toRectilinearImage:(id)a3 withRectilinearIntrinsics:(struct { void /* unknown type, empty encoding */ x0[3]; })a4;

@end
