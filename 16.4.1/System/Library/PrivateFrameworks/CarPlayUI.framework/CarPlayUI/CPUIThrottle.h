@class NSDate;

@interface CPUIThrottle : NSObject

@property (readonly, nonatomic, getter=isThrottled) BOOL throttled;
@property (readonly, nonatomic) NSDate *unthrottleDate;
@property (readonly, nonatomic) NSDate *throttleDate;
@property (readonly, nonatomic) unsigned long long attempts;
@property (readonly, nonatomic) double base;
@property (readonly, nonatomic) double factor;
@property (readonly, nonatomic) double max;

- (void)unthrottle;
- (id)initWithBase:(double)a0;
- (void).cxx_destruct;
- (BOOL)incrementAttempts;
- (id)initWithBase:(double)a0 factor:(double)a1 max:(double)a2;

@end
