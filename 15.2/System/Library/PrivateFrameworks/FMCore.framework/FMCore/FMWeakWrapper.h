@interface FMWeakWrapper : NSObject <NSCopying>

@property (weak, nonatomic) id object;
@property (nonatomic) unsigned long long objectHash;

- (id)description;
- (id)initWithObject:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
