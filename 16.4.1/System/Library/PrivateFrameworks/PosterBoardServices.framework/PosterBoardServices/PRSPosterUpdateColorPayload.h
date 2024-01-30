@class BSColor;

@interface PRSPosterUpdateColorPayload : PRSPosterUpdatePayload <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BSColor *color;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithColor:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)rawValue;
- (void).cxx_destruct;

@end
