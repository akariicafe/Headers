@class NSObject;
@protocol OS_dispatch_queue;

@interface HKThrottleCallback : NSObject

@property (nonatomic) long long throttleDelayInNanoseconds;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *throttlingQueue;
@property (nonatomic) BOOL delayInProgress;
@property (copy, nonatomic) id /* block */ lastExecutionBlock;

- (void).cxx_destruct;
- (void)executeWithThrottle:(id /* block */)a0;
- (id)initWithThrottleDelay:(double)a0;

@end
