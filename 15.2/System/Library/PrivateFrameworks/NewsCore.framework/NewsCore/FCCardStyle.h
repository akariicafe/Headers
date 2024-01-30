@class FCColor, FCColorGradient, NSString;

@interface FCCardStyle : NSObject <FCCardStyleProviding>

@property (copy, nonatomic) FCColor *titleForegroundColor;
@property (copy, nonatomic) FCColor *eyebrowForegroundColor;
@property (copy, nonatomic) FCColor *cardBackgroundColor;
@property (copy, nonatomic) FCColor *cardForegroundColor;
@property (copy, nonatomic) FCColorGradient *sauceGradient;
@property (copy, nonatomic) FCColor *ctaBackgroundColor;
@property (copy, nonatomic) FCColor *ctaForegroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)styleWithConfigDict:(id)a0;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTitleForegroundColor:(id)a0 eyebrowForegroundColor:(id)a1 cardBackgroundColor:(id)a2 cardForegroundColor:(id)a3 sauceGradient:(id)a4 ctaBackgroundColor:(id)a5 ctaForegroundColor:(id)a6;

@end
