@class ASCOfferBackgroundStyle, UIColor;

@interface ASCOfferTheme : NSObject <NSCopying>

@property (class, readonly) ASCOfferTheme *loadingTheme;
@property (class, readonly) ASCOfferTheme *whiteOnGrayTheme;
@property (class, readonly) ASCOfferTheme *essoTheme;
@property (class, readonly) ASCOfferTheme *viewInAppStoreTheme;
@property (class, readonly) ASCOfferTheme *grayTheme;
@property (class, readonly) ASCOfferTheme *blueTheme;
@property (class, readonly) ASCOfferTheme *whiteTheme;
@property (class, readonly) ASCOfferTheme *adTheme;
@property (class, readonly) ASCOfferTheme *primaryTheme;
@property (class, readonly) ASCOfferTheme *secondaryTheme;

@property (readonly, retain, nonatomic) ASCOfferBackgroundStyle *backgroundStyle;
@property (readonly, nonatomic) UIColor *titleBackgroundColor;
@property (readonly, nonatomic) UIColor *titleTextColor;
@property (readonly, nonatomic) UIColor *titleTextDisabledColor;
@property (readonly, nonatomic) UIColor *subtitleTextColor;
@property (readonly, nonatomic) UIColor *iconTintColor;
@property (readonly, nonatomic) UIColor *progressColor;
@property (readonly, nonatomic) double progressLineWidth;
@property (readonly, nonatomic) int progressLineCap;
@property (readonly, nonatomic) double stopIndicatorRatio;
@property (readonly, nonatomic) struct CGSize { double width; double height; } stopIndicatorCornerSize;

+ (id)confirmationForTheme:(id)a0;

- (id)clone;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithTitleBackgroundColor:(id)a0 titleTextColor:(id)a1 titleTextDisabledColor:(id)a2 subtitleTextColor:(id)a3 iconTintColor:(id)a4 progressColor:(id)a5;
- (id)initWithTitleBackgroundColor:(id)a0 titleTextColor:(id)a1 subtitleTextColor:(id)a2 iconTintColor:(id)a3 progressColor:(id)a4;
- (id)initWithTitleBackgroundColor:(id)a0 titleTextColor:(id)a1 titleTextDisabledColor:(id)a2 subtitleTextColor:(id)a3 iconTintColor:(id)a4 progressColor:(id)a5 progressLineWidth:(double)a6 progressLineCap:(int)a7 stopIndicatorRatio:(double)a8 stopIndicatorCornerSize:(struct CGSize { double x0; double x1; })a9 backgroundStyle:(id)a10;
- (id)offerThemeWithBackgroundStyle:(id)a0;
- (id)offerThemeWithProgressLineCap:(int)a0;
- (id)offerThemeWithProgressLineWidth:(double)a0;
- (id)offerThemeWithStopIndicatorRatio:(double)a0;

@end
