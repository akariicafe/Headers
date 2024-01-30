@protocol MTLCounterSampleBuffer;

@interface MTLAccelerationStructurePassSampleBufferAttachmentDescriptor : NSObject <NSCopying>

@property (retain, nonatomic) id<MTLCounterSampleBuffer> sampleBuffer;
@property (nonatomic) unsigned long long startOfEncoderSampleIndex;
@property (nonatomic) unsigned long long endOfEncoderSampleIndex;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;

@end
