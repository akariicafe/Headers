@interface _SBWindowReference : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long pointer;
@property (readonly, nonatomic) id object;

+ (id)referenceForObject:(id)a0;

- (id)description;
- (id)initWithObject:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
