@interface REMChangeToken : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (long long)compareToken:(id)a0 error:(id *)a1;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
