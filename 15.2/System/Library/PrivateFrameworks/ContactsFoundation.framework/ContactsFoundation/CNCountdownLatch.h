@class CNUnfairLock, NSObject;
@protocol OS_dispatch_semaphore;

@interface CNCountdownLatch : NSObject {
    unsigned long long _count;
    CNUnfairLock *_lock;
    NSObject<OS_dispatch_semaphore> *_latchedSemaphore;
}

- (void)await;
- (void)countDown;
- (BOOL)hasLatched;
- (id)description;
- (BOOL)awaitWithTimeout:(double)a0;
- (id)initWithStartingCount:(unsigned long long)a0;
- (BOOL)awaitImmediate;
- (BOOL)awaitWithTimeout:(double)a0 strategy:(unsigned long long)a1;
- (BOOL)awaitOnSemaphoreWithTimeout:(double)a0;
- (BOOL)awaitWhileSpinningRunloopWithTimeout:(double)a0;
- (void).cxx_destruct;
- (id)init;

@end
