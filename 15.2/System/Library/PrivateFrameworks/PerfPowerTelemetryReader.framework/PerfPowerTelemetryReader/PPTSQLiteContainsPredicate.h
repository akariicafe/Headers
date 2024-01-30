@class NSArray;

@interface PPTSQLiteContainsPredicate : PPTSQLitePropertyPredicate <NSCopying>

@property (readonly, nonatomic) BOOL isNegative;
@property (readonly, copy, nonatomic) NSArray *values;

+ (id)doesNotContainPredicateWithProperty:(id)a0 values:(id)a1;
+ (id)containsPredicateWithProperty:(id)a0 values:(id)a1;
+ (id)_containsPredicateWithProperty:(id)a0 values:(id)a1 isNegative:(BOOL)a2;
+ (id)_arrayFromValues:(id)a0;

- (id)description;
- (void)bindToStatement:(struct sqlite3_stmt { } *)a0 bindingIndex:(inout int *)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)sqlForEntity:(id)a0;
- (id)initWithProperty:(id)a0 values:(id)a1 isNegative:(BOOL)a2;

@end
