@class WFGradient;

@interface WFIconGradientBackground : WFIconBackground

@property (readonly, nonatomic) WFGradient *gradient;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithGradient:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;

@end
