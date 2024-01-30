@interface IKDataSubscript : IKDataAccessor

@property (readonly, nonatomic) long long subscriptIndex;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithSubscriptIndex:(long long)a0;

@end
