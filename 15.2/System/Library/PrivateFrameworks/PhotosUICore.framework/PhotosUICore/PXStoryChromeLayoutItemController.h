@class PXUpdater, PXStoryViewModel, NSString, PXNumberAnimator;

@interface PXStoryChromeLayoutItemController : PXObservable <PXChangeObserver>

@property (readonly, nonatomic) PXUpdater *updater;
@property (nonatomic) double targetAlpha;
@property (nonatomic) double targetPlaybackEndDarkening;
@property (readonly, nonatomic) PXNumberAnimator *playbackEndDarkeningAnimator;
@property (readonly, nonatomic) PXNumberAnimator *alphaAnimator;
@property (readonly, nonatomic) double targetAlphaForVisibleState;
@property (readonly, nonatomic) PXStoryViewModel *viewModel;
@property (readonly, nonatomic) unsigned long long chromeItem;
@property (nonatomic) double alpha;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateAlpha;
- (void)didPerformChanges;
- (void)_setNeedsUpdate;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)init;
- (void)animateChangeToTargetAlpha:(double)a0;
- (id)initWithViewModel:(id)a0 chromeItem:(unsigned long long)a1;
- (void)_invalidateTargetAlpha;
- (void)_updateTargetAlpha;
- (void)_invalidateAlpha;
- (void)_invalidateTargetPlaybackEndDarkening;
- (void)_updateTargetPlaybackEndDarkening;
- (void)_invalidatePlaybackEndDarkening;
- (void)_updatePlaybackEndDarkening;

@end
