@class NSUUID, EQKitEnvironment, NSMutableSet, TSULocale;
@protocol TSWPTOCController;

@interface TSWPDocumentRoot : TSKDocumentRoot <TSWPObjectIndex> {
    NSUUID *_uuid;
    NSMutableSet *_ignoredWords;
}

@property (readonly, nonatomic) double stickyCommentScaleMultiplier;
@property (readonly, nonatomic, getter=isChangeTrackingEnabled) BOOL changeTrackingEnabled;
@property (readonly, nonatomic) BOOL supportHeaderFooterParagraphAlignmentInInspectors;
@property (readonly, nonatomic) EQKitEnvironment *equationEnvironment;
@property (nonatomic) BOOL didRemoveMissingAttachments;
@property (readonly, nonatomic) TSULocale *typesettingLocale;
@property (readonly, nonatomic) id<TSWPTOCController> tocInfoController;
@property (nonatomic) BOOL laysOutBodyVertically;

+ (id)STIXFonts;

- (void)willClose;
- (id)documentId;
- (void).cxx_destruct;
- (id)ignoredWords;
- (double)bodyWidth;
- (BOOL)shouldHyphenate;
- (void)documentDidLoad;
- (const struct __CFLocale { } *)hyphenationLocale;
- (id)changeSessionManagerForModel:(id)a0;
- (id)changeVisibility;
- (id)documentFonts;
- (id)unavailableDocumentFonts;
- (BOOL)useLigatures;
- (void)addIgnoredWord:(id)a0;
- (BOOL)isIgnoringWord:(id)a0;
- (BOOL)isSectionModel:(id)a0;
- (BOOL)cellCommentsAllowedOnInfo:(id)a0;
- (BOOL)containsEquation;
- (BOOL)containsVerticalText;
- (id)documentTSWPFontObjects;
- (id)flowInfoContainer;
- (void)fontUpdatedForStyleClient:(id)a0;
- (long long)fullyJustifiedAlignmentAtCharIndex:(unsigned long long)a0 inTextStorage:(id)a1;
- (BOOL)has_30356142_build;
- (BOOL)isDrawableOnSectionTemplatePage:(id)a0;
- (BOOL)isSectionInfo:(id)a0;
- (BOOL)isSectionTemplateInfo:(id)a0;
- (long long)naturalAlignmentAtCharIndex:(unsigned long long)a0 inTextStorage:(id)a1;
- (id)p_fontsInStylesheetUsingBlock:(id /* block */)a0;
- (void)removeIgnoredWord:(id)a0;
- (BOOL)textIsVerticalInStorage:(id)a0 atCharIndex:(unsigned long long)a1;
- (BOOL)validatedLoadFromUnarchiver:(id)a0;
- (int)verticalAlignmentForTextStorage:(id)a0;

@end
