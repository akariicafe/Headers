@class NSMutableArray, APUnfairLock;

@interface PCRingBuffer : NSObject

@property (retain, nonatomic) NSMutableArray *ringBuffer;
@property (readonly, nonatomic) APUnfairLock *lock;

+ (id)sharedInstance;

- (void)cappedRingBufferTo:(unsigned long long)a0;
- (id)init;
- (void).cxx_destruct;

@end
