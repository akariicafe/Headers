@class CNUnfairLock, NSObject;
@protocol OS_dispatch_semaphore;

@interface CNCountdownLatch : NSObject {
    unsigned long long _count;
    CNUnfairLock *_lock;
    NSObject<OS_dispatch_semaphore> *_latchedSemaphore;
}

- (void)await;
- (id)initWithStartingCount:(unsigned long long)a0;
- (BOOL)hasLatched;
- (BOOL)awaitWithTimeout:(double)a0;
- (BOOL)awaitWithTimeout:(double)a0 strategy:(unsigned long long)a1;
- (BOOL)awaitImmediate;
- (BOOL)awaitOnSemaphoreWithTimeout:(double)a0;
- (BOOL)awaitWhileSpinningRunloopWithTimeout:(double)a0;
- (id)init;
- (void).cxx_destruct;
- (id)description;
- (void)countDown;

@end
