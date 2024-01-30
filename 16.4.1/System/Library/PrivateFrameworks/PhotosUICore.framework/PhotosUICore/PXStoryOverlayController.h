@class PXStoryViewModel, PXStoryModel, PXNumberAnimator;

@interface PXStoryOverlayController : PXStoryController

@property (retain, nonatomic) PXStoryModel *mainModel;
@property (readonly, nonatomic) PXNumberAnimator *chromeVisibilityFractionAnimator;
@property (readonly, nonatomic) PXNumberAnimator *scrubberVisibilityFractionAnimator;
@property (readonly, nonatomic) PXNumberAnimator *styleSwitcherVisibilityFractionAnimator;
@property (readonly, nonatomic) PXNumberAnimator *relatedOverlayVisibilityFractionAnimator;
@property (readonly, nonatomic) PXNumberAnimator *fadeOutOverlayVisibilityFractionAnimator;
@property (readonly, nonatomic) PXNumberAnimator *infoPanelVisibilityFractionAnimator;
@property (nonatomic) BOOL preventAnimatingNextRelatedOverlayVisibilityFractionChange;
@property (readonly, weak, nonatomic) PXStoryViewModel *viewModel;

- (id)initWithViewModel:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_updateMainModel;
- (void)_invalidateMainModel;
- (void).cxx_destruct;
- (void)_updateChromeVisibilityFraction;
- (void)_invalidateChromeItems;
- (void)_invalidateChromeVisibilityFraction;
- (void)_invalidateChromeVisibilityFractionAnimator;
- (void)_invalidateFadeOutOverlayVisibilityFraction;
- (void)_invalidateFadeOutOverlayVisibilityFractionAnimator;
- (void)_invalidateInfoPanelVisibilityFraction;
- (void)_invalidateInfoPanelVisibilityFractionAnimator;
- (void)_invalidateRelatedOverlayVisibilityFraction;
- (void)_invalidateRelatedOverlayVisibilityFractionAnimator;
- (void)_invalidateRelatedOverlayVisible;
- (void)_invalidateScrubberVisibilityFraction;
- (void)_invalidateScrubberVisibilityFractionAnimator;
- (void)_invalidateStyleSwitcherVisibilityFraction;
- (void)_invalidateStyleSwitcherVisibilityFractionAnimator;
- (void)_updateAnimator:(id)a0 endValue:(double)a1 animated:(BOOL)a2;
- (void)_updateChromeItems;
- (void)_updateChromeVisibilityFractionAnimator;
- (void)_updateFadeOutOverlayVisibilityFraction;
- (void)_updateFadeOutOverlayVisibilityFractionAnimator;
- (void)_updateInfoPanelVisibilityFraction;
- (void)_updateInfoPanelVisibilityFractionAnimator;
- (void)_updateRelatedOverlayVisibilityFraction;
- (void)_updateRelatedOverlayVisibilityFractionAnimator;
- (void)_updateRelatedOverlayVisible;
- (void)_updateScrubberVisibilityFraction;
- (void)_updateScrubberVisibilityFractionAnimator;
- (void)_updateStyleSwitcherVisibilityFraction;
- (void)_updateStyleSwitcherVisibilityFractionAnimator;
- (void)configureUpdater:(id)a0;
- (void)handleModelChange:(unsigned long long)a0;
- (id)initWithObservableModel:(id)a0;

@end
