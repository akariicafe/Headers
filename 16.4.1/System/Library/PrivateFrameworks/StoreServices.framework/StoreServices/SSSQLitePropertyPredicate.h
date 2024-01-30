@class NSString;

@interface SSSQLitePropertyPredicate : SSSQLitePredicate <NSCopying>

@property (readonly, nonatomic) NSString *property;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)SQLJoinClausesForEntityClass:(Class)a0;

@end
