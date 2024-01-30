@class LPTapToLoadViewStyle, LPPointUnit, UIFont, LPContactsBadgeStyle, LPCaptionBarStyle, LPVideoViewStyle, NSString, LPQuotedTextViewStyle, LPImageViewStyle, UIColor;

@interface LPTheme : NSObject {
    long long _style;
    unsigned long long _sizeClass;
    long long _platform;
    BOOL _isFallbackIcon;
    double _dynamicTypeLeadingScalingFactor;
    NSString *_preferredContentSizeCategory;
}

@property (retain, nonatomic) LPPointUnit *cornerRadius;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *highlightColor;
@property (readonly, nonatomic) LPCaptionBarStyle *captionBar;
@property (readonly, nonatomic) LPQuotedTextViewStyle *quotedText;
@property (readonly, nonatomic) LPImageViewStyle *mediaImage;
@property (readonly, nonatomic) LPImageViewStyle *placeholderImage;
@property (readonly, nonatomic) LPVideoViewStyle *mediaVideo;
@property (retain, nonatomic) UIColor *mediaBackgroundColor;
@property (readonly, nonatomic) LPCaptionBarStyle *mediaTopCaptionBar;
@property (readonly, nonatomic) LPCaptionBarStyle *mediaBottomCaptionBar;
@property (readonly, nonatomic) LPTapToLoadViewStyle *tapToLoad;
@property (readonly, nonatomic) UIFont *domainNameIndicatorFont;
@property (readonly, nonatomic) UIFont *domainNameIndicatorIconFont;
@property (readonly, nonatomic) LPImageViewStyle *backgroundImage;
@property (readonly, nonatomic) LPContactsBadgeStyle *contactsBadgeStyle;
@property (retain, nonatomic) LPPointUnit *maximumWidth;
@property (retain, nonatomic) LPPointUnit *maximumIntrinsicHeight;
@property (nonatomic) double widthFractionForTallMedia;

+ (id)primaryLabelColor;
+ (void)addClient:(id)a0;
+ (id)secondaryLabelColor;
+ (id)themeWithStyle:(long long)a0 icon:(id)a1 platform:(long long)a2 sizeClass:(unsigned long long)a3 preferredContentSizeCategory:(id)a4;
+ (id)iconPlatterPaddingForReason:(long long)a0;
+ (id)iconPlatterCornerRadius;
+ (id)regularTheme;
+ (double)largestIconSizeInPoints;
+ (void)invalidateThemeCache;

- (id)valueForUndefinedKey:(id)a0;
- (void).cxx_destruct;
- (id)CSSTextForThemeProperty:(id)a0;
- (id)initWithStyle:(long long)a0 icon:(id)a1 platform:(long long)a2 sizeClass:(unsigned long long)a3 preferredContentSizeCategory:(id)a4;
- (void)adjustForStyle;
- (id)valueForThemeProperty:(id)a0;
- (id)CSSTextForProperty:(id)a0 withValue:(id)a1;

@end
