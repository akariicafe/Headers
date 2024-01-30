@class MTLRenderPassDescriptor;
@protocol MTLRenderCommandEncoder, MTLCommandBuffer;

@interface RBMetalRenderState : NSObject

@property (nonatomic) unsigned int flags;
@property (nonatomic) int blendMode;
@property (nonatomic) float alpha;
@property (retain, nonatomic) id<MTLCommandBuffer> commandBuffer;
@property (retain, nonatomic) MTLRenderPassDescriptor *descriptor;
@property (nonatomic) unsigned long long formatKey;
@property (retain, nonatomic) id<MTLRenderCommandEncoder> encoder;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) struct { unsigned long long x; unsigned long long y; unsigned long long width; unsigned long long height; } bounds;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } CTM;

- (void)dealloc;

@end
