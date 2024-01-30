@protocol MTLFunction, MTLDevice;

@interface CIMetalConverter : NSObject {
    id<MTLDevice> _device;
    id<MTLFunction> _convertToTexture;
    id<MTLFunction> _convertToBuffer;
}

- (void)dealloc;
- (void)encodeToCommandBuffer:(id)a0 sourceBuffer:(id)a1 sourceRowBytes:(unsigned long long)a2 destinationBuffer:(id)a3 destinationRowBytes:(unsigned long long)a4 destinationSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a5;
- (void)encodeToCommandBuffer:(id)a0 sourceBuffer:(id)a1 sourceRowBytes:(unsigned long long)a2 destinationTexture:(id)a3;
- (id)initWithDevice:(id)a0 kernelName:(id)a1;

@end
