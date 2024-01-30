@protocol MTLCounterSampleBuffer;

@interface MTLRenderPassSampleBufferAttachmentDescriptor : NSObject <NSCopying>

@property (retain, nonatomic) id<MTLCounterSampleBuffer> sampleBuffer;
@property (nonatomic) unsigned long long startOfVertexSampleIndex;
@property (nonatomic) unsigned long long endOfVertexSampleIndex;
@property (nonatomic) unsigned long long startOfFragmentSampleIndex;
@property (nonatomic) unsigned long long endOfFragmentSampleIndex;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
