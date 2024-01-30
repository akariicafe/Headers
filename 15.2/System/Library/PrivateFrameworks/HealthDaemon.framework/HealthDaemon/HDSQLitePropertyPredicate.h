@class NSString;

@interface HDSQLitePropertyPredicate : HDSQLitePredicate <NSCopying>

@property (readonly, nonatomic) NSString *property;

- (id)SQLJoinClausesForEntityClass:(Class)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isCompatibleWithPredicate:(id)a0;

@end
