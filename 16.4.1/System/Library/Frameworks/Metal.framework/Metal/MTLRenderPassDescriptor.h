@class MTLRenderPassColorAttachmentDescriptorArray, MTLRenderPassStencilAttachmentDescriptor, MTLRenderPassDepthAttachmentDescriptor, MTLRenderPassSampleBufferAttachmentDescriptorArray;
@protocol MTLRasterizationRateMap, MTLBuffer;

@interface MTLRenderPassDescriptor : NSObject <NSCopying>

@property (readonly) MTLRenderPassColorAttachmentDescriptorArray *colorAttachments;
@property (copy, nonatomic) MTLRenderPassDepthAttachmentDescriptor *depthAttachment;
@property (copy, nonatomic) MTLRenderPassStencilAttachmentDescriptor *stencilAttachment;
@property (retain, nonatomic) id<MTLBuffer> visibilityResultBuffer;
@property (nonatomic) unsigned long long renderTargetArrayLength;
@property (nonatomic) unsigned long long imageblockSampleLength;
@property (nonatomic) unsigned long long threadgroupMemoryLength;
@property (nonatomic) unsigned long long tileWidth;
@property (nonatomic) unsigned long long tileHeight;
@property (nonatomic) unsigned long long defaultRasterSampleCount;
@property (nonatomic) unsigned long long renderTargetWidth;
@property (nonatomic) unsigned long long renderTargetHeight;
@property (retain, nonatomic) id<MTLRasterizationRateMap> rasterizationRateMap;
@property (readonly) MTLRenderPassSampleBufferAttachmentDescriptorArray *sampleBufferAttachments;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)renderPassDescriptor;

- (unsigned long long)getSamplePositions:(struct { float x0; float x1; } *)a0 count:(unsigned long long)a1;
- (void)setSamplePositions:(const struct { float x0; float x1; } *)a0 count:(unsigned long long)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
