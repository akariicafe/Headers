@interface RTStateTransitionOneTimeTrans : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double start_s;
@property (nonatomic) double stop_s;
@property (nonatomic) unsigned long long motionActivityType;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithStart:(double)a0 stop:(double)a1 motionActivityType:(unsigned long long)a2;

@end
