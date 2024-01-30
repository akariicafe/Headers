@class NSArray;

@interface _HDSQLiteComparisonPredicateCoalesce : HDSQLiteComparisonPredicate

@property (readonly, copy, nonatomic) NSArray *properties;

- (id)SQLForEntityClass:(Class)a0;
- (id)description;
- (id)SQLJoinClausesForEntityClass:(Class)a0;
- (id)initWithProperties:(id)a0 value:(id)a1 comparisonType:(long long)a2;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)isCompatibleWithPredicate:(id)a0;

@end
