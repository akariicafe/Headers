@class NSString;

@interface SSSQLitePropertyPredicate : SSSQLitePredicate <NSCopying>

@property (readonly, nonatomic) NSString *property;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)SQLJoinClausesForEntityClass:(Class)a0;

@end
