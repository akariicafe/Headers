@class MPSImageBilinearScale;
@protocol MTLDevice, MTLTexture, MTLCommandQueue, MTLComputePipelineState;

@interface VCPSpillmapMetalSession : NSObject {
    id<MTLDevice> _device;
    id<MTLCommandQueue> _commandQueue;
    id<MTLComputePipelineState> _colorspaceConversion;
    MPSImageBilinearScale *_bilinearScale;
    unsigned int _sourceFormat;
    unsigned long long _sourceWidth;
    unsigned long long _sourceHeight;
    unsigned long long _sourceProtectionOption;
    unsigned int _spillWidth;
    unsigned int _spillHeight;
    struct CF<__CFDictionary *> { struct __CFDictionary *value_; } _spillBufferAttributes;
    struct CF<__CVMetalTextureCache *> { struct __CVMetalTextureCache *value_; } _textureCacheLuma;
    struct CF<__CVMetalTextureCache *> { struct __CVMetalTextureCache *value_; } _textureCacheChroma;
    id<MTLTexture> _textureBGRA;
    id<MTLTexture> _textureSpillmap;
}

- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (int)configureGPU;
- (int)loadSurfaceInfo:(struct __IOSurface { } *)a0;
- (int)configureTexturesAndAttributes:(struct __IOSurface { } *)a0 Width:(int)a1 Height:(int)a2;
- (id)loadTexture:(struct __CVBuffer { } *)a0 withAttributes:(id)a1 forPlane:(unsigned int)a2;
- (int)convertYuv420:(struct __CVBuffer { } *)a0 withCommandBuffer:(id)a1;
- (int)calculateDrmSpillmapMetal:(struct __CVBuffer { } *)a0;
- (int)createPixelBuffer:(struct __CVBuffer **)a0;

@end
