@class NSDate;

@interface HKValueRange : NSObject <NSCopying>

@property (copy, nonatomic) id minValue;
@property (copy, nonatomic) id maxValue;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;

+ (id)valueRangeWithMinValue:(id)a0 maxValue:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (void)unionRange:(id)a0;
- (BOOL)containsValue:(id)a0 exclusiveStart:(BOOL)a1 exclusiveEnd:(BOOL)a2;
- (BOOL)hk_animatable;
- (id)hk_midPointToValue:(id)a0 percentage:(double)a1;
- (void)unionMaxValueWithRange:(id)a0;
- (void)unionMinValueWithRange:(id)a0;

@end
