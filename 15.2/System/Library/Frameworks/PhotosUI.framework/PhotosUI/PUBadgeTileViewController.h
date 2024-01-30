@class PUAssetViewModel, PXUIAssetBadgeView, NSString, PUBadgeInfoProvider;
@protocol PUBadgeTileViewControllerDelegate;

@interface PUBadgeTileViewController : PUTileViewController <PUAssetViewModelChangeObserver, PXUIAssetBadgeViewDelegate, PXChangeObserver> {
    struct { BOOL userDidTapBadgeView; BOOL badgeVisibilityDidChange; } _delegateRespondsTo;
}

@property (nonatomic, setter=_setNeedsUpdateBadgeInfo:) BOOL _needsUpdateBadgeInfo;
@property (nonatomic, setter=_setNeedsUpdateBadgeProvider:) BOOL _needsUpdateBadgeProvider;
@property (nonatomic, setter=_setNeedsUpdateBadgeView:) BOOL _needsUpdateBadgeView;
@property (nonatomic, setter=_setBadgeInfo:) struct PXAssetBadgeInfo { unsigned long long badges; double duration; long long count; } _badgeInfo;
@property (retain, nonatomic) PUBadgeInfoProvider *_badgeInfoProvider;
@property (readonly, nonatomic) PXUIAssetBadgeView *_badgeView;
@property (nonatomic, setter=_setOverContent:) BOOL _isOverContent;
@property (nonatomic, setter=_setContentWidth:) double _contentWidth;
@property (weak, nonatomic) id<PUBadgeTileViewControllerDelegate> delegate;
@property (retain, nonatomic) PUAssetViewModel *assetViewModel;
@property (readonly, nonatomic) BOOL isBadgeVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)badgeSizeCacheKeyValueFromBadgeInfo:(struct PXAssetBadgeInfo { unsigned long long x0; double x1; long long x2; })a0 contentWidth:(double)a1;
+ (struct CGSize { double x0; double x1; })_badgeTileSizeForBadgeInfo:(struct PXAssetBadgeInfo { unsigned long long x0; double x1; long long x2; })a0 contentWidth:(double)a1;
+ (void)_configureBadgeView:(id)a0 withBadgeInfo:(struct PXAssetBadgeInfo { unsigned long long x0; double x1; long long x2; })a1 isOverContent:(BOOL)a2 contentWidth:(double)a3 animated:(BOOL)a4;
+ (void)applyLivePhotoEffect:(long long)a0 toAsset:(id)a1;
+ (void)logAppliedLivePhotoEffect:(long long)a0 toAsset:(id)a1;
+ (struct CGSize { double x0; double x1; })badgeTileSizeForAssetViewModel:(id)a0 contentWidth:(double)a1;

- (void)viewModel:(id)a0 didChange:(id)a1;
- (void)applyLayoutInfo:(id)a0;
- (void)becomeReusable;
- (void)viewDidLoad;
- (void)_updateBadgeProviderIfNeeded;
- (void)_updateIfNeeded;
- (id)loadView;
- (BOOL)_needsUpdate;
- (void)_setNeedsUpdate;
- (void).cxx_destruct;
- (void)_updateBadgeInfoIfNeeded;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_invalidateBadgeView;
- (void)prepareForReuse;
- (void)didChangeActive;
- (void)_invalidateBadgeInfo;
- (id)assetBadgeView:(id)a0 menuForBadges:(unsigned long long)a1;
- (void)_invalidateBadgeProvider;
- (void)_updateBadgeViewIfNeeded;
- (void)assetBadgeView:(id)a0 dismissAnyPresentedViewControllerWithCompletion:(id /* block */)a1;

@end
