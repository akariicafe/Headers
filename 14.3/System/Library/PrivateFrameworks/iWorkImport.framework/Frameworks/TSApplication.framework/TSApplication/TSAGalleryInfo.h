@class TSDInfoGeometry, NSArray, TSWPStorage, NSString, TSPObject, NSObject, TSDMediaStyle;
@protocol TSDInfo, TSDOwningAttachment;

@interface TSAGalleryInfo : TSDDrawableInfo <TSWPStorageParent, TSDContainerInfo, TSDModelContainer, TSDReducibleImageContainer, TSDCompatibilityAwareMediaContainer, TSDMixing, TSDDrawableInfoCustomUnarchivingSubclassProviding> {
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

- (BOOL)needsDownload;
- (void).cxx_destruct;
- (id)copyWithContext:(id)a0;
- (unsigned int)elementKind;
- (BOOL)isSelectable;
- (id)childEnumerator;
- (Class)repClass;
- (Class)layoutClass;
- (void)acceptVisitor:(id)a0;
- (id)initWithContext:(id)a0 geometry:(id)a1;
- (BOOL)allowsTitle;
- (BOOL)textIsVerticalAtCharIndex:(unsigned long long)a0;
- (unsigned long long)chunkCountForTextureDeliveryStyle:(unsigned long long)a0 byGlyphStyle:(int)a1 animationFilter:(id)a2;
- (void)willBeRemovedFromDocumentRoot:(id)a0;
- (void)wasRemovedFromDocumentRoot:(id)a0;
- (void)adoptStylesheet:(id)a0 withMapper:(id)a1;
- (id)animationFilters;
- (unsigned long long)chunkCountForTextureDeliveryStyle:(unsigned long long)a0 animationFilter:(id)a1;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (BOOL)supportsParentRotation;
- (struct CGSize { double x0; double x1; })targetSizeForImageData:(id)a0 associatedHint:(id)a1;
- (void)willBeAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)wasAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (id)childEnumeratorForUserSearch;
- (void)loadFromArchive:(const struct ImageArchive { void /* function */ **x0; struct ExtensionSet { struct Arena *x0; unsigned short x1; unsigned short x2; union AllocatedData { struct KeyValue *x0; struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > *x1; } x3; } x1; struct InternalMetadataWithArena { void *x0; } x2; struct HasBits<1> { unsigned int x0[1]; } x3; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x4; struct DrawableArchive *x5; struct Reference *x6; struct Reference *x7; struct Size *x8; struct Reference *x9; struct Reference *x10; struct Reference *x11; struct Size *x12; struct Path *x13; struct DataReference *x14; struct DataReference *x15; struct DataReference *x16; struct ImageAdjustmentsArchive *x17; struct DataReference *x18; struct DataReference *x19; struct DataReference *x20; struct Path *x21; struct Attribution *x22; unsigned int x23; BOOL x24; BOOL x25; } *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(struct ImageArchive { void /* function */ **x0; struct ExtensionSet { struct Arena *x0; unsigned short x1; unsigned short x2; union AllocatedData { struct KeyValue *x0; struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > *x1; } x3; } x1; struct InternalMetadataWithArena { void *x0; } x2; struct HasBits<1> { unsigned int x0[1]; } x3; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x4; struct DrawableArchive *x5; struct Reference *x6; struct Reference *x7; struct Size *x8; struct Reference *x9; struct Reference *x10; struct Reference *x11; struct Size *x12; struct Path *x13; struct DataReference *x14; struct DataReference *x15; struct DataReference *x16; struct ImageAdjustmentsArchive *x17; struct DataReference *x18; struct DataReference *x19; struct DataReference *x20; struct Path *x21; struct Attribution *x22; unsigned int x23; BOOL x24; BOOL x25; } *)a0 archiver:(id)a1;
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
