@interface HMPoint : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) struct CGPoint { double x; double y; } point;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
