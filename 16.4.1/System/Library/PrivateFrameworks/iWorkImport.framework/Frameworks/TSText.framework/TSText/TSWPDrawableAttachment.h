@class NSUUID, TSDDrawableInfo;

@interface TSWPDrawableAttachment : TSWPAttachment {
    NSUUID *_drawableUUID;
}

@property (readonly, nonatomic) TSDDrawableInfo *drawable;
@property (nonatomic) int hOffsetType;
@property (nonatomic) double hOffset;
@property (nonatomic) int vOffsetType;
@property (nonatomic) double vOffset;

- (BOOL)isDrawable;
- (BOOL)isSearchable;
- (void)dealloc;
- (unsigned int)elementKind;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)invalidate;
- (void).cxx_destruct;
- (BOOL)isAnchored;
- (id)childEnumerator;
- (id)copyWithContext:(id)a0;
- (id)initWithContext:(id)a0 drawable:(id)a1;
- (BOOL)isHTMLWrap;
- (void)attachDrawable:(id)a0;
- (void)adoptStylesheet:(id)a0 withMapper:(id)a1;
- (id)detachDrawable;
- (void)infoChanged;
- (BOOL)isPartitioned;
- (void)setParentStorage:(id)a0;
- (BOOL)specifiesEnabledKnobMask;
- (void)wasAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)wasRemovedFromDocumentRoot:(id)a0;
- (void)willBeAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)willBeRemovedFromDocumentRoot:(id)a0;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (void)clearParentStorageForDealloc;
- (void)didFinalizeUnarchivingFromWPStorage:(id)a0;
- (BOOL)isHorizontallyCentered;
- (BOOL)isVerticallyCentered;
- (void)loadMessage:(const void *)a0 fromUnarchiver:(id)a1;
- (BOOL)needsUpdateForStyleChangeToStorage:(id)a0 charIndex:(unsigned long long)a1;
- (id)objectsForStyleMigrating;
- (BOOL)preserveAttributesOverSelectionWhenInserting;
- (void)saveMessage:(void *)a0 toArchiver:(id)a1;
- (BOOL)shouldInvalidateWhenTextPropertiesChange;
- (BOOL)supportsUUID;
- (void)updateForStyleChangeToStorage:(id)a0 charIndex:(unsigned long long)a1;
- (void)willBeRemovedFromDocumentRoot:(id)a0 storage:(id)a1;

@end
