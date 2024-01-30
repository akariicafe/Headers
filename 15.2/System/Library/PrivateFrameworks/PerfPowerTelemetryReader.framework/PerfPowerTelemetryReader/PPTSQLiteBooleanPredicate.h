@interface PPTSQLiteBooleanPredicate : PPTSQLitePredicate <NSCopying>

@property (readonly, nonatomic) BOOL booleanValue;

+ (id)falsePredicate;
+ (id)truePredicate;

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)sqlForEntity:(id)a0;

@end
