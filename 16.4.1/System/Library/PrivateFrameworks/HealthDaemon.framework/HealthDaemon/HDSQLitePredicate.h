@interface HDSQLitePredicate : NSObject <NSCopying>

+ (id)falsePredicate;
+ (id)truePredicate;
+ (id)booleanPredicateWithValue:(BOOL)a0;
+ (id)compoundPredicateWithPredicate:(id)a0 otherPredicate:(id)a1;
+ (id)disjunctionWithPredicate:(id)a0 otherPredicate:(id)a1;

- (id)SQLForEntityClass:(Class)a0;
- (BOOL)isCompatibleWithPredicate:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)bindToStatement:(struct sqlite3_stmt { } *)a0 bindingIndex:(int *)a1;
- (id)SQLJoinClausesForEntityClass:(Class)a0;

@end
