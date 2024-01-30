@class PXDisplayAssetImageAnalysisOverlayView, PXUpdater, PXRoundProgressView, PXDisplayAssetViewModel, PXLoadingFailureBadgeView, NSString, PXLivePhotoBadgeView;
@protocol PXDisplayAsset;

@interface PXDisplayAssetCombinedOverlayView : UIView <PXChangeObserver, PXLivePhotoBadgeViewDelegate> {
    BOOL _isPerformingLayout;
}

@property (readonly, nonatomic) PXUpdater *updater;
@property (nonatomic) struct CGSize { double width; double height; } viewportSize;
@property (nonatomic) BOOL canShowLoadingProgress;
@property (readonly, nonatomic) PXLivePhotoBadgeView *livePhotoBadgeView;
@property (readonly, nonatomic) PXLoadingFailureBadgeView *loadingFailureBadgeView;
@property (readonly, nonatomic) PXRoundProgressView *loadingProgressBadgeView;
@property (retain, nonatomic) id<PXDisplayAsset> loadingAsset;
@property (readonly, nonatomic) PXDisplayAssetImageAnalysisOverlayView *imageAnalysisOverlayView;
@property (readonly, nonatomic) PXDisplayAssetViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (void)_updateLayout;
- (id)initWithCoder:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setNeedsUpdate;
- (void)layoutSubviews;
- (void)_invalidateLayout;
- (void).cxx_destruct;
- (void)_ensureLoadingProgressBadgeView;
- (void)_updateLoadingProgressBadgeView;
- (void)_ensureImageAnalysisOverlayView;
- (void)_invalidateImageAnalysisOverlay;
- (void)_ensureLivePhotoBadgeView;
- (void)_ensureLoadingFailureBadgeView;
- (void)_invalidateCanShowLoadingProgress;
- (void)_invalidateLivePhotoBadge;
- (void)_invalidateLoadingFailureBadgeView;
- (void)_invalidateLoadingProgressBadgeView;
- (void)_loadingProgressDelayElapsed;
- (void)_updateCanShowLoadingProgress;
- (void)_updateImageAnalysisOverlay;
- (void)_updateLivePhotoBadge;
- (void)_updateLoadingFailureBadgeView;
- (void)livePhotoBadgeView:(id)a0 wantsPlayback:(BOOL)a1;

@end
