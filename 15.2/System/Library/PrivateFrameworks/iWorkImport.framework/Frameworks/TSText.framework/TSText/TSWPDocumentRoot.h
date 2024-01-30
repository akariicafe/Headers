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

- (void)willClose;
- (double)bodyWidth;
- (void).cxx_destruct;
- (id)documentId;
- (id)ignoredWords;
- (void)documentDidLoad;
- (BOOL)shouldHyphenate;
- (const struct __CFLocale { } *)hyphenationLocale;
- (id)changeSessionManagerForModel:(id)a0;
- (BOOL)useLigatures;
- (id)documentFonts;
- (id)changeVisibility;
- (id)unavailableDocumentFonts;
- (int)naturalAlignmentAtCharIndex:(unsigned long long)a0 inTextStorage:(id)a1;
- (int)verticalAlignmentForTextStorage:(id)a0;
- (BOOL)isSectionModel:(id)a0;
- (id)flowInfoContainer;
- (BOOL)containsVerticalText;
- (BOOL)isSectionTemplateInfo:(id)a0;
- (BOOL)cellCommentsAllowedOnInfo:(id)a0;
- (BOOL)textIsVerticalInStorage:(id)a0 atCharIndex:(unsigned long long)a1;
- (BOOL)isDrawableOnSectionTemplatePage:(id)a0;
- (BOOL)validatedLoadFromUnarchiver:(id)a0;
- (void)fontUpdatedForStyleClient:(id)a0;
- (BOOL)has_30356142_build;
- (id)p_fontsInStylesheetUsingBlock:(id /* block */)a0;
- (void)addIgnoredWord:(id)a0;
- (void)removeIgnoredWord:(id)a0;
- (BOOL)isIgnoringWord:(id)a0;
- (id)documentTSWPFontObjects;
- (int)fullyJustifiedAlignmentAtCharIndex:(unsigned long long)a0 inTextStorage:(id)a1;

@end
