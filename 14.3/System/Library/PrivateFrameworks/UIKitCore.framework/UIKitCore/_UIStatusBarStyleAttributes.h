@class UIColor, UIFont, NSArray, UITraitCollection;

@interface _UIStatusBarStyleAttributes : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) UITraitCollection *traitCollection;
@property (nonatomic, getter=isScaledFixedWidthBar) BOOL scaledFixedWidthBar;
@property (readonly, nonatomic) long long style;
@property (readonly, nonatomic) long long mode;
@property (readonly, nonatomic) long long effectiveLayoutDirection;
@property (nonatomic) double iconScale;
@property (nonatomic) long long symbolScale;
@property (nonatomic) long long iconSize;
@property (copy, nonatomic) UIFont *font;
@property (copy, nonatomic) UIFont *emphasizedFont;
@property (copy, nonatomic) UIFont *smallFont;
@property (copy, nonatomic) UIColor *textColor;
@property (copy, nonatomic) UIColor *imageTintColor;
@property (copy, nonatomic) UIColor *imageDimmedTintColor;
@property (copy, nonatomic) NSArray *imageNamePrefixes;

+ (id)overriddenStyleAttributes;
+ (id)styleAttributesForStatusBar:(id)a0 style:(long long)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)styleAttributesWithOverrides:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)fontForStyle:(long long)a0;

@end
