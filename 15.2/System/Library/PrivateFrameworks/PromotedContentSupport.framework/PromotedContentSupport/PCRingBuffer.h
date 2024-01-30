@class NSMutableArray, APUnfairLock;

@interface PCRingBuffer : NSObject

@property (retain, nonatomic) NSMutableArray *ringBuffer;
@property (readonly, nonatomic) APUnfairLock *lock;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)cappedRingBufferTo:(unsigned long long)a0;

@end
