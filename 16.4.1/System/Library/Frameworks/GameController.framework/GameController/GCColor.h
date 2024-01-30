@interface GCColor : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) float red;
@property (readonly) float green;
@property (readonly) float blue;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)initWithRed:(float)a0 green:(float)a1 blue:(float)a2;
- (id)initWithColorPreset:(long long)a0;

@end
