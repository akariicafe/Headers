@class UIColor;

@interface SKUIColorScheme : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long schemeStyle;
@property (copy, nonatomic) UIColor *backgroundColor;
@property (copy, nonatomic) UIColor *highlightedTextColor;
@property (copy, nonatomic) UIColor *primaryTextColor;
@property (copy, nonatomic) UIColor *secondaryTextColor;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithColorSchemeDictionary:(id)a0;

@end
