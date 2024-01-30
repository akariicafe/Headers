@class UITraitCollection;

@interface TPSAppearance : NSObject

@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) double sizeToScreenRatio;
@property (nonatomic) unsigned long long mediaSizeType;
@property (readonly, nonatomic) double displayScale;
@property (retain, nonatomic) UITraitCollection *traitCollection;

+ (id)language;
+ (id)defaultBackgroundColor;
+ (BOOL)isPhoneUI;
+ (id)boldBodyFont;
+ (double)buttonHeight;
+ (id)bodyFont;
+ (id)titleLabelFont;
+ (id)footnoteFont;
+ (id)preferredFontForTextStyle:(id)a0;
+ (id)systemFontOfSize:(double)a0 weight:(double)a1;
+ (id)secondaryLabelColor;
+ (id)secondaryBackgroundColor;
+ (id)headlineFont;
+ (id)preferredFontForTextStyle:(id)a0 symoblicTraits:(unsigned int)a1 languageCode:(id)a2;
+ (id)preferredFontForTextStyle:(id)a0 languageCode:(id)a1;
+ (double)displayMultiplier;
+ (double)introOutroTitleTopPadding;
+ (id)defaultLabelColor;
+ (id)defaultTextLabelFont;
+ (id)italicBodyFont;
+ (id)subheadlineFont;

- (double)displayScale;
- (void).cxx_destruct;
- (void)updateAppearanceWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateMediaSizeType;
- (double)nativeSizeForValue:(double)a0;
- (id)initAppearanceWithTraits:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (BOOL)isCompactLayout;
- (BOOL)sideAppMode;
- (double)displayMultiplierWithValue:(double)a0;
- (double)heightToWidthRatioFromSizes:(id)a0 mediaSizeType:(unsigned long long)a1 defaultValue:(double)a2;
- (struct CGSize { double x0; double x1; })sizeWithSizes:(id)a0 mediaSizeType:(unsigned long long)a1;

@end
