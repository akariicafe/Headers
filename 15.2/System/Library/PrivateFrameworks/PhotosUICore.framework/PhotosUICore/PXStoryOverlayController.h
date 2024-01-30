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
- (void)_invalidateMainModel;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_updateMainModel;
- (id)initWithObservableModel:(id)a0;
- (void)configureUpdater:(id)a0;
- (void)handleModelChange:(unsigned long long)a0;
- (void)_invalidateChromeItems;
- (void)_updateChromeItems;
- (void)_invalidateRelatedOverlayVisible;
- (void)_updateRelatedOverlayVisible;
- (void)_invalidateChromeVisibilityFractionAnimator;
- (void)_updateChromeVisibilityFractionAnimator;
- (void)_invalidateChromeVisibilityFraction;
- (void)_updateChromeVisibilityFraction;
- (void)_invalidateScrubberVisibilityFractionAnimator;
- (void)_updateScrubberVisibilityFractionAnimator;
- (void)_invalidateStyleSwitcherVisibilityFractionAnimator;
- (void)_updateStyleSwitcherVisibilityFractionAnimator;
- (void)_invalidateFadeOutOverlayVisibilityFractionAnimator;
- (void)_updateFadeOutOverlayVisibilityFractionAnimator;
- (void)_invalidateFadeOutOverlayVisibilityFraction;
- (void)_updateFadeOutOverlayVisibilityFraction;
- (void)_invalidateInfoPanelVisibilityFractionAnimator;
- (void)_updateInfoPanelVisibilityFractionAnimator;
- (void)_invalidateInfoPanelVisibilityFraction;
- (void)_updateInfoPanelVisibilityFraction;
- (void)_updateAnimator:(id)a0 endValue:(double)a1 animated:(BOOL)a2;
- (void)_invalidateScrubberVisibilityFraction;
- (void)_updateScrubberVisibilityFraction;
- (void)_invalidateStyleSwitcherVisibilityFraction;
- (void)_updateStyleSwitcherVisibilityFraction;
- (void)_invalidateRelatedOverlayVisibilityFractionAnimator;
- (void)_updateRelatedOverlayVisibilityFractionAnimator;
- (void)_invalidateRelatedOverlayVisibilityFraction;
- (void)_updateRelatedOverlayVisibilityFraction;

@end
