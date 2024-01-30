@class TSDMetalShader, NSMutableSet, MTLRenderPassDescriptor;
@protocol MTLDevice, MTLCommandBuffer, MTLRenderCommandEncoder, MTLCommandQueue;

@interface TSDMetalContext : NSObject

@property (retain, nonatomic) NSMutableSet *retainedObjects;
@property (weak, nonatomic) id<MTLDevice> device;
@property (nonatomic) unsigned long long pixelFormat;
@property (nonatomic) struct CGSize { double width; double height; } layerSize;
@property (nonatomic) unsigned long long currentBuffer;
@property (nonatomic) struct { double currentTime; double displayLinkPresentationTime; double elapsedShowTime; } timingInfo;
@property (weak, nonatomic) id<MTLCommandQueue> commandQueue;
@property (weak, nonatomic) id<MTLCommandBuffer> commandBuffer;
@property (weak, nonatomic) MTLRenderPassDescriptor *passDescriptor;
@property (weak, nonatomic) TSDMetalShader *shader;
@property (weak, nonatomic) id<MTLRenderCommandEncoder> renderEncoder;
@property (nonatomic) struct CGColorSpace { } *destinationColorSpace;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)retainObject:(id)a0;

@end
