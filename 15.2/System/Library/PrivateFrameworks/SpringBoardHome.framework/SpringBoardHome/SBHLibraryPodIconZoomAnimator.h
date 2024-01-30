@class UIView, NSString, SBHLibraryPodZoomSettings, SBFolderController, SBHLibraryViewController, SBFolderIcon, SBHLibraryPodFolderView, NSArray, SBIconView;
@protocol SBHLibraryPodIconZoomAnimationContaining;

@interface SBHLibraryPodIconZoomAnimator : SBIconZoomAnimator <SBHLibraryViewControllerObserver> {
    SBHLibraryViewController *_libraryViewController;
    SBFolderController *_folderController;
    SBHLibraryPodFolderView *_folderView;
    UIView *_folderScalingView;
    UIView *_folderClippingView;
    UIView *_matchMoveWrapperView;
    UIView *_searchBar;
    UIView *_libraryScalingView;
    NSArray *_visibleIconViews;
    NSArray *_miniPodIconViews;
    BOOL _animationComplete;
}

@property (readonly, nonatomic) id<SBHLibraryPodIconZoomAnimationContaining> animationContainer;
@property (retain, nonatomic) SBHLibraryPodZoomSettings *settings;
@property (readonly, nonatomic) SBFolderIcon *targetIcon;
@property (readonly, nonatomic) SBIconView *targetIconView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_setupFolderAndLibraryScalingViews;
- (void)_animateToFraction:(double)a0 afterDelay:(double)a1 withSharedCompletion:(id /* block */)a2;
- (void)_captureVisibleAndMiniPodIconViews;
- (void)_updateLibraryScaleForZoomFraction:(double)a0;
- (void)cleanup;
- (void)_cancelAnimationForIconViewClippedOrObscured;
- (void)_handleIconZoomNotification:(id)a0;
- (struct CGPoint { double x0; double x1; })_centerOfMiniPodIconViews;
- (void)_returnFolderAndLibraryScalingViews;
- (void)_updateSearchBarAlphaForZoomFraction:(double)a0;
- (void)_cleanupAnimation;
- (void)_handleIconViewClippedNotification:(id)a0;
- (void)_updateFolderNavigationBarAlphaForZoomFraction:(double)a0;
- (void)_updateFolderViewFramesForZoomFraction:(double)a0;
- (void).cxx_destruct;
- (void)_updateSearchBarForZoomFraction:(double)a0;
- (void)_setupMatchMoveAnimation;
- (void)_cleanupMiniPodIconViewsAfterCrossfade;
- (void)_updateIconCrossfadeForZoomFraction:(double)a0;
- (double)_scaleForZoomFraction:(double)a0;
- (unsigned long long)_numberOfSignificantAnimations;
- (void)_updateVisibleIconViewsPointerAllowed:(BOOL)a0;
- (id)referenceIconView;
- (void)libraryViewController:(id)a0 willPresentSearchController:(id)a1;
- (void)_updateLibraryAlphaForZoomFraction:(double)a0;
- (id)initWithAnimationContainer:(id)a0 innerFolderController:(id)a1 folderIcon:(id)a2 searchBar:(id)a3 libraryViewController:(id)a4;
- (void)_performAnimationToFraction:(double)a0 withCentralAnimationSettings:(id)a1 delay:(double)a2 alreadyAnimating:(BOOL)a3 sharedCompletion:(id /* block */)a4;
- (void)dealloc;
- (void)_animateIconViewTransformsAndAlphaForZoomFraction:(double)a0 withAnimationSettings:(id)a1 delay:(double)a2 completion:(id /* block */)a3;
- (void)_prepareAnimation;
- (void)_removeMatchMoveAnimation;
- (void)_prepareToCrossfadeMiniPodIconViews;
- (void)_setAnimationFraction:(double)a0;

@end
