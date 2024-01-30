@interface NIConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long suspensionPolicy;
@property unsigned long long enabledGestures;

+ (id)new;

- (void)encodeWithCoder:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (id)initInternal;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasEqualEnabledGestures:(id)a0;
- (id)descriptionInternal;

@end
