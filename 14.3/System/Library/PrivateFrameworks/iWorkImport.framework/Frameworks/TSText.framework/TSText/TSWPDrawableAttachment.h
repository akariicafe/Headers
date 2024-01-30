@class TSDDrawableInfo;

@interface TSWPDrawableAttachment : TSWPAttachment

@property (readonly, nonatomic) TSDDrawableInfo *drawable;
@property (nonatomic) int hOffsetType;
@property (nonatomic) double hOffset;
@property (nonatomic) int vOffsetType;
@property (nonatomic) double vOffset;

+ (void)setPositionerClass:(Class)a0;

- (BOOL)isSearchable;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isDrawable;
- (id)copyWithContext:(id)a0;
- (unsigned long long)hash;
- (unsigned int)elementKind;
- (BOOL)isAnchored;
- (BOOL)isEqual:(id)a0;
- (id)childEnumerator;
- (void)invalidate;
- (id)initWithContext:(id)a0 drawable:(id)a1;
- (BOOL)isHTMLWrap;
- (void)willBeRemovedFromDocumentRoot:(id)a0;
- (void)wasRemovedFromDocumentRoot:(id)a0;
- (void)adoptStylesheet:(id)a0 withMapper:(id)a1;
- (BOOL)specifiesEnabledKnobMask;
- (void)setParentStorage:(id)a0;
- (id)detachDrawable;
- (void)attachDrawable:(id)a0;
- (BOOL)isPartitioned;
- (Class)positionerClass;
- (void)infoChanged;
- (void)willBeAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)wasAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (void)didFinalizeUnarchivingFromWPStorage:(id)a0;
- (BOOL)shouldInvalidateWhenTextPropertiesChange;
- (BOOL)needsUpdateForStyleChangeToStorage:(id)a0 charIndex:(unsigned long long)a1;
- (void)updateForStyleChangeToStorage:(id)a0 charIndex:(unsigned long long)a1;
- (id)objectsForStyleMigrating;
- (BOOL)isHorizontallyCentered;
- (BOOL)isVerticallyCentered;
- (BOOL)supportsUUID;
- (BOOL)preserveAttributesOverSelectionWhenInserting;
- (void)loadMessage:(const struct DrawableAttachmentArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct Reference *x4; unsigned int x5; float x6; unsigned int x7; float x8; } *)a0 fromUnarchiver:(id)a1;
- (void)saveMessage:(struct DrawableAttachmentArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct Reference *x4; unsigned int x5; float x6; unsigned int x7; float x8; } *)a0 toArchiver:(id)a1;
- (void)clearParentStorageForDealloc;
- (void)willBeRemovedFromDocumentRoot:(id)a0 storage:(id)a1;

@end
