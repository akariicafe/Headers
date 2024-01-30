@class NSMutableArray;
@protocol MTLCommandBuffer, MTLRenderCommandEncoder, MTLTexture, MTLCommandQueue, MTLComputeCommandEncoder;

@interface PKMetalRenderState : NSObject {
    NSMutableArray *_commandBuffers;
    NSMutableArray *_purgeableFramebuffers;
    BOOL _liveRendering;
    BOOL _waitUntilCompletedOnCommit;
    BOOL _msaaRendering;
    BOOL _renderOnPaper;
    BOOL _needRenderMask;
    id<MTLCommandQueue> _commandQueue;
    id<MTLCommandBuffer> _commandBuffer;
    id<MTLCommandBuffer> _computeCommandBuffer;
    id<MTLCommandBuffer> _maskCommandBuffer;
    id<MTLRenderCommandEncoder> _renderEncoder;
    id<MTLComputeCommandEncoder> _computeEncoder;
    id<MTLRenderCommandEncoder> _maskRenderEncoder;
    unsigned long long _vertexEncodeCount;
    id<MTLTexture> _destinationTexture;
    unsigned long long _destinationColorAttachmentIndex;
    long long _sixChannelRenderMode;
    id<MTLTexture> _sixChannelContentTexture;
    struct { unsigned long long x; unsigned long long y; unsigned long long width; unsigned long long height; } _scissorRect;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _renderTextureTexCoordTransform;
}

+ (void)renderTargetBarrierForRenderEncoder:(id)a0;

- (void).cxx_destruct;
- (void)dealloc;

@end
