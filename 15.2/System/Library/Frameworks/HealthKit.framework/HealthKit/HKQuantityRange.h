@class HKQuantity;

@interface HKQuantityRange : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) HKQuantity *minimum;
@property (copy, nonatomic) HKQuantity *maximum;
@property (nonatomic) BOOL isMinimumInclusive;
@property (nonatomic) BOOL isMaximumInclusive;

+ (id)ATTDLevel2HypoglycemicRangeWithUnit:(id)a0;
+ (id)ATTDLevel1HypoglycemicRangeWithUnit:(id)a0;
+ (id)ATTDEuglycemicRangeWithUnit:(id)a0;
+ (id)ATTDHyperglycemicRangeWithUnit:(id)a0;
+ (id)ATTDGlycemicRangesWithUnit:(id)a0;
+ (id)inclusiveRangeWithMinimum:(id)a0 maximum:(id)a1;
+ (id)exclusiveRangeWithMinimum:(id)a0 maximum:(id)a1;
+ (BOOL)areRangesDisjoint:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMinimum:(id)a0 maximum:(id)a1 isMinimumInclusive:(BOOL)a2 isMaximumInclusive:(BOOL)a3;
- (BOOL)intersectsRange:(id)a0;
- (BOOL)containsQuantity:(id)a0;

@end
