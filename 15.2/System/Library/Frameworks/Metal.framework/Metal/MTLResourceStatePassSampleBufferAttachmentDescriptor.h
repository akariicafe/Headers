@protocol MTLCounterSampleBuffer;

@interface MTLResourceStatePassSampleBufferAttachmentDescriptor : NSObject <NSCopying>

@property (retain, nonatomic) id<MTLCounterSampleBuffer> sampleBuffer;
@property (nonatomic) unsigned long long startOfEncoderSampleIndex;
@property (nonatomic) unsigned long long endOfEncoderSampleIndex;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
