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
@property (nonatomic) struct PXAssetBadgeInfo { unsigned long long badges; double duration; long long count; long long fileSize; } badgeInfo;
@property (nonatomic) long long style;
@property (nonatomic, getter=isOverContent) BOOL overContent;
@property (nonatomic) double contentWidth;
@property (nonatomic) struct CGSize { double width; double height; } bottomElementsPadding;

+ (id)measuringLabel;
+ (double)preferredHeightForStyle:(long long)a0;
+ (void)preloadResourcesForStyle:(long long)a0;

- (void)_updateIfNeeded;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)_needsUpdate;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)_setNeedsUpdate;
- (void)_invalidateContentSize;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_invalidate;
- (void).cxx_destruct;
- (void)_setBackgroundImage:(id)a0;
- (void)_updateContentSizeIfNeeded;
- (void)_updateTopRightElementsIfNeeded;
- (void)_handleButton:(id)a0;
- (void)_invalidateBackground;
- (void)_invalidateBottomLabel;
- (void)_invalidateBottomLeadingImage;
- (void)_invalidateBottomTrailingImage;
- (void)_invalidateTopLeftElements;
- (void)_invalidateTopRightElements;
- (void)_layoutBottomCornersImages;
- (void)_layoutBottomLabel;
- (void)_layoutTopGroup:(id)a0;
- (void)_removeViewsFromGroup:(id)a0;
- (void)_updateBackgroundIfNeeded;
- (void)_updateBottomLabelIfNeeded;
- (void)_updateBottomLeadingImageIfNeeded;
- (void)_updateBottomTrailingImageIfNeeded;
- (id)_updateTopGroup:(id)a0 withBadgeInfo:(struct PXAssetBadgeInfo { unsigned long long x0; double x1; long long x2; long long x3; })a1;
- (void)_updateTopLeftElementsIfNeeded;
- (void)performChanges:(id /* block */)a0 animated:(BOOL)a1;

@end
