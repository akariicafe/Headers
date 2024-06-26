@class TSDInfoGeometry, NSArray, TSWPStorage, NSString, TSPObject, NSObject, TSDMediaStyle;
@protocol TSDInfo, TSDOwningAttachment;

@interface TSAGalleryInfo : TSDDrawableInfo <TSWPStorageParent, TSDContainerInfo, TSDModelContainer, TSDReducibleImageContainer, TSDCompatibilityAwareMediaContainer, TSDSelectableHintMediaContainer, TSDMixing, TSDDrawableInfoCustomUnarchivingSubclassProviding> {
    long long _captionMode;
    TSWPStorage *_captionStorage;
    BOOL _isInDocument;
    TSDMediaStyle *_archivedImageStyle;
}

@property (copy, nonatomic) NSArray *items;
@property (nonatomic) long long captionMode;
@property (readonly, nonatomic) TSWPStorage *captionStorage;
@property (readonly, nonatomic) BOOL autoListRecognition;
@property (readonly, nonatomic) BOOL autoListTermination;
@property (readonly, nonatomic) BOOL textIsLinked;
@property (readonly, nonatomic) BOOL preventsComments;
@property (readonly, nonatomic) BOOL preventsChangeTracking;
@property (readonly, nonatomic) BOOL supportsMultipleColumns;
@property (readonly, nonatomic) long long contentWritingDirection;
@property (readonly, nonatomic) BOOL storageChangesInvalidateWrap;
@property (readonly, nonatomic) BOOL supportsVerticalTextLayoutInChildStorages;
@property (readonly, nonatomic) BOOL supportsDropCapsInChildStorages;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *childInfos;
@property (readonly, nonatomic) BOOL isMaster;
@property (copy, nonatomic) TSDInfoGeometry *geometry;
@property (nonatomic) NSObject<TSDInfo> *parentInfo;
@property (nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property (readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property (readonly, nonatomic, getter=isFloatingAboveText) BOOL floatingAboveText;
@property (readonly, nonatomic, getter=isAnchoredToText) BOOL anchoredToText;
@property (readonly, nonatomic, getter=isInlineWithText) BOOL inlineWithText;
@property (readonly, nonatomic, getter=isInlineWithTextWithWrap) BOOL inlineWithTextWithWrap;
@property (readonly, nonatomic, getter=isAttachedToBodyText) BOOL attachedToBodyText;
@property (nonatomic) BOOL matchesObjectPlaceholderGeometry;
@property (readonly, nonatomic) NSArray *containedModels;

+ (Class)drawableInfoSubclassForClass:(Class)a0 unarchiver:(id)a1;
+ (id)i_newCaptionStorageWithContext:(id)a0;
+ (void)i_configureCaptionStorage:(id)a0;
+ (id)defaultGalleryCaptionParagraphStyleInStylesheet:(id)a0;
+ (id)p_overrideCaptionParagraphStyleIdentifier;
+ (id)p_paragraphStyleWithLocalizedNameKey:(id)a0 inStylesheet:(id)a1;
+ (BOOL)p_stylesAreEqualForOutgoingStorage:(id)a0 incomingStorage:(id)a1;

- (BOOL)isSelectable;
- (id)typeName;
- (unsigned int)elementKind;
- (void).cxx_destruct;
- (BOOL)needsDownload;
- (void)acceptVisitor:(id)a0;
- (Class)repClass;
- (id)copyWithContext:(id)a0;
- (id)childEnumerator;
- (Class)layoutClass;
- (id)initWithContext:(id)a0 geometry:(id)a1;
- (BOOL)allowsTitle;
- (BOOL)textIsVerticalAtCharIndex:(unsigned long long)a0;
- (unsigned long long)chunkCountForTextureDeliveryStyle:(unsigned long long)a0 byGlyphStyle:(int)a1 animationFilter:(id)a2;
- (void)willBeRemovedFromDocumentRoot:(id)a0;
- (void)wasRemovedFromDocumentRoot:(id)a0;
- (BOOL)supportsHyperlinks;
- (void)adoptStylesheet:(id)a0 withMapper:(id)a1;
- (id)animationFilters;
- (unsigned long long)chunkCountForTextureDeliveryStyle:(unsigned long long)a0 animationFilter:(id)a1;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (BOOL)supportsParentRotation;
- (struct CGSize { double x0; double x1; })targetSizeForImageData:(id)a0 associatedHint:(id)a1;
- (void)willBeAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)wasAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (id)childEnumeratorForUserSearch;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (void)insertContainedModel:(id)a0 atIndex:(unsigned long long)a1;
- (void)removeContainedModel:(id)a0;
- (void)moveModel:(id)a0 toIndex:(unsigned long long)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (long long)mixingTypeWithObject:(id)a0 context:(id)a1;
- (BOOL)allowsCaption;
- (BOOL)wantsCounterRotationWhenNotSupportingParentRotationInRotatedParent;
- (void)setCaptionStorage:(id)a0;
- (BOOL)canCopyData;
- (id)initWithContext:(id)a0 geometry:(id)a1 captionStorage:(id)a2;

@end
