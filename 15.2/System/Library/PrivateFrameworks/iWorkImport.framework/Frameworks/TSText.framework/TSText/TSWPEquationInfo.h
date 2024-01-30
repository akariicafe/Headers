@class NSString, EQKitEquation, TSSPropertyMap;

@interface TSWPEquationInfo : TSDImageInfo <TSWPDrawableAttachmentDescriptionProvider, TSDDrawableInfoCustomUnarchivingSubclassProviding>

@property (retain, nonatomic) EQKitEquation *equation;
@property (copy, nonatomic) NSString *source;
@property (nonatomic) double depth;
@property (retain, nonatomic) TSSPropertyMap *textProperties;
@property (readonly, nonatomic) int format;
@property (nonatomic) BOOL isInlineForPreviewImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultTextProperties;
+ (Class)drawableInfoSubclassForClass:(Class)a0 unarchiver:(id)a1;
+ (id)fontNameFromTextProperties:(id)a0;
+ (BOOL)archiveHasEquationSource:(id)a0;
+ (id)equationInfoWithContext:(id)a0 string:(id)a1 textStorage:(id)a2 charIndex:(unsigned long long)a3;
+ (id)propertiesForStorage:(id)a0 characterIndex:(unsigned long long)a1;
+ (id)filteredTextPropertiesFromTextProperties:(id)a0;
+ (id)eqKitEquationWithWithContext:(id)a0 source:(id)a1 error:(id *)a2;
+ (id)pdfImageDataWithContext:(id)a0 equation:(id)a1 layout:(id)a2 layoutContext:(id)a3 sourceString:(id)a4;
+ (id)propertiesForParagraphStyle:(id)a0 characterStyle:(id)a1;
+ (id)equationInfoWithContext:(id)a0 equationInfo:(id)a1 textStorage:(id)a2 charIndex:(unsigned long long)a3;
+ (id)propertiesForChangePropagation;

- (BOOL)isSelectable;
- (id)typeName;
- (unsigned int)elementKind;
- (void).cxx_destruct;
- (void)acceptVisitor:(id)a0;
- (Class)repClass;
- (id)copyWithContext:(id)a0;
- (Class)layoutClass;
- (void)willChangeProperty:(int)a0;
- (BOOL)canAnchor;
- (BOOL)canChangeWrapType;
- (BOOL)canAspectRatioLockBeChangedByUser;
- (struct CGSize { double x0; double x1; })defaultOriginalSize;
- (struct CGSize { double x0; double x1; })rawDataSize;
- (BOOL)canResetMediaSize;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (long long)mixingTypeWithObject:(id)a0 context:(id)a1;
- (id)typesToPromiseWhenCopyingSingleDrawable;
- (id)promisedDataForType:(id)a0;
- (BOOL)shouldGenerateThumbnails;
- (BOOL)canBeMasked;
- (BOOL)canAdjustImage;
- (BOOL)supportsStyleInspecting;
- (BOOL)canBeMediaPlaceholder;
- (void)didFinalizeUnarchivingFromWPStorage:(id)a0;
- (BOOL)needsUpdateForStyleChangeToStorage:(id)a0 charIndex:(unsigned long long)a1;
- (void)updateForStyleChangeToStorage:(id)a0 charIndex:(unsigned long long)a1;
- (void)loadCharacterStylePropertiesIntoPropertyMap:(id)a0 fromArchive:(const void *)a1 unarchiver:(id)a2;
- (BOOL)needsUpdateForStyleChangeToStorage:(id)a0 charIndex:(unsigned long long)a1 isAnchoredOrFloating:(BOOL)a2;
- (void)updateForStyleChangeToStorage:(id)a0 charIndex:(unsigned long long)a1 isAnchoredOrFloating:(BOOL)a2;
- (id)initWithContext:(id)a0 string:(id)a1 textProperties:(id)a2;
- (id)initWithContext:(id)a0 string:(id)a1 filteredTextProperties:(id)a2 equation:(id)a3 pdfImageData:(id)a4 depth:(double)a5 geometry:(id)a6 style:(id)a7;
- (void)rebuildEquationPDFIncludingGeometry:(BOOL)a0;
- (id)propertiesForParentAttachment;
- (void)updateTextProperties:(id)a0;
- (void)saveCharacterStylePropertiesFromPropertyMap:(id)a0 toArchive:(void *)a1 archiver:(id)a2;
- (id)descriptionForDrawableAttachment:(id)a0;
- (id)initWithContext:(id)a0 string:(id)a1;
- (id)initWithContext:(id)a0 string:(id)a1 targetGeometry:(id)a2;
- (void)replaceSourceWithNewSource:(id)a0;
- (id)imageDataWithObjectContext:(id)a0;

@end
