@class WFColor;

@interface WFGradient : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) WFColor *baseColor;
@property (readonly, nonatomic) WFColor *darkBaseColor;
@property (readonly, nonatomic) WFColor *accessibilityBaseColor;
@property (readonly, nonatomic) WFColor *darkAccessibilityBaseColor;
@property (readonly, nonatomic) WFColor *startColor;
@property (readonly, nonatomic) WFColor *endColor;
@property (readonly, nonatomic) long long blendMode;
@property (readonly, nonatomic) struct CGGradient { } *CGGradient;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithColor:(id)a0;
- (void)dealloc;
- (id)initWithStartColor:(id)a0 endColor:(id)a1;
- (id)baseColorForDarkMode:(BOOL)a0 highContrast:(BOOL)a1;
- (id)initWithBaseColor:(id)a0 startColor:(id)a1 endColor:(id)a2 blendMode:(long long)a3;
- (id)initWithBaseColor:(id)a0 darkBaseColor:(id)a1 accessibilityBaseColor:(id)a2 darkAccessibilityBaseColor:(id)a3 startColor:(id)a4 endColor:(id)a5 blendMode:(long long)a6;

@end
