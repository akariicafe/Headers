@class HMFTimer, NSString, MovingAverage;

@interface HMIMemorySampler : HMFObject <HMFTimerDelegate, HMFLogging>

@property (readonly) HMFTimer *tick;
@property (readonly) MovingAverage *average;
@property long long highWaterMark;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)logCategory;

- (void)timerDidFire:(id)a0;
- (void)start;
- (void).cxx_destruct;
- (id)init;
- (void)stop;

@end
