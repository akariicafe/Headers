@class NSString, PUAssetViewModel;

@interface PUBadgeInfoProvider : PXObservable <PUBrowsingVideoPlayerChangeObserver, PXAssetEditOperationManagerObserver> {
    struct { BOOL output; } _needsUpdateFlags;
}

@property (nonatomic) double lastPlayingTime;
@property (nonatomic) BOOL playing;
@property (readonly, nonatomic) PUAssetViewModel *assetViewModel;
@property (readonly, nonatomic) struct PXAssetBadgeInfo { unsigned long long badges; double duration; long long count; } badgeInfo;
@property (readonly, nonatomic) struct PXAssetBadgeInfo { unsigned long long badges; double duration; long long count; } outputBadgeInfo;
@property (readonly, nonatomic) BOOL outputShouldAnimate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewModel:(id)a0 didChange:(id)a1;
- (void)setAssetViewModel:(id)a0;
- (id)mutableChangeObject;
- (void)didPerformChanges;
- (void)assetEditOperationManager:(id)a0 didChangeEditOperationStatusForAsset:(id)a1 context:(void *)a2;
- (void)invalidateOutput;
- (void)performChanges:(id /* block */)a0;
- (void)setBadgeInfo:(struct PXAssetBadgeInfo { unsigned long long x0; double x1; long long x2; })a0;
- (void)_invalidateOutput;
- (void)_updateIfNeeded;
- (struct PXAssetBadgeInfo { unsigned long long x0; double x1; long long x2; })_filteredBadgeInfoForTime:(double)a0 outShouldAnimate:(BOOL *)a1;
- (BOOL)_needsUpdate;
- (void)_setNeedsUpdate;
- (void)_updatePlaying;
- (void)_updateOutputIfNeeded;
- (void).cxx_destruct;
- (id)init;
- (void)_setOutputBadgeInfo:(struct PXAssetBadgeInfo { unsigned long long x0; double x1; long long x2; })a0 shouldAnimate:(BOOL)a1;
- (void)prepareForReuse;

@end
