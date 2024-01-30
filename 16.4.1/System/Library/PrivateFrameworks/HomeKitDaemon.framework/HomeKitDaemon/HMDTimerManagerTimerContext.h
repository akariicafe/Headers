@interface HMDTimerManagerTimerContext : NSObject

@property (class, readonly, nonatomic) id /* block */ comparator;

@property (readonly, nonatomic) double expirationTime;
@property (readonly) id object;

- (void).cxx_destruct;
- (id)initWithObject:(id)a0 expirationTime:(double)a1;

@end
