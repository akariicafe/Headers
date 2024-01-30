@class HKQuantity;

@interface NLSessionActivityGoal : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long goalTypeIdentifier;
@property (copy, nonatomic) HKQuantity *value;

+ (id)goalWithGoalTypeIdentifier:(unsigned long long)a0 value:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (double)doubleValue;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqualToNLSessionActivityGoal:(id)a0;
- (id)_quantityForDoubleValue:(double)a0;
- (id)initWithGoalTypeIdentifier:(unsigned long long)a0 value:(id)a1;

@end
