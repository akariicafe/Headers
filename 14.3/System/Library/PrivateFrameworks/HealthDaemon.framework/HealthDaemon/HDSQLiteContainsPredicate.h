@class NSArray;

@interface HDSQLiteContainsPredicate : HDSQLitePropertyPredicate <NSCopying>

@property (readonly, nonatomic) BOOL contains;
@property (readonly, copy, nonatomic) NSArray *values;

+ (id)_arrayFromValues:(id)a0;
+ (id)doesNotContainPredicateWithProperty:(id)a0 values:(id)a1;
+ (id)_containsPredicateWithProperty:(id)a0 values:(id)a1 contains:(BOOL)a2;
+ (id)containsPredicateWithProperty:(id)a0 values:(id)a1;

- (void)bindToStatement:(struct sqlite3_stmt { } *)a0 bindingIndex:(int *)a1;
- (void).cxx_destruct;
- (id)SQLForEntityClass:(Class)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isCompatibleWithPredicate:(id)a0;
- (id)initWithProperty:(id)a0 values:(id)a1 contains:(BOOL)a2;

@end
