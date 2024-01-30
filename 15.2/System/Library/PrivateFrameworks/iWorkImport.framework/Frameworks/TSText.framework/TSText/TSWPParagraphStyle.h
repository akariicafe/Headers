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

- (void).cxx_destruct;
- (void)dealloc;
- (void)willModify;
- (id)initWithContext:(id)a0 name:(id)a1 overridePropertyMap:(id)a2 isVariation:(BOOL)a3;
- (BOOL)transformsFontSizes;
- (id)fullPropertyMap;
- (void)setOverridePropertyMap:(id)a0;
- (id)boxedValueForProperty:(int)a0 oldBoxedValue:(id)a1 transformedByTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (void)clearStyleCaches;
- (id)getTypesetterAttributes:(id)a0 scalePercent:(unsigned long long)a1 isRightToLeft:(BOOL)a2;
- (char)p_coreTextWritingDirectionFromWPWritingDirection:(int)a0;
- (struct __CTFont { } *)findCachedFontForCharacterStyle:(id)a0 scalePercent:(unsigned long long)a1;
- (id)followingParagraphStyle;
- (void)setInitialListStyle:(id)a0;
- (id)initialListStyle;
- (void)localizeForBidi:(BOOL)a0;
- (id)styleSummary;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (long long)mixingTypeWithObject:(id)a0 context:(id)a1;
- (unsigned long long)minimumReadVersion;
- (void)addMissingClassProperties;
- (id)parentStyleForFixingOrphanVariation;
- (id)archivableRepresentationOfChangeSet:(id)a0;
- (struct __CTParagraphStyle { } *)p_createCoreTextParagraphStyleWithCharacterStyle:(id)a0 writingDirection:(int)a1;
- (id)p_coreTextCharacterStyle:(id)a0 allowLigatures:(BOOL)a1 scalePercent:(unsigned long long)a2;
- (id)fallbackFontColorWhenUnableToReadCharacterFillColor;
- (BOOL)p_contentTagIsBody;

@end
