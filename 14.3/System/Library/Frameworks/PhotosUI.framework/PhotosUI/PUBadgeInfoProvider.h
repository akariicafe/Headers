@class NSString, PUAssetViewModel;

@interface PUBadgeInfoProvider : PXObservable <PUBrowsingVideoPlayerChangeObserver> {
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

- (id)init;
- (void).cxx_destruct;
- (void)_setNeedsUpdate;
- (void)_updatePlaying;
- (void)invalidateOutput;
- (void)_invalidateOutput;
- (void)_updateOutputIfNeeded;
- (struct PXAssetBadgeInfo { unsigned long long x0; double x1; long long x2; })_filteredBadgeInfoForTime:(double)a0 outShouldAnimate:(BOOL *)a1;
- (void)_setOutputBadgeInfo:(struct PXAssetBadgeInfo { unsigned long long x0; double x1; long long x2; })a0 shouldAnimate:(BOOL)a1;
- (void)setBadgeInfo:(struct PXAssetBadgeInfo { unsigned long long x0; double x1; long long x2; })a0;
- (void)didPerformChanges;
- (void)viewModel:(id)a0 didChange:(id)a1;
- (void)prepareForReuse;
- (BOOL)_needsUpdate;
- (void)setAssetViewModel:(id)a0;
- (void)performChanges:(id /* block */)a0;
- (void)_updateIfNeeded;
- (id)mutableChangeObject;

@end
