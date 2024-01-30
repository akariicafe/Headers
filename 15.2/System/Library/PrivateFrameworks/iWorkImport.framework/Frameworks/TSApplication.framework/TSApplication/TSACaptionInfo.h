@class TSACaptionPlacement;

@interface TSACaptionInfo : TSWPShapeInfo

@property (retain, nonatomic) TSACaptionPlacement *placement;
@property (nonatomic) long long childInfoKind;
@property (readonly, nonatomic) BOOL isHidden;

+ (BOOL)isCaption;
+ (BOOL)wantsTitleAndCaptionUUIDs;

- (void)setLocked:(BOOL)a0;
- (BOOL)isLocked;
- (void).cxx_destruct;
- (Class)repClass;
- (id)copyWithContext:(id)a0;
- (Class)layoutClass;
- (BOOL)isLockable;
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
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (BOOL)isAllowedInGroups;
- (BOOL)allowsCaption;
- (BOOL)preventsChangeTracking;
- (BOOL)supportsMultipleColumns;
- (BOOL)storageChangesInvalidateWrap;
- (BOOL)supportsVerticalTextLayoutInChildStorages;
- (BOOL)supportsDropCapsInChildStorages;
- (BOOL)canBeAnnotatedWithPencil;
- (id)infoForAlignAndDistribute;
- (BOOL)shouldShowOnCanvas:(id)a0;
- (id)copyDowngradedToShapeWithContext:(id)a0;
- (long long)getChildInfoKind;
- (BOOL)isAllowedInFreehandDrawings;
- (BOOL)allowedToBeDragAndDropped;
- (BOOL)textStorageAllowsCommentsDisregardingParent;

@end
