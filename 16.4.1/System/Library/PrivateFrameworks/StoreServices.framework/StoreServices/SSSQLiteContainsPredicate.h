@class NSString, SSSQLiteQuery;

@interface SSSQLiteContainsPredicate : SSSQLitePropertyPredicate <NSCopying>

@property (readonly, nonatomic, getter=isNegative) BOOL negative;
@property (readonly, nonatomic) SSSQLiteQuery *query;
@property (readonly, nonatomic) NSString *queryProperty;
@property (readonly, nonatomic) id values;

+ (id)containsPredicateWithProperty:(id)a0 query:(id)a1 queryProperty:(id)a2;
+ (id)containsPredicateWithProperty:(id)a0 values:(id)a1;
+ (id)doesNotContainPredicateWithProperty:(id)a0 values:(id)a1;

- (id)SQLForEntityClass:(Class)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void)bindToStatement:(struct sqlite3_stmt { } *)a0 bindingIndex:(inout int *)a1;

@end
