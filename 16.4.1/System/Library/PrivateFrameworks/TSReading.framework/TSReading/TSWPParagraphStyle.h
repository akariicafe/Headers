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
+ (float)defaultFloatValueForProperty:(int)a0;
+ (int)defaultIntValueForProperty:(int)a0;
+ (id)defaultPropertyMap;
+ (id)defaultValueForProperty:(int)a0;
+ (id)deprecatedProperties;
+ (id)nonEmphasisParagraphProperties;
+ (id)p_normalDecimalSeparator;
+ (id)paragraphProperties;
+ (id)paragraphPropertiesAllowingNSNull;
+ (id)presetStyleDescriptor;
+ (id)propertiesAllowingNSNull;
+ (id)styleSummaryForPropertyMap:(id)a0;

- (void)dealloc;
- (id)contentTag;
- (id)fullPropertyMap;
- (void)clearStyleCaches;
- (struct __CTFont { } *)findCachedFontForCharacterStyle:(id)a0 scalePercent:(unsigned long long)a1;
- (id)followingParagraphStyle;
- (struct __CFDictionary { } *)getTypesetterAttributes:(id)a0 scalePercent:(unsigned long long)a1 isRightToLeft:(BOOL)a2;
- (id)initialListStyle;
- (void)localizeForBidi:(BOOL)a0;
- (void)localizeForRightToLeft;
- (SEL)mapThemePropertyMapSelector;
- (char)p_coreTextWritingDirectionFromWPWritingDirection:(int)a0;
- (struct __CTParagraphStyle { } *)p_createCoreTextParagraphStyleWithCharacterStyle:(id)a0 writingDirection:(int)a1 lineBoundsOptions:(unsigned long long)a2;
- (unsigned long long)p_lineBoundsOptions;
- (struct __CFDictionary { } *)p_newCoreTextCharacterStyle:(id)a0 allowLigatures:(BOOL)a1 scalePercent:(unsigned long long)a2;
- (void)setInitialListStyle:(id)a0;
- (void)setOverridePropertyMap:(id)a0;
- (id)styleSummary;
- (BOOL)transformsFontSizes;

@end
