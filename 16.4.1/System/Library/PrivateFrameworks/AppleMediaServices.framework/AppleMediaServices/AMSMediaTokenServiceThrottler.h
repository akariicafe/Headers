@class NSDate;

@interface AMSMediaTokenServiceThrottler : NSObject

@property (nonatomic) unsigned long long attemptNumber;
@property (retain, nonatomic) NSDate *throttleDate;
@property (nonatomic) double baseSleepInterval;
@property (nonatomic) double maxSleepInterval;

- (void)throttle;
- (id)initWithBaseSleepInterval:(double)a0 maxSleepInterval:(double)a1;
- (double)_calculateThrottleInterval;
- (BOOL)shouldThrottle;
- (void).cxx_destruct;
- (void)reset;

@end
