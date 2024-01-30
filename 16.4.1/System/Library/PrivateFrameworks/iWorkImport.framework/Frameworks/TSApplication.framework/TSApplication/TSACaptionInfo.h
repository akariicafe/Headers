@class NSString, TSACaptionPlacement;

@interface TSACaptionInfo : TSWPShapeInfo <TSDTitlePlacementProviding, TSDDrawableInfoActivityProviding>

@property (retain, nonatomic) TSACaptionPlacement *placement;
@property (nonatomic) long long childInfoKind;
@property (readonly, nonatomic) BOOL isHidden;
@property (readonly, nonatomic) long long titleAnchorLocation;
@property (readonly) BOOL infoAllowsSelectionActivityToBeAggregated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isCaption;
+ (BOOL)wantsTitleAndCaptionUUIDs;

- (id)objectForProperty:(int)a0;
- (BOOL)isLocked;
- (Class)layoutClass;
- (void).cxx_destruct;
- (void)setLocked:(BOOL)a0;
- (id)copyWithContext:(id)a0;
- (BOOL)isLockable;
- (id)exteriorTextWrap;
- (id)initWithContext:(id)a0 geometry:(id)a1;
- (id)owningAttachment;
- (id)owningAttachmentNoRecurse;
- (Class)repClass;
- (void)setOwningAttachment:(id)a0;
- (BOOL)canAnchor;
- (BOOL)canChangeWrapType;
- (BOOL)displaysInstructionalText;
- (id)instructionalText;
- (BOOL)supportsAttachedComments;
- (BOOL)supportsHyperlinks;
- (BOOL)supportsDropCapsInChildStorages;
- (void)saveToArchiver:(id)a0;
- (BOOL)allowsCaption;
- (BOOL)allowsTitle;
- (BOOL)isAllowedInGroups;
- (BOOL)isAllowedToAddCaptionToChildInfo:(id)a0;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (BOOL)preventsChangeTracking;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (BOOL)storageChangesInvalidateWrap;
- (BOOL)supportsMultipleColumns;
- (BOOL)supportsVerticalTextLayoutInChildStorages;
- (BOOL)canBeAnnotatedWithPencil;
- (long long)nestedTextboxDepth;
- (BOOL)textStorageAllowsCommentsDisregardingParent;
- (BOOL)allowedToBeDragAndDropped;
- (id)copyDowngradedToShapeWithContext:(id)a0;
- (long long)getChildInfoKind;
- (id)infoForAlignAndDistribute;
- (BOOL)isAllowedInFreehandDrawings;
- (long long)p_anchorLocationForCaptionPlacement;
- (id)p_captionPlacementForAnchorLocation:(long long)a0;
- (void)setTitleAnchorLocation;
- (BOOL)shouldShowOnCanvas:(id)a0;

@end
