@protocol NSObject;

@interface _HDSQLiteComparisonPredicateIfNull : HDSQLiteComparisonPredicate

@property (readonly, copy, nonatomic) id<NSObject> ifPropertyIsNullValue;

- (id)SQLForEntityClass:(Class)a0;
- (id)description;
- (void)bindToStatement:(struct sqlite3_stmt { } *)a0 bindingIndex:(int *)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithProperty:(id)a0 ifPropertyIsNullValue:(id)a1 value:(id)a2 comparisonType:(long long)a3;

@end
