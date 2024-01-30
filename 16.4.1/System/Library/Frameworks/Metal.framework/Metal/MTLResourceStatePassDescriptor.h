@class MTLResourceStatePassSampleBufferAttachmentDescriptorArray;

@interface MTLResourceStatePassDescriptor : NSObject <NSCopying>

@property (readonly) MTLResourceStatePassSampleBufferAttachmentDescriptorArray *sampleBufferAttachments;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)resourceStatePassDescriptor;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
