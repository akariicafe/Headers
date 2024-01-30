@interface ICWeakObject : NSObject <NSCopying>

@property (nonatomic) unsigned long long cachedHash;
@property (readonly, weak, nonatomic) id object;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithObject:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
