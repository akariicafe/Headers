@protocol MTLCommandQueue, MTLDevice, MTLComputePipelineState;

@interface MetalPixelBufferUtility : NSObject {
    id<MTLDevice> _metalDevice;
    id<MTLCommandQueue> _metalCommandQueue;
    id<MTLComputePipelineState> _pipeLineStates[5];
}

@property (nonatomic) BOOL enabled;

+ (id)sharedMetalPixelBufferUtility;

- (id)init;
- (void).cxx_destruct;
- (BOOL)joinCompandedWarholBuffer:(struct __CVBuffer { } *)a0 intoCompandedBayerBuffer:(struct __CVBuffer { } *)a1;
- (BOOL)joinWarholBuffer:(struct __CVBuffer { } *)a0 intoBayerBuffer:(struct __CVBuffer { } *)a1 shiftBitsRightBy:(int)a2 msbReplication:(BOOL)a3;
- (BOOL)joinYUVBuffer:(struct __CVBuffer { } *)a0 intoRawBayerPixelBuffer:(struct __CVBuffer { } *)a1 shiftBitsLeftBy:(int)a2 msbReplication:(BOOL)a3;
- (BOOL)processBayerBuffer:(struct __CVBuffer { } *)a0 withWarholBuffer:(struct __CVBuffer { } *)a1 shiftCount:(int)a2 msbReplication:(BOOL)a3 operation:(int)a4 sampleSize:(int)a5;
- (BOOL)splitBayerBuffer:(struct __CVBuffer { } *)a0 intoWarholPixelBuffer:(struct __CVBuffer { } *)a1 shiftBitsLeftBy:(int)a2;
- (BOOL)splitBayerBuffer:(struct __CVBuffer { } *)a0 intoYUVPixelBuffer:(struct __CVBuffer { } *)a1 shiftBitsLeftBy:(int)a2;
- (BOOL)splitCompandedBayerBuffer:(struct __CVBuffer { } *)a0 intoCompandedWarholPixelBuffer:(struct __CVBuffer { } *)a1;

@end
