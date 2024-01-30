@interface IDSMPIdentity : NSObject <NSCopying>

@property (readonly, nonatomic) void *backingValue;

- (id)initWithBackingValue:(void *)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
