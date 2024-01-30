@class WFColor;

@interface WFIconColorBackground : WFIconBackground

@property (class, readonly, nonatomic) WFIconColorBackground *clearBackground;

@property (readonly, nonatomic) WFColor *color;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithColor:(id)a0;
- (unsigned long long)hash;

@end
