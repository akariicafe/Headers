@class LPTapToLoadViewStyle, LPTextViewStyle, UIFont, LPPointUnit, LPCaptionBarStyle, LPVideoViewStyle, LPImageViewStyle, UIColor;

@interface LPTheme : NSObject {
    long long _style;
    unsigned long long _sizeClass;
    long long _platform;
    BOOL _isFallbackIcon;
}

@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *highlightColor;
@property (readonly, nonatomic) LPCaptionBarStyle *captionBar;
@property (readonly, nonatomic) LPTextViewStyle *quotedText;
@property (readonly, nonatomic) LPImageViewStyle *mediaImage;
@property (readonly, nonatomic) LPImageViewStyle *placeholderIcon;
@property (readonly, nonatomic) LPVideoViewStyle *mediaVideo;
@property (retain, nonatomic) UIColor *mediaBackgroundColor;
@property (readonly, nonatomic) LPCaptionBarStyle *mediaTopCaptionBar;
@property (readonly, nonatomic) LPCaptionBarStyle *mediaBottomCaptionBar;
@property (readonly, nonatomic) LPTapToLoadViewStyle *tapToLoad;
@property (readonly, nonatomic) UIFont *domainNameIndicatorFont;
@property (readonly, nonatomic) UIFont *domainNameIndicatorIconFont;
@property (retain, nonatomic) LPPointUnit *maximumWidth;
@property (retain, nonatomic) LPPointUnit *maximumIntrinsicHeight;
@property (nonatomic) double widthFractionForTallMedia;

+ (void)addClient:(id)a0;
+ (id)primaryLabelColor;
+ (id)themeWithStyle:(long long)a0 icon:(id)a1 platform:(long long)a2 sizeClass:(unsigned long long)a3;
+ (id)secondaryLabelColor;
+ (id)iconPlatterPaddingForReason:(long long)a0;
+ (id)iconPlatterCornerRadius;
+ (id)regularTheme;
+ (double)largestIconSizeInPoints;
+ (void)invalidateThemeCache;

- (void).cxx_destruct;
- (id)valueForUndefinedKey:(id)a0;
- (id)CSSTextForThemeProperty:(id)a0 allowsAlternateProperties:(BOOL)a1;
- (id)valueForThemeProperty:(id)a0;
- (id)CSSTextForProperty:(id)a0 withValue:(id)a1 allowsAlternateProperties:(BOOL)a2;
- (id)CSSCustomPropertiesForThemePropertiesInSet:(id)a0;
- (void)adjustForStyle;
- (id)initWithStyle:(long long)a0 icon:(id)a1 platform:(long long)a2 sizeClass:(unsigned long long)a3;

@end
