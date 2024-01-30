@interface _PPTSQLiteComparisonPredicateIfNull : PPTSQLiteComparisonPredicate

@property (readonly, copy, nonatomic) id ifPropertyIsNullValue;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithProperty:(id)a0 ifPropertyIsNullValue:(id)a1 value:(id)a2 comparisonType:(long long)a3;
- (id)description;
- (void).cxx_destruct;
- (id)sqlForEntity:(id)a0;

@end
