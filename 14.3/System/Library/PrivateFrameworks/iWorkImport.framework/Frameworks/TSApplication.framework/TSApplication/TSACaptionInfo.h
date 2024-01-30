@class TSACaptionPlacement;

@interface TSACaptionInfo : TSWPShapeInfo

@property (retain, nonatomic) TSACaptionPlacement *placement;
@property (nonatomic) long long childInfoKind;
@property (readonly, nonatomic) BOOL isHidden;

+ (BOOL)isCaption;
+ (BOOL)wantsTitleAndCaptionUUIDs;

- (void).cxx_destruct;
- (id)copyWithContext:(id)a0;
- (BOOL)isLocked;
- (void)setLocked:(BOOL)a0;
- (BOOL)isLockable;
- (Class)repClass;
- (Class)layoutClass;
- (id)owningAttachment;
- (void)setOwningAttachment:(id)a0;
- (id)owningAttachmentNoRecurse;
- (id)initWithContext:(id)a0 geometry:(id)a1;
- (id)exteriorTextWrap;
- (BOOL)allowsTitle;
- (BOOL)supportsAttachedComments;
- (BOOL)supportsHyperlinks;
- (BOOL)canAnchor;
- (BOOL)canChangeWrapType;
- (BOOL)displaysInstructionalText;
- (id)instructionalText;
- (void)loadFromArchive:(const struct CaptionInfoArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ShapeInfoArchive *x4; struct Reference *x5; int x6; } *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(struct CaptionInfoArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ShapeInfoArchive *x4; struct Reference *x5; int x6; } *)a0 archiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (BOOL)isAllowedInGroups;
- (BOOL)preventsChangeTracking;
- (BOOL)supportsMultipleColumns;
- (BOOL)storageChangesInvalidateWrap;
- (BOOL)supportsVerticalTextLayoutInChildStorages;
- (BOOL)supportsDropCapsInChildStorages;
- (BOOL)allowsCaption;
- (BOOL)canBeAnnotatedWithPencil;
- (id)infoForAlignAndDistribute;
- (BOOL)shouldShowOnCanvas:(id)a0;
- (id)copyDowngradedToShapeWithContext:(id)a0;
- (long long)getChildInfoKind;
- (BOOL)isAllowedInFreehandDrawings;
- (BOOL)allowedToBeDragAndDropped;
- (BOOL)textStorageAllowsCommentsDisregardingParent;

@end
