@class PXGMetalCaptureSpriteTexture, MTLRenderPassDescriptor, PXGEffect;

@interface PXGMetalRenderPass : NSObject

@property (retain, nonatomic) MTLRenderPassDescriptor *renderPassDescriptor;
@property (retain, nonatomic) PXGMetalCaptureSpriteTexture *captureSpriteTexture;
@property (nonatomic) float captureSpriteZPosition;
@property (retain, nonatomic) PXGEffect *offscreenKernelEffect;
@property (nonatomic) double drawingScale;
@property (nonatomic) float minZ;
@property (nonatomic) float maxZ;
@property (nonatomic) long long drawCalls;

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
