@class NSString, HKQuantityType, HKQuantity;

@interface HDWorkoutStatisticsPredicate : HDSQLitePredicate {
    NSString *_column;
    HKQuantity *_quantity;
    HKQuantityType *_quantityType;
    long long _comparisonType;
}

+ (id)_predicateForColumn:(id)a0 quantity:(id)a1 quantityType:(id)a2 operatorType:(unsigned long long)a3;
+ (id)predicateForAverageQuantity:(id)a0 quantityType:(id)a1 operatorType:(unsigned long long)a2;
+ (id)predicateForMaximumQuantity:(id)a0 quantityType:(id)a1 operatorType:(unsigned long long)a2;
+ (id)predicateForMinimumQuantity:(id)a0 quantityType:(id)a1 operatorType:(unsigned long long)a2;
+ (id)predicateForSumQuantity:(id)a0 quantityType:(id)a1 operatorType:(unsigned long long)a2;

- (id)SQLForEntityClass:(Class)a0;
- (id)_init;
- (void)bindToStatement:(struct sqlite3_stmt { } *)a0 bindingIndex:(inout int *)a1;
- (id)description;
- (void).cxx_destruct;

@end
