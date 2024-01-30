@class _PXUIAssetBadgeImageView, _PXUIAssetBadgeTopGroup, UILabel;
@protocol PXUIAssetBadgeViewDelegate;

@interface PXUIAssetBadgeView : UIView {
    struct { BOOL menuForBadges; BOOL userDidSelectBadges; BOOL dismissPresentedViewController; } _delegateRespondsTo;
    BOOL _isPerformingUpdate;
    struct { BOOL topLeftElements; BOOL topRightElements; BOOL bottomLeadingImage; BOOL bottomTrailingImage; BOOL bottomLabel; BOOL background; BOOL contentSize; } _needsUpdateFlags;
    _PXUIAssetBadgeTopGroup *_topLeftPrimaryGroup;
    _PXUIAssetBadgeTopGroup *_topLeftSecondaryGroup;
    _PXUIAssetBadgeTopGroup *_topRightGroup;
    _PXUIAssetBadgeImageView *_bottomLeadingImageView;
    _PXUIAssetBadgeImageView *_bottomTrailingImageView;
    UILabel *_bottomLabel;
    struct CGSize { double width; double height; } _contentSize;
}

@property (readonly, nonatomic) BOOL _wantsBottomLabel;
@property (weak, nonatomic) id<PXUIAssetBadgeViewDelegate> delegate;
@property (nonatomic) struct PXAssetBadgeInfo { unsigned long long badges; double duration; long long count; } badgeInfo;
@property (nonatomic) long long style;
@property (nonatomic, getter=isOverContent) BOOL overContent;
@property (nonatomic) double contentWidth;
@property (nonatomic) struct CGSize { double width; double height; } bottomElementsPadding;

+ (void)preloadResourcesForStyle:(long long)a0;
+ (id)measuringLabel;
+ (double)preferredHeightForStyle:(long long)a0;

- (void)_invalidateBackground;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)_updateBottomLeadingImageIfNeeded;
- (void)_invalidateTopLeftElements;
- (void)_removeViewsFromGroup:(id)a0;
- (void)_invalidateBottomLeadingImage;
- (void)performChanges:(id /* block */)a0 animated:(BOOL)a1;
- (void)_layoutTopGroup:(id)a0;
- (id)_updateTopGroup:(id)a0 withBadgeInfo:(struct PXAssetBadgeInfo { unsigned long long x0; double x1; long long x2; })a1;
- (void)_updateContentSizeIfNeeded;
- (void)_invalidateBottomTrailingImage;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_invalidate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateTopRightElementsIfNeeded;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_invalidateContentSize;
- (void)_updateIfNeeded;
- (void)_invalidateTopRightElements;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)_handleButton:(id)a0;
- (void)_updateBottomLabelIfNeeded;
- (void)_layoutBottomCornersImages;
- (void)_invalidateBottomLabel;
- (void)_updateTopLeftElementsIfNeeded;
- (BOOL)_needsUpdate;
- (void)_setBackgroundImage:(id)a0;
- (void)_layoutBottomLabel;
- (void)_updateBackgroundIfNeeded;
- (void)_setNeedsUpdate;
- (void)_updateBottomTrailingImageIfNeeded;
- (void).cxx_destruct;
- (void)prepareForReuse;

@end
