@protocol MTLLibrary, MTLDevice, MTLCommandQueue;

@interface SIResourceFactory : NSObject {
    id<MTLLibrary> _library;
    id<MTLCommandQueue> _commandQueue;
}

@property (readonly, nonatomic) id<MTLLibrary> library;
@property (readonly) id<MTLDevice> device;

- (id)initWithDevice:(id)a0;
- (id)newFunctionWithName:(id)a0;
- (id)commandBuffer;
- (id)newFunctionWithName:(id)a0 constantValues:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)newTextureWithFormat:(struct SIImageFormat_struct { unsigned long long x0; unsigned long long x1; unsigned int x2; unsigned long long x3; })a0 surface:(struct __IOSurface { } *)a1;
- (id)newComputePipelineStateWithName:(id)a0;
- (id)newCubemapWithFormat:(struct SIImageFormat_struct { unsigned long long x0; unsigned long long x1; unsigned int x2; unsigned long long x3; })a0;
- (id)newTextureWithFormat:(struct SIImageFormat_struct { unsigned long long x0; unsigned long long x1; unsigned int x2; unsigned long long x3; })a0;
- (id)newIOSurfaceBackedTexture:(struct SIImageFormat_struct { unsigned long long x0; unsigned long long x1; unsigned int x2; unsigned long long x3; })a0;
- (id)newTextureWithFormat:(struct SIImageFormat_struct { unsigned long long x0; unsigned long long x1; unsigned int x2; unsigned long long x3; })a0 pixelBuffer:(struct __CVBuffer { } *)a1;
- (id)newTextureFromPixelBuffer:(struct __CVBuffer { } *)a0;
- (id)textureFromDictionary:(id)a0;
- (id)dictionaryFromTexture:(id)a0;

@end
