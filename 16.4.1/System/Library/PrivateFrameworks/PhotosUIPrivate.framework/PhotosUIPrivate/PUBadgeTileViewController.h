@class PUAssetViewModel, PXUIAssetBadgeView, NSString, PUBadgeInfoProvider;
@protocol PUBadgeTileViewControllerDelegate;

@interface PUBadgeTileViewController : PUTileViewController <PUAssetViewModelChangeObserver, PXUIAssetBadgeViewDelegate, PXChangeObserver, PXActionPerformerDelegate> {
    struct { BOOL userDidTapBadgeView; BOOL badgeVisibilityDidChange; BOOL undoManager; } _delegateRespondsTo;
}

@property (nonatomic, setter=_setNeedsUpdateBadgeInfo:) BOOL _needsUpdateBadgeInfo;
@property (nonatomic, setter=_setNeedsUpdateBadgeProvider:) BOOL _needsUpdateBadgeProvider;
@property (nonatomic, setter=_setNeedsUpdateBadgeView:) BOOL _needsUpdateBadgeView;
@property (nonatomic, setter=_setBadgeInfo:) struct PXAssetBadgeInfo { unsigned long long badges; double duration; long long count; long long fileSize; } _badgeInfo;
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

+ (struct CGSize { double x0; double x1; })_badgeTileSizeForBadgeInfo:(struct PXAssetBadgeInfo { unsigned long long x0; double x1; long long x2; long long x3; })a0 contentWidth:(double)a1;
+ (void)_configureBadgeView:(id)a0 withBadgeInfo:(struct PXAssetBadgeInfo { unsigned long long x0; double x1; long long x2; long long x3; })a1 isOverContent:(BOOL)a2 contentWidth:(double)a3 animated:(BOOL)a4;
+ (void)applyLivePhotoEffect:(long long)a0 toAsset:(id)a1 undoManager:(id)a2;
+ (id)badgeSizeCacheKeyValueFromBadgeInfo:(struct PXAssetBadgeInfo { unsigned long long x0; double x1; long long x2; long long x3; })a0 contentWidth:(double)a1;
+ (struct CGSize { double x0; double x1; })badgeTileSizeForAssetViewModel:(id)a0 contentWidth:(double)a1;
+ (void)disableLivePhotoForAsset:(id)a0 undoManager:(id)a1;
+ (struct CGSize { double x0; double x1; })leadingBadgesSizeForAssetViewModel:(id)a0 contentWidth:(double)a1;
+ (void)logAppliedLivePhotoEffect:(long long)a0 toAsset:(id)a1;

- (id)undoManagerForActionPerformer:(id)a0;
- (void)viewModel:(id)a0 didChange:(id)a1;
- (void)_updateIfNeeded;
- (void)becomeReusable;
- (BOOL)_needsUpdate;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)prepareForReuse;
- (void)_setNeedsUpdate;
- (void)viewDidLoad;
- (void)applyLayoutInfo:(id)a0;
- (void).cxx_destruct;
- (id)loadView;
- (void)_updateBadgeViewIfNeeded;
- (void)assetBadgeView:(id)a0 dismissAnyPresentedViewControllerWithCompletion:(id /* block */)a1;
- (void)_invalidateBadgeView;
- (id)assetBadgeView:(id)a0 menuForBadges:(unsigned long long)a1;
- (void)didChangeActive;
- (void)_invalidateBadgeInfo;
- (void)_invalidateBadgeProvider;
- (void)_updateBadgeInfoIfNeeded;
- (void)_updateBadgeProviderIfNeeded;

@end
