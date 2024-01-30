@protocol MTLCommandQueue, MTLDevice, MTLLibrary;

@interface MetalInterface : NSObject {
    id<MTLDevice> mtlDevice;
    id<MTLCommandQueue> mtlCommandQueue;
    id<MTLLibrary> mtlLibrary;
}

- (id)init;
- (void).cxx_destruct;
- (void)performAdaptiveBinarizationImage:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a0 output:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a1 sumTable:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a2 sumSqTable:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a3;
- (void)performVotingImage:(id)a0 outputTex:(id)a1 subBuffer:(char *)a2;
- (id)textureFromCVPixelBuffer:(struct __CVBuffer { } *)a0;
- (id)textureWithPixelData:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a0 format:(unsigned long long)a1;
- (id)textureWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 format:(unsigned long long)a2 usage:(unsigned long long)a3;

@end
