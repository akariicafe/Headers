@class UIFont, MPULayoutInterpolator;

@interface MPUFontDescriptor : NSObject <NSCopying, NSMutableCopying> {
    UIFont *_preferredFont;
    struct { double ascender; BOOL isAscenderInitialized; double bodyLeading; BOOL isBodyLeadingInitialized; double capHeight; BOOL isCapHeightInitialized; double descender; BOOL isDescenderInitialized; double lineHeight; BOOL isLineHeightInitialized; } _preferredFontMetrics;
    UIFont *_defaultFont;
    struct { double ascender; BOOL isAscenderInitialized; double bodyLeading; BOOL isBodyLeadingInitialized; double capHeight; BOOL isCapHeightInitialized; double descender; BOOL isDescenderInitialized; double lineHeight; BOOL isLineHeightInitialized; } _defaultFontMetrics;
    MPULayoutInterpolator *_customFontPointSizeLayoutInterpolator;
}

@property (readonly, nonatomic) long long textStyle;
@property (readonly, nonatomic) double systemFontSize;
@property (readonly, nonatomic) long long weight;
@property (readonly, nonatomic) double defaultPointSizeAdjustment;
@property (readonly, nonatomic) long long leadingAdjustment;
@property (readonly, nonatomic) BOOL usesItalic;
@property (readonly, nonatomic) BOOL usesCondensedMetrics;
@property (readonly, nonatomic) BOOL wantsMonospaceNumbers;
@property (readonly, nonatomic) UIFont *preferredFont;
@property (readonly, nonatomic) double preferredFontAscender;
@property (readonly, nonatomic) double preferredFontBodyLeading;
@property (readonly, nonatomic) double preferredFontCapHeight;
@property (readonly, nonatomic) double preferredFontDescender;
@property (readonly, nonatomic) double preferredFontLineHeight;
@property (readonly, nonatomic) UIFont *defaultFont;
@property (readonly, nonatomic) double defaultFontLineHeight;

+ (id)invalidationHandler;
+ (id)fontDescriptorWithTextStyle:(long long)a0 leadingAdjustment:(long long)a1 weight:(long long)a2;
+ (id)fontDescriptorWithTextStyle:(long long)a0 leadingAdjustment:(long long)a1 weight:(long long)a2 defaultPointSizeAdjustment:(double)a3;
+ (id)_fontDescriptorWithTextStyle:(long long)a0 leadingAdjustment:(long long)a1 weight:(long long)a2 systemFontSize:(double)a3 defaultPointSizeAdjustment:(double)a4;
+ (id)fontDescriptorWithSystemFontSize:(double)a0 leadingAdjustment:(long long)a1 weight:(long long)a2;
+ (double)_layoutInterpolatorReferenceMetricForContentSizeCategory:(id)a0;
+ (id)_baseNativeTextStyleForTextStyle:(long long)a0;
+ (id)_adjustedNativeFontDescriptorWithBaseNativeFontDescriptor:(id)a0 forCustomTextStyle:(long long)a1;
+ (void)_getNativeFontDescriptorSymbolicTraits:(unsigned int *)a0 nativeTextStyleAttribute:(id *)a1 forWeight:(long long)a2 textStyle:(long long)a3;
+ (unsigned int)_nativeFontDescriptorSymbolicTraitsForLeadingAdjustment:(long long)a0;
+ (unsigned int)_nativeFontDescriptorSymbolicTraitsForUsingItalic:(BOOL)a0 isCondensedMetrics:(BOOL)a1;
+ (id)_fontPointSizeLayoutInterpolatorForTextStyle:(long long)a0;
+ (id)fontDescriptorWithTextStyle:(long long)a0;
+ (id)fontDescriptorWithTextStyle:(long long)a0 weight:(long long)a1;
+ (id)fontDescriptorWithTextStyle:(long long)a0 leadingAdjustment:(long long)a1;
+ (id)fontDescriptorWithSystemFontSize:(double)a0;
+ (id)fontDescriptorWithSystemFontSize:(double)a0 weight:(long long)a1;
+ (id)fontDescriptorWithSystemFontSize:(double)a0 leadingAdjustment:(long long)a1;

- (void)_resetToDefaultValues;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (double)scaledValueForValue:(double)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (void)_handleFontDescriptorDidInvalidateCachedFontsAndMetricsNotification:(id)a0;
- (id)_preferredFontDescriptorForTextStyle:(long long)a0;
- (id)_fontWithBaseNativeFontDescriptorProvider:(id /* block */)a0;
- (id)_defaultFontDescriptorForTextStyle:(long long)a0;
- (double)defaultFontBodyLeading;
- (void)_invalidateCachedFontsAndMetrics;
- (id)_fontPointSizeLayoutInterpolator;
- (double)defaultFontAscender;
- (double)defaultFontCapHeight;
- (double)defaultFontDescender;

@end
