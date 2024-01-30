@interface NSFont : UIFont <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)fontWithName:(id)a0 size:(double)a1;

- (void)encodeWithCoder:(id)a0;
- (Class)classForCoder;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
