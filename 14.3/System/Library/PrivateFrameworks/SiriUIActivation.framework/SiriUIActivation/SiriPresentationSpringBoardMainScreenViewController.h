@protocol SiriPresentationSpringBoardMainScreenViewControllerDelegate;

@interface SiriPresentationSpringBoardMainScreenViewController : SiriPresentationViewController {
    BOOL _shouldDismissForTapOutsideContent;
    BOOL _shouldDismissForTapsOutsideContent;
}

@property (weak, nonatomic) id<SiriPresentationSpringBoardMainScreenViewControllerDelegate> siriPresentationControllerDelegate;
@property (readonly, nonatomic) BOOL tapsOutsideContentDismissAssistant;
@property (readonly, nonatomic) BOOL shouldPassTapsThrough;
@property (readonly, nonatomic) BOOL shouldPassTouchesThroughToSpringBoard;
@property (readonly, nonatomic) BOOL shouldDismissForSwipesOutsideContent;
@property (readonly, nonatomic) BOOL shareHomeGesture;

- (void)hasContentAtPoint:(struct CGPoint { double x0; double x1; })a0 completion:(id /* block */)a1;
- (id)init;
- (BOOL)shouldDismissForTapsOutsideContent;
- (void)requestPasscodeUnlockWithCompletion:(id /* block */)a0;
- (void)updateHomeGestureSharingForSiriSetup:(BOOL)a0;
- (void)loadView;
- (void)setShareHomeGesture:(BOOL)a0;
- (id)initWithIdentifier:(long long)a0;
- (BOOL)showAppsBehindSiri;
- (void)requestStatusBarVisible:(BOOL)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)setDockFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithIdentifier:(long long)a0 hostedPresentationFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)setShouldDismissForTapsOutsideContent:(BOOL)a0;
- (void)setShouldPassTouchesThroughToSpringBoard:(BOOL)a0;
- (BOOL)shouldDismissForTapOutsideContent;
- (void)setFluidDismissalState:(id)a0;
- (void)setShouldDismissForSwipesOutsideContent:(BOOL)a0;
- (void)resetGestureBehaviors;
- (void)setShowsStatusBar:(BOOL)a0;
- (void)setShouldDismissForTapOutsideContent:(BOOL)a0;
- (BOOL)_canShowWhileLocked;

@end
