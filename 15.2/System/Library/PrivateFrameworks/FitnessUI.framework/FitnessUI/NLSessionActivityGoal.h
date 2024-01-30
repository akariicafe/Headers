@class HKQuantity;

@interface NLSessionActivityGoal : NSObject <NSSecureCoding> {
    double _doubleValue;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long goalTypeIdentifier;
@property (retain, nonatomic) HKQuantity *value;

+ (id)goalWithGoalTypeIdentifier:(unsigned long long)a0 value:(id)a1;
+ (id)goalFromURL:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (double)doubleValue;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (double)_doubleValueForQuantity:(id)a0;
- (id)_quantityForDoubleValue:(double)a0;
- (id)initWithGoalTypeIdentifier:(unsigned long long)a0 value:(id)a1;
- (BOOL)isEqualToNLSessionActivityGoal:(id)a0;

@end
