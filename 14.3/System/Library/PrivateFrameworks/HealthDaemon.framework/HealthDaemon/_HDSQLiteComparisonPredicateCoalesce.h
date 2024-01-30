@class NSArray;

@interface _HDSQLiteComparisonPredicateCoalesce : HDSQLiteComparisonPredicate

@property (readonly, copy, nonatomic) NSArray *properties;

- (void).cxx_destruct;
- (id)SQLForEntityClass:(Class)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)SQLJoinClausesForEntityClass:(Class)a0;
- (id)initWithProperties:(id)a0 value:(id)a1 comparisonType:(long long)a2;
- (BOOL)isCompatibleWithPredicate:(id)a0;

@end
