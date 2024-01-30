@class NSString;

@interface AMSSQLitePropertyPredicate : AMSSQLitePredicate <NSCopying>

@property (readonly, nonatomic) NSString *property;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)SQLJoinClausesForEntityClass:(Class)a0;

@end
