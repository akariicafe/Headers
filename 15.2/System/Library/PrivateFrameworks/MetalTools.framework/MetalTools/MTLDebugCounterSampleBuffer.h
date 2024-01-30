@class MTLCounterSampleBufferDescriptor;

@interface MTLDebugCounterSampleBuffer : MTLToolsCounterSampleBuffer

@property (readonly, nonatomic) MTLCounterSampleBufferDescriptor *descriptor;
@property (readonly, nonatomic) unsigned long long storageMode;

- (id)description;
- (id)formattedDescription:(unsigned long long)a0;
- (void)dealloc;
- (id)resolveCounterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)initWithCounterSampleBuffer:(id)a0 device:(id)a1 descriptor:(id)a2;

@end
