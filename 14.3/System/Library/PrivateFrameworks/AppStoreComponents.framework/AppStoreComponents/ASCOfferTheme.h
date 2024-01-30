@class UIColor;

@interface ASCOfferTheme : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) ASCOfferTheme *loadingTheme;
@property (class, readonly) ASCOfferTheme *grayTheme;
@property (class, readonly) ASCOfferTheme *blueTheme;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) UIColor *titleBackgroundColor;
@property (readonly, nonatomic) UIColor *titleTextColor;
@property (readonly, nonatomic) UIColor *subtitleTextColor;
@property (readonly, nonatomic) UIColor *iconTintColor;
@property (readonly, nonatomic) UIColor *progressColor;

+ (id)confirmationForTheme:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTitleBackgroundColor:(id)a0 titleTextColor:(id)a1 subtitleTextColor:(id)a2 iconTintColor:(id)a3 progressColor:(id)a4;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
