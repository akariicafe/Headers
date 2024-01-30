@class NSString, NSMapTable;

@interface TSWPParagraphStyle : TSSStyle <TSSPreset, TSDMixing> {
    struct __CTParagraphStyle { } *_coreTextParagraphStyle;
    NSMapTable *_styleCache;
    NSMapTable *_scalePercentStyleCaches;
}

@property (readonly, nonatomic) BOOL showInSuggestedBookmarksList;
@property (readonly, nonatomic) BOOL allowAsBookmarkSuggestionStyle;
@property (nonatomic) BOOL allowsMissingPropertiesWithNoParentStyleForUpgrade;
@property (readonly, nonatomic) NSString *presetKind;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

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
- (void).cxx_destruct;
- (id)fullPropertyMap;
- (id)boxedValueForProperty:(int)a0 oldBoxedValue:(id)a1 transformedByTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2;
- (void)clearStyleCaches;
- (struct __CTFont { } *)findCachedFontForCharacterStyle:(id)a0 scalePercent:(unsigned long long)a1;
- (id)followingParagraphStyle;
- (id)getTypesetterAttributes:(id)a0 scalePercent:(unsigned long long)a1 isRightToLeft:(BOOL)a2;
- (id)initWithContext:(id)a0 name:(id)a1 overridePropertyMap:(id)a2 isVariation:(BOOL)a3;
- (id)initialListStyle;
- (void)localizeForBidi:(BOOL)a0;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (char)p_coreTextWritingDirectionFromWPWritingDirection:(int)a0;
- (void)replaceReferencedStylesUsingBlock:(id /* block */)a0;
- (void)setInitialListStyle:(id)a0;
- (void)setOverridePropertyMap:(id)a0;
- (id)styleSummary;
- (BOOL)transformsFontSizes;
- (void)willModify;
- (void)saveToArchiver:(id)a0;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (unsigned long long)minimumReadVersion;
- (long long)mixingTypeWithObject:(id)a0 context:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (void)addMissingClassProperties;
- (id)archivableRepresentationOfChangeSet:(id)a0;
- (id)fallbackFontColorWhenUnableToReadCharacterFillColor;
- (BOOL)p_contentTagIsBody;
- (id)p_coreTextCharacterStyle:(id)a0 allowLigatures:(BOOL)a1 scalePercent:(unsigned long long)a2;
- (struct __CTParagraphStyle { } *)p_createCoreTextParagraphStyleWithCharacterStyle:(id)a0 writingDirection:(int)a1;
- (id)parentStyleForFixingOrphanVariation;

@end
