@interface _HDSQLiteComparisonPredicateIfNull : HDSQLiteComparisonPredicate

@property (readonly, copy, nonatomic) id ifPropertyIsNullValue;

- (void)bindToStatement:(struct sqlite3_stmt { } *)a0 bindingIndex:(int *)a1;
- (void).cxx_destruct;
- (id)SQLForEntityClass:(Class)a0;
- (id)initWithProperty:(id)a0 ifPropertyIsNullValue:(id)a1 value:(id)a2 comparisonType:(long long)a3;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
