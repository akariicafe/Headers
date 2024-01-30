@class NSArray;

@interface HDSQLiteContainsPredicate : HDSQLitePropertyPredicate <NSCopying>

@property (readonly, nonatomic) BOOL contains;
@property (readonly, copy, nonatomic) NSArray *values;

+ (id)doesNotContainPredicateWithProperty:(id)a0 values:(id)a1;
+ (id)containsPredicateWithProperty:(id)a0 values:(id)a1;

- (id)SQLForEntityClass:(Class)a0;
- (id)description;
- (void)bindToStatement:(struct sqlite3_stmt { } *)a0 bindingIndex:(int *)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithProperty:(id)a0 values:(id)a1 contains:(BOOL)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isCompatibleWithPredicate:(id)a0;

@end
