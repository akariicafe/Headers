@class NSArray, NSString;

@interface SSSQLiteCompoundPredicate : SSSQLitePredicate <NSCopying> {
    NSString *_combinationOperation;
}

@property (readonly, nonatomic) NSArray *predicates;

+ (id)predicateMatchingAllPredicates:(id)a0;
+ (id)predicateMatchingAnyPredicates:(id)a0;
+ (id)predicateWithProperty:(id)a0 values:(id)a1 comparisonType:(long long)a2;

- (id)SQLForEntityClass:(Class)a0;
- (id)SQLJoinClausesForEntityClass:(Class)a0;
- (void)bindToStatement:(struct sqlite3_stmt { } *)a0 bindingIndex:(inout int *)a1;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;

@end
