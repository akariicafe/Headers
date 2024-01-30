@class PKMetalRenderLoop, MTLRenderPassDescriptor, PKTextureLoader;
@protocol MTLRenderPipelineState, MTLTexture, MTLCommandQueue, MTLBuffer;

@interface PKTexturedCardRenderer : NSObject {
    BOOL _invalidated;
    long long _style;
    PKMetalRenderLoop *_loop;
    id<MTLCommandQueue> _commandQueue;
    id<MTLRenderPipelineState> _pipelineState;
    unsigned long long _drawableWidth;
    unsigned long long _drawableHeight;
    MTLRenderPassDescriptor *_renderPassDescriptor;
    PKTextureLoader *_diffuseLoader;
    PKTextureLoader *_metalnessLoader;
    PKTextureLoader *_normalLoader;
    id<MTLBuffer> _vertices;
    id<MTLBuffer> _uniform;
    id<MTLTexture> _diffuse;
    id<MTLTexture> _metalness;
    id<MTLTexture> _normal;
    float _lightIntensity;
    struct { void /* unknown type, empty encoding */ vector; } _rotation;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
