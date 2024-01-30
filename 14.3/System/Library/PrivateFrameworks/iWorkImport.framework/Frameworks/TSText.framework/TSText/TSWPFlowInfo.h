@class TSDInfoGeometry, NSArray, TSWPStorage, NSString, TSUColor, NSObject, TSPObject;
@protocol TSDInfo, TSDOwningAttachment;

@interface TSWPFlowInfo : TSPObject <TSWPFlowInfo, TSDContainerInfo, TSDLockableInfo, TSWPStorageParent, TSDSelectionStatisticsContributor>

@property (retain, nonatomic) TSWPStorage *textStorage;
@property (retain, nonatomic) NSArray *textboxes;
@property (nonatomic) unsigned long long userInterfaceIdentifier;
@property (readonly, nonatomic) TSUColor *userInterfaceFillColor;
@property (readonly, nonatomic) TSUColor *userInterfaceStrokeColor;
@property (readonly, nonatomic) BOOL isLocked;
@property (readonly, nonatomic) unsigned long long textOrientation;
@property (readonly, nonatomic) BOOL containsRotatedOrFlippedTextBox;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
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
@property (readonly, nonatomic) long long nestedTextboxDepth;
@property (readonly, copy, nonatomic) NSArray *childInfos;
@property (readonly, nonatomic) BOOL isMaster;
@property (readonly, nonatomic, getter=isLocked) BOOL locked;
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
+ (id)fillColorForUserInterfaceIdentifier:(unsigned long long)a0;
+ (id)strokeColorForUserInterfaceIdentifier:(unsigned long long)a0;
+ (id)p_colorForIndex:(unsigned long long)a0;
+ (id)p_darkColorForColor:(id)a0;
+ (id)p_darkColorForIndex:(unsigned long long)a0;

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
- (void)processSelectedStoragesWithStatisticsController:(id)a0;
- (void)willBeAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)wasAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)setPrimitiveGeometry:(id)a0;
- (id)infoForSelectionPath:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (unsigned long long)indexOfTextBox:(id)a0;
- (id)displayNameOfMaxLength:(unsigned long long)a0 usesEllipsis:(BOOL)a1;
- (id)initWithStorage:(id)a0 context:(id)a1;
- (void)loadFromFlowInfoArchive:(const struct FlowInfoArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TSP::Reference> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct Reference *x5; unsigned int x6; } *)a0 unarchiver:(id)a1;
- (void)pSaveToFlowInfoArchive:(struct FlowInfoArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TSP::Reference> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct Reference *x5; unsigned int x6; } *)a0 archiver:(id)a1 textBoxes:(id)a2;
- (void)i_uncheckedSetTextboxes:(id)a0;
- (void)saveWithOnlyLinkedTextBoxes:(id)a0 archiver:(id)a1;
- (id)extractTextStorage;

@end
