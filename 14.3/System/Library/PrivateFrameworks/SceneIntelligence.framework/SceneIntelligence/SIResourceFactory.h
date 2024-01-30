@protocol MTLLibrary, MTLDevice, MTLCommandQueue;

@interface SIResourceFactory : NSObject {
    id<MTLLibrary> _library;
    id<MTLCommandQueue> _commandQueue;
}

@property (readonly) id<MTLDevice> device;

- (id)init;
- (void).cxx_destruct;
- (id)newFunctionWithName:(id)a0;
- (id)commandBuffer;
- (id)newTextureWithFormat:(struct SIImageFormat_struct { unsigned long long x0; unsigned long long x1; unsigned int x2; unsigned long long x3; })a0 surface:(struct __IOSurface { } *)a1;
- (void)loadShaderLibrary:(id)a0 forObject:(id)a1;
- (id)newComputePipelineStateWithName:(id)a0;
- (id)newCubemapWithFormat:(struct SIImageFormat_struct { unsigned long long x0; unsigned long long x1; unsigned int x2; unsigned long long x3; })a0;
- (id)newTextureWithFormat:(struct SIImageFormat_struct { unsigned long long x0; unsigned long long x1; unsigned int x2; unsigned long long x3; })a0;
- (id)newIOSurfaceBackedTexture:(struct SIImageFormat_struct { unsigned long long x0; unsigned long long x1; unsigned int x2; unsigned long long x3; })a0;
- (id)newTextureWithFormat:(struct SIImageFormat_struct { unsigned long long x0; unsigned long long x1; unsigned int x2; unsigned long long x3; })a0 pixelBuffer:(struct __CVBuffer { } *)a1;
- (id)textureFromDictionary:(id)a0;
- (id)dictionaryFromTexture:(id)a0;

@end
