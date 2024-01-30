@class NSNumber;

@interface HFPercentFormatter : NSNumberFormatter <NSCopying>

@property (copy, nonatomic) NSNumber *minimumValue;
@property (copy, nonatomic) NSNumber *maximumValue;

+ (id)_percentageFromValue:(id)a0 forMinimumValue:(id)a1 maximumValue:(id)a2;
+ (id)_valueFromPercentage:(id)a0 forMinimumValue:(id)a1 maximumValue:(id)a2;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)getObjectValue:(out id *)a0 forString:(id)a1 range:(inout struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2 error:(out id *)a3;
- (id)stringForObjectValue:(id)a0;
- (id)stringForNormalizedObjectValue:(id)a0;
- (id)stringForRelativePercentValue:(id)a0;
- (id)initWithMinimumValue:(id)a0 maximumValue:(id)a1;

@end
