@class PXStoryViewControllerTransition, PXStoryViewModeTransition, PXRegionOfInterest, PXStoryViewModel, UIImpactFeedbackGenerator, UIViewController, PXNumberAnimator;

@interface PXStoryViewControllerViewModelTransitionsCoordinator : PXStoryController

@property (readonly, nonatomic) PXNumberAnimator *dismissalPreviewFraction;
@property (nonatomic) BOOL isDismissalPreviewFractionInitialized;
@property (retain, nonatomic) PXStoryViewControllerTransition *dismissalTransition;
@property (retain, nonatomic) PXStoryViewModeTransition *viewModeTransition;
@property (nonatomic) double viewModeTransitionStartTime;
@property (retain, nonatomic) PXRegionOfInterest *fullsizeContentBoundingBox;
@property (nonatomic) BOOL isDismisallTriggered;
@property (nonatomic) BOOL isPreparedForDismissal;
@property (nonatomic) BOOL isFinishingDismissal;
@property (nonatomic) BOOL shouldFinish;
@property (retain, nonatomic) UIImpactFeedbackGenerator *dismissalFeedbackGenerator;
@property (readonly, weak, nonatomic) PXStoryViewModel *viewModel;
@property (readonly, weak, nonatomic) UIViewController *viewController;

- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)initWithObservableModel:(id)a0;
- (void)configureUpdater:(id)a0;
- (void)handleModelChange:(unsigned long long)a0;
- (void)_invalidateViewModeTransition;
- (void)_updateViewModeTransition;
- (id)initWithViewModel:(id)a0 viewController:(id)a1;
- (void)_handleViewModeTransitionStartDelay;
- (void)_tryDismissingViewController;
- (void)_forceDismissViewController;
- (void)_endDismissal:(BOOL)a0;
- (void)_dismissalTransition:(id)a0 didEnd:(BOOL)a1;
- (void)_invalidateFullsizeContentBoundingBox;
- (void)_updateFullsizeContentBoundingBox;
- (void)_invalidateSummaryItemPlacementOverride;
- (void)_updateSummaryItemPlacementOverride;
- (void)_invalidateViewControllerDismissalTargetPlacement;
- (void)_updateViewControllerDismissalTargetPlacement;
- (void)_invalidateFractionCompleted;
- (void)_updateFractionCompleted;
- (void)_invalidateShouldFinish;
- (void)_updateShouldFinish;
- (void)_invalidateDesiredDismissalState;
- (void)_updateDesiredDismissalState;
- (void)_invalidateSwipeDownTriggeringDismissal;
- (void)_updateSwipeDownTriggeringDismissal;
- (void)_invalidateSwipeDownDismissalPreview;
- (void)_updateSwipeDownDismissalPreview;

@end
