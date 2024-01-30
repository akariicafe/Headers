@class NSArray, HKUnit, NSDate;

@interface HKChartableCodedQuantitySet : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSArray *codings;
@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, copy, nonatomic) NSArray *quantities;
@property (readonly, copy, nonatomic) HKUnit *compatibleUnit;

+ (id)setWithChartableQuantity:(id)a0 date:(id)a1;
+ (id)setWithMedicalCodings:(id)a0 quantities:(id)a1 date:(id)a2 error:(id *)a3;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)_initWithMedicalCodings:(id)a0 date:(id)a1 quantities:(id)a2;
- (id)chartableCodedQuantitySetByChangingDate:(id)a0;
- (void)addChartableCodedQuantities:(id)a0;
- (double)minValueForUnit:(id)a0;
- (double)maxValueForUnit:(id)a0;
- (id)chartableCodedQuantitySetConvertedToUnit:(id)a0 error:(id *)a1;
- (double)minValueIncludingReferenceRangeForUnit:(id)a0;
- (double)maxValueIncludingReferenceRangeForUnit:(id)a0;
- (BOOL)isCompatibleWithUnit:(id)a0;

@end
