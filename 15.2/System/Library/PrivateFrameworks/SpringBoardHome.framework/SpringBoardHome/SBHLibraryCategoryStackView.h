@class NSArray, NSString, SBHIconImageCache, NSMutableArray, SBHLibraryIndicatorIconSettings;

@interface SBHLibraryCategoryStackView : UIView <SBHIconImageCacheObserver, BSDescriptionProviding> {
    NSMutableArray *_podBackgroundViews;
    NSMutableArray *_iconImageViews;
    SBHLibraryIndicatorIconSettings *_iconSettings;
    SBHIconImageCache *_iconImageCache;
}

@property (nonatomic) unsigned long long numberOfCategories;
@property (nonatomic) struct SBIconImageInfo { struct CGSize { double width; double height; } size; double scale; double continuousCornerRadius; } iconImageInfo;
@property (nonatomic, getter=isEditing) BOOL editing;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic, getter=isOverlapping) BOOL overlapping;
@property (copy, nonatomic) NSArray *innerIcons;
@property (copy, nonatomic) NSString *backdropGroupName;
@property (copy, nonatomic) NSString *backdropGroupNamespace;
@property (nonatomic, getter=isInnerIconImageInfoFrozen) BOOL innerIconImageInfoFrozen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (void)iconImageCache:(id)a0 didUpdateImageForIcon:(id)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleContentFrame;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)matchingCategoryStackView;
- (id)backgroundViewForIndex:(unsigned long long)a0 compatibleWithTraitCollection:(id)a1;
- (double)alphaForStackedViewAtIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForStackedViewAtIndex:(unsigned long long)a0;
- (void)setInnerIcons:(id)a0 animated:(BOOL)a1;
- (void)_appendConfiguredPodBackgroundView;
- (id)_scalingAnimationSettingsForStackedViewAtIndex:(unsigned long long)a0 scale:(out double *)a1;
- (void)_updateIconImageViewsAnimated:(BOOL)a0;
- (void)_reconfigurePodBackgroundViews;
- (struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })_innerIconImageInfo;
- (double)_innerIconEdgeSpacingFraction;
- (double)_innerIconInterSpacingFraction;
- (void)_removeLastPodBackgroundView;
- (void)_updateIconImageViewAtIndex:(unsigned long long)a0 animated:(BOOL)a1;

@end
