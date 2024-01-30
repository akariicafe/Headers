@class NSString, KNClassicStylesheetRecord, NSArray;

@interface KNTemplateSlide : KNAbstractSlide <TSKTransformableObject> {
    NSString *_name;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _objectRect;
    NSArray *_bodyParagraphStyles;
    NSArray *_bodyListStyles;
    NSString *_thumbnailTextForTitlePlaceholder;
    NSString *_thumbnailTextForBodyPlaceholder;
    BOOL _slideObjectsLayerWithTemplate;
    BOOL _hasBug16580905;
    BOOL _calculatedHasBug16580905;
}

@property (copy, nonatomic) NSString *name;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } objectRect;
@property (readonly, nonatomic) KNClassicStylesheetRecord *classicStylesheetRecord;
@property (copy, nonatomic) NSArray *bodyParagraphStyles;
@property (copy, nonatomic) NSArray *bodyListStyles;
@property (copy, nonatomic) NSString *thumbnailTextForTitlePlaceholder;
@property (copy, nonatomic) NSString *thumbnailTextForBodyPlaceholder;
@property (nonatomic) BOOL slideObjectsLayerWithTemplate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (BOOL)hasLocalizedThumbnailText;
+ (id)masterGuideColor;
+ (id)p_defaultTemplateGuideColor;
+ (void)setMasterGuideColor:(id)a0;
+ (void)templatesNotEquivalentWithFile:(id)a0 lineNumber:(long long)a1 reason:(id)a2;

- (id)objectForProperty:(int)a0;
- (void)acceptVisitor:(id)a0;
- (id)builds;
- (void)addBuild:(id)a0;
- (BOOL)isMaster;
- (void).cxx_destruct;
- (id)childEnumerator;
- (BOOL)containsProperty:(int)a0;
- (BOOL)isThemeContent;
- (void)adoptStylesheet:(id)a0 withMapper:(id)a1;
- (int)intValueForProperty:(int)a0;
- (id)packageLocator;
- (id)referencedStyles;
- (void)replaceReferencedStylesUsingBlock:(id /* block */)a0;
- (void)wasAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)willBeRemovedFromDocumentRoot:(id)a0;
- (unsigned long long)buildChunkCount;
- (BOOL)isTemplateSlide;
- (BOOL)isObjectVisible;
- (void)saveToArchiver:(id)a0;
- (id)unusedPlaceholderTagBasedOnTag:(id)a0;
- (id)buildChunks;
- (unsigned long long)buildCount;
- (id)defaultTagForDrawable:(id)a0;
- (void)flushClassicStylesheetRecord;
- (void)generateObjectPlaceholderIfNecessary;
- (BOOL)hasBug16580905;
- (id)imagePlaceholders;
- (id)initWithSlideNode:(id)a0 context:(id)a1;
- (void)insertBuildChunk:(id)a0 afterChunk:(id)a1 generateIdentifier:(BOOL)a2;
- (BOOL)isEquivalentForCrossDocumentPasteMasterComparison:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (id)nonPlaceholderObjects;
- (id)p_defaultThumbnailTextForPlaceholder:(id)a0;
- (void)removeBuild:(id)a0;
- (void)removeBuildChunk:(id)a0 rollbackGeneratedIdentifier:(BOOL)a1;
- (BOOL)supportsBuilds;
- (id)tagsForNewPlaceholderInfos:(id)a0;
- (id)thumbnailTextForPlaceholder:(id)a0;
- (void)updatePlaceholderText;
- (void)wasAddedToTheme:(id)a0;
- (void)willBeAddedToTheme:(id)a0;

@end
