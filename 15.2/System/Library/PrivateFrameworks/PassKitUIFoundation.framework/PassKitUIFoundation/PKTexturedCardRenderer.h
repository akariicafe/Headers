@class NSString, PKMetalRenderLoop, MTLRenderPassDescriptor;
@protocol MTLRenderPipelineState, MTLTexture, MTLCommandQueue, MTLBuffer;

@interface PKTexturedCardRenderer : NSObject <PKInvalidatable> {
    BOOL _invalidated;
    long long _style;
    PKMetalRenderLoop *_loop;
    id<MTLCommandQueue> _commandQueue;
    id<MTLRenderPipelineState> _pipelineState;
    unsigned long long _drawableWidth;
    unsigned long long _drawableHeight;
    MTLRenderPassDescriptor *_renderPassDescriptor;
    id<MTLBuffer> _vertices;
    id<MTLBuffer> _uniform;
    id<MTLTexture> _diffuse;
    id<MTLTexture> _metalness;
    id<MTLTexture> _normal;
    float _lightIntensity;
    struct { void /* unknown type, empty encoding */ vector; } _rotation;
}

@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
