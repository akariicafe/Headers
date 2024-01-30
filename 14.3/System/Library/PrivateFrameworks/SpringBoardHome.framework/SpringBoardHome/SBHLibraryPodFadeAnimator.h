@class SBFolderController, UIView, SBHLibraryPodZoomSettings;

@interface SBHLibraryPodFadeAnimator : SBIconAnimator {
    SBFolderController *_innerFolderController;
    UIView *_searchBar;
    BOOL _animationComplete;
}

@property (retain, nonatomic) SBHLibraryPodZoomSettings *settings;

- (void)_prepareAnimation;
- (void).cxx_destruct;
- (void)cleanup;
- (void)_animateToFraction:(double)a0 afterDelay:(double)a1 withSharedCompletion:(id /* block */)a2;
- (void)_setAnimationFraction:(double)a0;
- (id)initWithAnimationContainer:(id)a0 innerFolderController:(id)a1 folderIcon:(id)a2 searchBar:(id)a3;
- (void)_applyAlphaForFraction:(double)a0;
- (unsigned long long)_numberOfSignificantAnimations;

@end
