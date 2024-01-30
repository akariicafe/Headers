@interface SSSQLiteNullPredicate : SSSQLitePropertyPredicate <NSCopying>

@property (readonly, nonatomic) BOOL matchesNull;

+ (id)isNullPredicateWithProperty:(id)a0;
+ (id)isNotNullPredicateWithProperty:(id)a0;

- (id)SQLForEntityClass:(Class)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
