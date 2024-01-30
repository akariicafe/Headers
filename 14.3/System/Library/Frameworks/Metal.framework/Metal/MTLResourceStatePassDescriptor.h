@class MTLResourceStatePassSampleBufferAttachmentDescriptorArray;

@interface MTLResourceStatePassDescriptor : NSObject <NSCopying>

@property (readonly) MTLResourceStatePassSampleBufferAttachmentDescriptorArray *sampleBufferAttachments;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)resourceStatePassDescriptor;
+ (id)alloc;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
