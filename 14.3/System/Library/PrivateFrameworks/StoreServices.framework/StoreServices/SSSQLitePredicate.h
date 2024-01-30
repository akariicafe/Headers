@interface SSSQLitePredicate : NSObject <NSCopying>

- (void)bindToStatement:(struct sqlite3_stmt { } *)a0 bindingIndex:(inout int *)a1;
- (id)SQLForEntityClass:(Class)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)SQLJoinClausesForEntityClass:(Class)a0;

@end
