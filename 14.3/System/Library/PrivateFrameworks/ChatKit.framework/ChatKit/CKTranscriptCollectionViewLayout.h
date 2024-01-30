@class CADisplayLink, NSArray, NSMutableIndexSet, NSMutableDictionary, NSDate, NSIndexSet, IMScheduledUpdater;

@interface CKTranscriptCollectionViewLayout : UICollectionViewLayout {
    BOOL _isResting;
    BOOL _easingUp;
    BOOL _useFastQuanta;
    CADisplayLink *_displayLink;
    double _prevTimestamp;
    struct CGSize { double width; double height; } _contentSize;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _visibleBounds;
}

@property (copy, nonatomic) NSArray *layoutAttributes;
@property (copy, nonatomic) NSArray *associatedLayoutAttributes;
@property (copy, nonatomic) NSArray *decorationLayoutAttributes;
@property (copy, nonatomic) NSArray *oldAssociatedLayoutAttributes;
@property (retain, nonatomic) NSMutableIndexSet *insertedAssociatedLayoutAttributes;
@property (retain, nonatomic) NSDate *lastTouchTime;
@property (nonatomic) BOOL hasLoadMore;
@property (retain, nonatomic) NSMutableDictionary *initialParentLayoutAttributes;
@property (retain, nonatomic) NSMutableDictionary *finalParentVerticalOffsets;
@property (nonatomic) BOOL coalesceInvalidations;
@property (nonatomic) BOOL sizeCategoryIsAccessibilitySizeCategory;
@property (retain, nonatomic) IMScheduledUpdater *dynamicsUpdater;
@property (nonatomic) double anchorYPosition;
@property (nonatomic) struct CGPoint { double x; double y; } targetContentOffset;
@property (nonatomic, getter=isHoldingBoundsInvalidation) BOOL holdingBoundsInvalidation;
@property (nonatomic, getter=isUsingInitialLayoutAttributesForRotation) BOOL useInitialLayoutAttributesForRotation;
@property (nonatomic, getter=isUsingOverlayLayout) BOOL useOverlayLayout;
@property (nonatomic, getter=isInlineAnimatingOut) BOOL inlineAnimatingOut;
@property (nonatomic) unsigned char chatStyle;
@property (readonly, nonatomic) BOOL isResting;
@property (nonatomic) struct CGSize { double width; double height; } sizeForRotation;
@property (retain, nonatomic) NSIndexSet *indicesOfChatItemsToBeRemovedWithoutFading;
@property (retain, nonatomic) NSIndexSet *indicesOfChatItemsToBeInsertedWithoutFading;
@property (retain, nonatomic) NSIndexSet *indicesOfReplyChatItemsToBeInserted;
@property (nonatomic) BOOL disableDynamicsWhileScrolling;

+ (Class)layoutAttributesClass;
+ (long long)translateLayoutIndexToEffectIndex:(long long)a0;

- (id)layoutAttributesForDecorationViewOfKind:(id)a0 atIndexPath:(id)a1;
- (void)reloadData;
- (void)prepareLayout;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (long long)effectIndexForDecorationViewAtIndex:(long long)a0;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)a0;
- (void)setInitialIndex:(unsigned long long)a0 forParentOfAssociatedItemInsertedAtIndex:(unsigned long long)a1;
- (void)updateAssociatedLayoutAttributesIfNecessary;
- (void)setVerticalOffset:(double)a0 forParentOfAssociatedItemDeletedAtIndex:(unsigned long long)a1;
- (void)clearParentInitialIndexesAndFinalOffsets;
- (id)init;
- (void).cxx_destruct;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)a0;
- (void)dealloc;
- (void)sizeCategoryDidChange:(id)a0;
- (void)beginHoldingDynamicsUpdatesForKey:(id)a0;
- (void)setNeedsDynamicsUpdate;
- (void)endHoldingDynamicsUpdatesForKey:(id)a0;
- (void)invalidateDisplayLink;
- (void)displayLinkFired:(id)a0;
- (void)updateFrames;
- (void)_kickDynamicsIfNeeded;
- (void)reduceMotionSettingChanged:(id)a0;
- (void)_configureThreadGroupsForAttributes:(id)a0 outMaxYAnchorAttribute:(id *)a1 forVisibleBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_visibleRectInsectsForMaxYAnchorLayoutAttribute:(id)a0 forVisibleBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)prepareLayoutForRotisserieScrolling;
- (BOOL)nextItemIsOriginatorWithRepliesForIndex:(unsigned long long)a0;
- (double)bezierPointForPercentage:(double)a0 anchor1:(double)a1 anchor2:(double)a2 control1:(double)a3 control2:(double)a4;
- (void)updateAttributesForAnchorYChangeWithAttributes:(id)a0;
- (void)updateAttributesForTargetContentOffsetChangeWithAttributes:(id)a0;
- (double)handleInvalidCaseForChatItem:(id)a0 withPrevChatItem:(id)a1;
- (BOOL)nextMessageIsReplyForIndex:(unsigned long long)a0;
- (BOOL)needsAdditionalBracketPaddingForChatItem:(id)a0 prevChatItem:(id)a1;
- (BOOL)previousReplyCount:(unsigned long long)a0 isOccludedForAssociatedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 outMaxY:(double *)a2;
- (void)_applyTargetFrameOffsetsForLayoutAttributesIfNeeded:(id)a0;
- (void)_applyCurrentFrameOffsetsForLayoutAttributesIfNeeded:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_convertScreenFrameToLocalFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_applyAttributeUpdatesWithTargetMap:(id)a0 layoutAttributes:(id)a1 updateBlock:(id /* block */)a2;
- (void)updateContentSize;
- (void)_dealloc;

@end
