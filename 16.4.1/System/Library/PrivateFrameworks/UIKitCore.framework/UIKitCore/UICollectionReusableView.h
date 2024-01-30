@class NSString, UICollectionView, UICollectionViewLayoutAttributes;

@interface UICollectionReusableView : UIView <UIEditable> {
    UICollectionViewLayoutAttributes *_layoutAttributes;
    UICollectionView *_collectionView;
    long long _updateAnimationCount;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _defaultLayoutMargins;
    struct { unsigned char wasDequeued : 1; unsigned char hasBeenReused : 1; unsigned char preferredAttributesValid : 1; unsigned char generatingPreferredAttributes : 1; unsigned char didSetMasksToBounds : 1; unsigned char didSetMaskedCorners : 1; unsigned char didSetCornerRadius : 1; unsigned char didSetMaskView : 1; unsigned char hasBlocksToPerformWhenReused : 1; unsigned char isBeingReused : 1; unsigned char isDisplayed : 1; unsigned char collectionViewHasBeenExplicitlySet : 1; unsigned char shouldConstrainWidth : 1; unsigned char shouldConstrainHeight : 1; unsigned char hasDefaultLayoutMargins : 1; unsigned char automaticIntrinsicContentSizeInvalidationEnabled : 1; } _reusableViewFlags;
}

@property (copy, nonatomic, getter=_layoutAttributes, setter=_setLayoutAttributes:) UICollectionViewLayoutAttributes *layoutAttributes;
@property (copy, nonatomic, setter=_setReuseIdentifier:) NSString *reuseIdentifier;
@property (copy, nonatomic, getter=_elementKind, setter=_setElementKind:) NSString *elementKind;
@property (weak, nonatomic, getter=_collectionView, setter=_setCollectionView:) UICollectionView *collectionView;
@property (readonly, nonatomic, getter=_isInUpdateAnimation) BOOL inUpdateAnimation;
@property (nonatomic, setter=_setAutomaticIntrinsicContentSizeInvalidationEnabled:) BOOL _automaticIntrinsicContentSizeInvalidationEnabled;
@property (nonatomic, getter=_shouldConstrainWidth, setter=_setShouldConstrainWidth:) BOOL shouldConstrainWidth;
@property (nonatomic, getter=_shouldConstrainHeight, setter=_setShouldConstrainHeight:) BOOL shouldConstrainHeight;
@property (nonatomic, getter=_isBeingReused, setter=_setIsBeingReused:) BOOL isBeingReused;
@property (readonly, nonatomic, getter=_hasBeenReused) BOOL hasBeenReused;
@property (nonatomic, getter=_arePreferredAttributesValid) BOOL preferredAttributesValid;
@property (readonly, nonatomic) BOOL canBeEdited;
@property (nonatomic, getter=isEditing) BOOL editing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)applyLayoutAttributes:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didMoveToSuperview;
- (BOOL)_disableRasterizeInAnimations;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_concreteDefaultLayoutMargins;
- (void)invalidateIntrinsicContentSize;
- (void)setTranslatesAutoresizingMaskIntoConstraints:(BOOL)a0;
- (void).cxx_destruct;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (void)_markAsDequeued;
- (void)_addBackdropViewForMaskingIfNeeded;
- (void)_addUpdateAnimation;
- (BOOL)_appliesLayoutAttributesMaskingToReusableView;
- (void)_clearUpdateAnimation;
- (long long)_contentViewListStyleFromLayoutAttributes:(id)a0;
- (BOOL)_disableGroupOpacityInAnimations;
- (void)_invalidatePreferredAttributes;
- (BOOL)_isFocusableWhenStyledAsHeader;
- (BOOL)_isStyledAsHeaderOrFooterFromLayoutAttributes:(id)a0;
- (void)_notifyIsDisplaying:(BOOL)a0;
- (void)_performBlockWhenReused:(id /* block */)a0;
- (void)_performBlocksForReuse;
- (id)_preferredLayoutAttributesFittingAttributes:(id)a0;
- (void)_removeExistingBackdropViewForMasking;
- (void)_setBaseLayoutAttributes:(id)a0;
- (void)_setHiddenForReuse:(BOOL)a0;
- (void)_setLayoutAttributes:(id)a0 force:(BOOL)a1;
- (void)_setMaskView:(id)a0;
- (long long)_styleFromLayoutAttributes:(id)a0;
- (void)_updateDefaultLayoutMarginsUsingAttributes:(id)a0;
- (void)_updateMaskViewUsingAttributes:(id)a0 previousRemoveMaskAfterAnimation:(BOOL)a1;
- (void)_updateMaskingUsingAttributes:(id)a0;
- (BOOL)_wasDequeued;
- (void)didTransitionFromLayout:(id)a0 toLayout:(id)a1;
- (void)willTransitionFromLayout:(id)a0 toLayout:(id)a1;

@end
