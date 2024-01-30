@interface FMWeakWrapper : NSObject <NSCopying>

@property (weak, nonatomic) id object;
@property (nonatomic) unsigned long long objectHash;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithObject:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
