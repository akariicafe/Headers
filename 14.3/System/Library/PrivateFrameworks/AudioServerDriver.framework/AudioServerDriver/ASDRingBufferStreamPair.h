@class ASDStream;
@protocol ASDManagedRingBuffer;

@interface ASDRingBufferStreamPair : NSObject

@property (readonly, nonatomic) id<ASDManagedRingBuffer> ringBuffer;
@property (readonly, nonatomic) ASDStream *inputStream;
@property (readonly, nonatomic) ASDStream *outputStream;
@property (nonatomic) long long ringBufferFrameCapacity;

- (void).cxx_destruct;
- (id)initWithRingBufferFrameCapacity:(long long)a0 withPlugin:(id)a1;

@end
