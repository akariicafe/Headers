@class QLAppearance, QLItemViewController;
@protocol QLPreviewItemViewControllerDelegate;

@interface QLItemAggregatedViewController : QLItemViewController {
    BOOL _isVisible;
    BOOL _isAppearing;
    BOOL _fullScreen;
    QLAppearance *_appearance;
    id<QLPreviewItemViewControllerDelegate> _delegate;
}

@property (retain, nonatomic) QLItemViewController *currentPreviewViewController;

- (long long)preferredWhitePointAdaptivityStyle;
- (id)transitioningView;
- (id)appearance;
- (id)accessoryView;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (id)title;
- (id)draggableView;
- (id)printer;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (id)scrollView;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (id)delegate;
- (id)safeAreaLayoutGuide;
- (BOOL)canSwipeToDismiss;
- (BOOL)canPinchToDismiss;
- (BOOL)canEnterFullScreen;
- (void)requestLockForCurrentItem;
- (void)hostApplicationDidEnterBackground:(id)a0;
- (void)hostApplicationDidBecomeActive;
- (id)fullscreenBackgroundColor;
- (void)setAppearance:(id)a0 animated:(BOOL)a1;
- (BOOL)canShowNavBar;
- (void)transitionWillFinish:(BOOL)a0 didComplete:(BOOL)a1;
- (void)transitionDidFinish:(BOOL)a0 didComplete:(BOOL)a1;
- (void)transitionDidStart:(BOOL)a0;
- (void)showPreviewViewController:(id)a0;
- (void)showPreviewViewController:(id)a0 animatingWithCrossfade:(BOOL)a1;
- (void)previewWillAppear:(BOOL)a0;
- (void)previewDidAppear:(BOOL)a0;
- (void)previewWillDisappear:(BOOL)a0;
- (void)previewDidDisappear:(BOOL)a0;
- (void)previewBecameFullScreen:(BOOL)a0 animated:(BOOL)a1;
- (BOOL)shouldAcceptTouch:(id)a0 ofGestureRecognizer:(id)a1;
- (void)buttonPressedWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)automaticallyUpdateScrollViewContentOffset;
- (BOOL)automaticallyUpdateScrollViewContentInset;
- (BOOL)automaticallyUpdateScrollViewIndicatorInset;
- (BOOL)canClickToToggleFullscreen;
- (id)registeredKeyCommands;
- (BOOL)shouldRecognizeGestureRecognizer:(id)a0;
- (BOOL)canToggleFullScreen;
- (void)previewIsAppearingWithProgress:(double)a0;
- (void)previewWillFinishAppearing;
- (void)prepareForActionSheetPresentation;
- (void)actionSheetDidDismiss;
- (id)toolbarButtonsForTraitCollection:(id)a0;
- (id)excludedToolbarButtonIdentifiersForTraitCollection:(id)a0;
- (void)handlePerformedKeyCommandIfNeeded:(id)a0;
- (BOOL)canShowToolBar;
- (BOOL)canBeLocked;
- (id)parallaxView;
- (BOOL)canPerformFirstTimeAppearanceActions:(unsigned long long)a0;
- (void)performFirstTimeAppearanceActions:(unsigned long long)a0;
- (void)notifyStateRestorationWithUserInfo:(id)a0;
- (id)stateRestorationDictionary;
- (void)prepareForInvalidationWithCompletionHandler:(id /* block */)a0;
- (void)savePreviewEditedCopyWithCompletionHandler:(id /* block */)a0;

@end
