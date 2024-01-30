@class HKQuantityType;

@interface _HKWorkoutActivityComparisonFilter : _HKComparisonFilter

@property (readonly, copy, nonatomic) HKQuantityType *quantityType;

+ (long long)enumRepresentationForKeyPath:(id)a0;
+ (BOOL)areValidTypes:(id)a0 forKeyPath:(id)a1 error:(id *)a2;
+ (id)allowedValueClassesForKeyPath:(id)a0;
+ (BOOL)isSupportedKeyPath:(id)a0;
+ (id)allowedDataTypeClassesForKeyPath:(id)a0;
+ (BOOL)isValidValue:(id)a0 forKeyPath:(id)a1 operatorType:(unsigned long long)a2 dataTypes:(id)a3 error:(id *)a4;
+ (BOOL)isAllowedPredicateOperatorType:(unsigned long long)a0 forKeyPath:(id)a1;
+ (id)_quantityTypeFromKeyPath:(id)a0 prefix:(id)a1;
+ (BOOL)requiresSubpredicate;

- (void).cxx_destruct;
- (BOOL)_acceptsActivityWithActivityType:(unsigned long long)a0;
- (BOOL)_acceptsActivityWithDate:(id)a0;
- (BOOL)_acceptsActivityWithDuration:(double)a0;
- (BOOL)_acceptsActivityWithQuantity:(id)a0;
- (BOOL)acceptsDataObject:(id)a0;
- (BOOL)acceptsWorkoutActivity:(id)a0;
- (void)configureInMemoryFilter;

@end
