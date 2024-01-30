@class TSDInfoGeometry, NSArray, TSWPStorage, TSPObject, NSString, NSObject;
@protocol TSDInfo, TSDOwningAttachment, TSDContainerInfo;

@interface KNNoteInfo : TSPObject <TSDContainerInfo, TSWPStorageParent, TSKDocumentObject, TSKTransformableObject> {
    NSObject<TSDContainerInfo> *_parentInfo;
}

@property (retain, nonatomic) TSWPStorage *containedStorage;
@property (readonly, nonatomic) int verticalAlignment;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frameForPrinting;
@property (nonatomic) BOOL shrinkTextForPrinting;
@property (nonatomic) unsigned long long initialCharacterIndexForExporting;
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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL matchesObjectPlaceholderGeometry;
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

+ (BOOL)needsObjectUUID;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)copyWithContext:(id)a0;
- (BOOL)isSelectable;
- (id)childEnumerator;
- (Class)repClass;
- (Class)layoutClass;
- (void)clearBackPointerToParentInfoIfNeeded:(id)a0;
- (BOOL)isThemeContent;
- (BOOL)textIsVerticalAtCharIndex:(unsigned long long)a0;
- (void)willBeRemovedFromDocumentRoot:(id)a0;
- (void)wasRemovedFromDocumentRoot:(id)a0;
- (void)adoptStylesheet:(id)a0 withMapper:(id)a1;
- (void)willBeAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)wasAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (BOOL)shouldHideEmptyBullets;
- (id)objectUUIDPath;
- (void)setPrimitiveGeometry:(id)a0;
- (void)loadFromArchive:(const struct NoteArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct Reference *x4; } *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(struct NoteArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct Reference *x4; } *)a0 archiver:(id)a1;
- (id)infoForSelectionPath:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (id)initWithContext:(id)a0 containedStorage:(id)a1;

@end
