@class HKQuantity, NSArray, HKCodedQuantity, NSNumber;

@interface HKChartableCodedQuantity : NSObject <NSCopying>

@property (copy, nonatomic) HKCodedQuantity *originalCodedQuantity;
@property (copy, nonatomic) HKCodedQuantity *originalRangeLowCodedQuantity;
@property (copy, nonatomic) HKCodedQuantity *originalRangeHighCodedQuantity;
@property (readonly, copy, nonatomic) NSArray *codings;
@property (readonly, copy, nonatomic) HKQuantity *quantity;
@property (readonly, nonatomic) BOOL hasRange;
@property (readonly, nonatomic) BOOL isInRange;
@property (readonly, nonatomic) double doubleValue;
@property (readonly, copy, nonatomic) NSNumber *rangeLow;
@property (readonly, copy, nonatomic) NSNumber *rangeHigh;

+ (id)chartableCodedQuantityWithCodings:(id)a0 originalCodedQuantity:(id)a1 originalRangeLowCodedQuantity:(id)a2 originalRangeHighCodedQuantity:(id)a3 error:(id *)a4;
+ (id)_valueFromCodedQuantity:(id)a0 inUnit:(id)a1 error:(id *)a2;
+ (id)converter;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCodings:(id)a0 quantity:(id)a1 rangeLow:(id)a2 rangeHigh:(id)a3;
- (id)chartableCodedQuantityInUnit:(id)a0 adoptUnitIfNullUnit:(BOOL)a1 error:(id *)a2;
- (id)chartableCodedQuantityInUnit:(id)a0 error:(id *)a1;
- (id)description;
- (double)doubleValueForUnit:(id)a0;
- (BOOL)isCompatibleWithUnit:(id)a0;

@end
