@interface IDSMPIdentity : NSObject <NSCopying>

@property (readonly, nonatomic) void *backingValue;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)description;
- (id)initWithBackingValue:(void *)a0;

@end
