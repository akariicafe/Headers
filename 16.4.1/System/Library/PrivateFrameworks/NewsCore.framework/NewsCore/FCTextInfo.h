@class FCColor, FCLoadableFont;

@interface FCTextInfo : NSObject <NSCopying>

@property (copy, nonatomic) FCLoadableFont *font;
@property (nonatomic) long long fontSizeAdjustment;
@property (nonatomic) double lineHeightMultiplier;
@property (copy, nonatomic) FCColor *color;

+ (id)textInfoFromJSONValues:(id)a0;

- (double)fontSizeWithInitialFontSize:(double)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
