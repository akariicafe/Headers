@interface NSFont : UIFont <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)fontWithName:(id)a0 size:(double)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;

@end
