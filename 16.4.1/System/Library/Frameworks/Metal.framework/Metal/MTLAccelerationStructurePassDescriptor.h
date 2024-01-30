@class MTLAccelerationStructurePassSampleBufferAttachmentDescriptorArray;

@interface MTLAccelerationStructurePassDescriptor : NSObject <NSCopying>

@property (readonly) MTLAccelerationStructurePassSampleBufferAttachmentDescriptorArray *sampleBufferAttachments;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)accelerationStructurePassDescriptor;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)convertToComputePassDescriptor;

@end
