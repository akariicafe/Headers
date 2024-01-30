@interface BRCSyncBudgetThrottle : NSObject <NSSecureCoding> {
    double _t0;
    float _values[8];
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) float lastMinute;
@property (readonly, nonatomic) float lastHour;
@property (readonly, nonatomic) float lastDay;

- (double)_timeToLoseAmount:(float)a0 count:(int)a1;
- (void)clear;
- (void)consume:(float)a0;
- (void)encodeWithCoder:(id)a0;
- (float)availableBudgetWithDefaults:(id)a0;
- (id)description;
- (double)nextDateWithBudgetWithDefaults:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)debugDescriptionWithDefaults:(id)a0;
- (void)updateForTime:(double)a0;

@end
