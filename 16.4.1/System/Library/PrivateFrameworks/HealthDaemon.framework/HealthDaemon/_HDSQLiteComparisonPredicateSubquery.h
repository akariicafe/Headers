@class HDSQLiteQueryDescriptor, NSArray;

@interface _HDSQLiteComparisonPredicateSubquery : HDSQLiteComparisonPredicate

@property (readonly, copy, nonatomic) HDSQLiteQueryDescriptor *subqueryDescriptor;
@property (readonly, copy, nonatomic) NSArray *subqueryProperties;

- (id)SQLForEntityClass:(Class)a0;
- (id)initWithProperty:(id)a0 comparisonType:(long long)a1 subqueryDescriptor:(id)a2 subqueryProperties:(id)a3;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)bindToStatement:(struct sqlite3_stmt { } *)a0 bindingIndex:(int *)a1;
- (id)description;
- (void).cxx_destruct;

@end
