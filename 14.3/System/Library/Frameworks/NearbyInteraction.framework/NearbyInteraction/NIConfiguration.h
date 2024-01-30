@interface NIConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)new;

- (id)initInternal;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToConfiguration:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
