@class SCLState;

@interface SCLActiveDurationAnalyticsSource : NSObject

@property (nonatomic) unsigned long long activeStartTimestamp;
@property (readonly, nonatomic) struct mach_timebase_info { unsigned int numer; unsigned int denom; } timebase;
@property (copy, nonatomic) SCLState *currentState;

- (id)initWithInitialState:(id)a0;
- (void).cxx_destruct;
- (void)commitAnalyticsEventForTransitionFromState:(id)a0 toState:(id)a1;
- (BOOL)isActiveForState:(id)a0;
- (unsigned long long)secondsSinceContinuousTimestamp:(unsigned long long)a0;
- (unsigned long long)secondsWithMachTimeInterval:(unsigned long long)a0;
- (void)server:(id)a0 didUpdateState:(id)a1 fromState:(id)a2;

@end
