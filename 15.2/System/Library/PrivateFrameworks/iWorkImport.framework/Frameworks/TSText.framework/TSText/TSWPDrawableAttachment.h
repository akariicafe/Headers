@class TSDDrawableInfo;

@interface TSWPDrawableAttachment : TSWPAttachment

@property (readonly, nonatomic) TSDDrawableInfo *drawable;
@property (nonatomic) int hOffsetType;
@property (nonatomic) double hOffset;
@property (nonatomic) int vOffsetType;
@property (nonatomic) double vOffset;

- (BOOL)isDrawable;
- (unsigned int)elementKind;
- (BOOL)isAnchored;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)invalidate;
- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)isSearchable;
- (id)copyWithContext:(id)a0;
- (id)childEnumerator;
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
- (void)loadMessage:(const void *)a0 fromUnarchiver:(id)a1;
- (void)saveMessage:(void *)a0 toArchiver:(id)a1;
- (void)clearParentStorageForDealloc;
- (void)willBeRemovedFromDocumentRoot:(id)a0 storage:(id)a1;

@end
