@class SBFolderController, SBFolderContainerView;
@protocol SBFolderPresentingViewControllerDelegate, UIViewControllerAnimatedTransitioning;

@interface SBFolderPresentingViewController : SBNestingViewController <SBFolderControllerBackgroundViewDelegate>

@property (retain, nonatomic) id<UIViewControllerAnimatedTransitioning> currentFolderAnimator;
@property (readonly, nonatomic) SBFolderContainerView *view;
@property (weak, nonatomic) id<SBFolderPresentingViewControllerDelegate> folderPresentationDelegate;
@property (readonly, nonatomic) SBFolderController *presentedFolderController;
@property (nonatomic) unsigned long long backgroundEffect;

- (BOOL)_canShowWhileLocked;
- (void)nestingViewController:(id)a0 willPerformOperation:(long long)a1 onViewController:(id)a2 withTransitionCoordinator:(id)a3;
- (id)nestingViewController:(id)a0 interactionControllerForAnimationController:(id)a1;
- (void).cxx_destruct;
- (void)loadView;
- (void)dismissPresentedFolderControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (double)minimumHomeScreenScaleForFolderControllerBackgroundView:(id)a0;
- (id)nestingViewController:(id)a0 animationControllerForOperation:(long long)a1 onViewController:(id)a2 animated:(BOOL)a3;
- (id)nestingViewController:(id)a0 sourceViewForPresentingViewController:(id)a1;
- (void)presentFolderController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;

@end
