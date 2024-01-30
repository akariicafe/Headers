@protocol MTLDevice, MTLLibrary, MTLTexture, MTLCommandQueue, MTLComputePipelineState;

@interface GPUImageUndistortion : NSObject {
    id<MTLDevice> _device;
    id<MTLCommandQueue> _commandQueue;
    id<MTLComputePipelineState> _pipelineState;
    id<MTLComputePipelineState> _lutGenerationPipelineState;
    id<MTLTexture> _lut;
    struct { void /* unknown type, empty encoding */ columns[3]; } _fisheyeIntrinsics;
    void /* unknown type, empty encoding */ _fisheyeRadialCoefficients;
    struct { void /* unknown type, empty encoding */ columns[3]; } _rectilinearIntrinsics;
    id<MTLLibrary> _library;
}

- (id)init;
- (void).cxx_destruct;
- (void)undistortFisheyeImage:(SEL)a0 withFisheyeIntrinsics:(struct __CVBuffer { } *)a1 withFisheyeRadialCoefficients:(struct { void /* unknown type, empty encoding */ x0[3]; })a2 toRectilinearImage:(struct __CVBuffer **)a3 withRectilinearIntrinsics:(struct { void /* unknown type, empty encoding */ x0[3]; })a4;

@end
