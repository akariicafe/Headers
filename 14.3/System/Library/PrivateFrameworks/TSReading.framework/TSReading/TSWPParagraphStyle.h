@class NSString;

@interface TSWPParagraphStyle : TSSStyle <TSSPreset> {
    void *_coreTextParagraphStyle;
    struct __CFDictionary { } *_styleCache;
    struct __CFDictionary { } *_scalePercentStyleCaches;
}

@property (readonly, nonatomic) NSString *presetKind;

+ (void)initialize;
+ (id)properties;
+ (id)defaultStyleWithContext:(id)a0;
+ (id)paragraphProperties;
+ (id)defaultValueForProperty:(int)a0;
+ (int)defaultIntValueForProperty:(int)a0;
+ (float)defaultFloatValueForProperty:(int)a0;
+ (id)defaultPropertyMap;
+ (id)propertiesAllowingNSNull;
+ (id)paragraphPropertiesAllowingNSNull;
+ (id)p_normalDecimalSeparator;
+ (id)deprecatedProperties;
+ (id)styleSummaryForPropertyMap:(id)a0;
+ (id)nonEmphasisParagraphProperties;
+ (id)presetStyleDescriptor;

- (void)dealloc;
- (BOOL)transformsFontSizes;
- (SEL)mapThemePropertyMapSelector;
- (id)fullPropertyMap;
- (void)setOverridePropertyMap:(id)a0;
- (void)clearStyleCaches;
- (unsigned long long)p_lineBoundsOptions;
- (struct __CTParagraphStyle { } *)p_createCoreTextParagraphStyleWithCharacterStyle:(id)a0 writingDirection:(int)a1 lineBoundsOptions:(unsigned long long)a2;
- (struct __CFDictionary { } *)p_newCoreTextCharacterStyle:(id)a0 allowLigatures:(BOOL)a1 scalePercent:(unsigned long long)a2;
- (struct __CFDictionary { } *)getTypesetterAttributes:(id)a0 scalePercent:(unsigned long long)a1 isRightToLeft:(BOOL)a2;
- (char)p_coreTextWritingDirectionFromWPWritingDirection:(int)a0;
- (struct __CTFont { } *)findCachedFontForCharacterStyle:(id)a0 scalePercent:(unsigned long long)a1;
- (id)followingParagraphStyle;
- (id)contentTag;
- (void)setInitialListStyle:(id)a0;
- (id)initialListStyle;
- (void)localizeForRightToLeft;
- (void)localizeForBidi:(BOOL)a0;
- (id)styleSummary;

@end
