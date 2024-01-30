@class NSArray, NSString;

@interface HDSQLiteCompoundPredicate : HDSQLitePredicate <NSCopying> {
    BOOL _unary;
    BOOL _trueIfNoPredicates;
    NSString *_combinationOperation;
}

@property (readonly, nonatomic) NSArray *predicates;

+ (id)predicateWithProperty:(id)a0 notEqualToValues:(id)a1;
+ (id)predicateMatchingAllPredicates:(id)a0;
+ (id)predicateWithProperty:(id)a0 equalToValues:(id)a1;
+ (id)predicateMatchingAnyPredicates:(id)a0;
+ (id)predicateWithProperty:(id)a0 values:(id)a1 comparisonType:(long long)a2;
+ (id)negatedPredicate:(id)a0;

- (id)SQLForEntityClass:(Class)a0;
- (id)description;
- (id)SQLJoinClausesForEntityClass:(Class)a0;
- (void)bindToStatement:(struct sqlite3_stmt { } *)a0 bindingIndex:(inout int *)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isCompatibleWithPredicate:(id)a0;

@end
