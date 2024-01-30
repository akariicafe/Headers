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

- (id)delegate;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (id)accessoryView;
- (id)appearance;
- (id)transitioningView;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (id)scrollView;
- (long long)preferredWhitePointAdaptivityStyle;
- (void)setDelegate:(id)a0;
- (id)draggableView;
- (id)title;
- (id)printer;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void).cxx_destruct;
- (id)safeAreaLayoutGuide;
- (BOOL)canSwipeToDismiss;
- (void)hostApplicationDidBecomeActive;
- (void)previewIsAppearingWithProgress:(double)a0;
- (void)actionSheetDidDismiss;
- (BOOL)automaticallyUpdateScrollViewContentInset;
- (BOOL)automaticallyUpdateScrollViewContentOffset;
- (BOOL)automaticallyUpdateScrollViewIndicatorInset;
- (void)buttonPressedWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)canBeLocked;
- (BOOL)canClickToToggleFullscreen;
- (BOOL)canEnterFullScreen;
- (BOOL)canPerformFirstTimeAppearanceActions:(unsigned long long)a0;
- (BOOL)canPinchToDismiss;
- (BOOL)canShowNavBar;
- (BOOL)canShowToolBar;
- (BOOL)canToggleFullScreen;
- (void)documentMenuActionWillBegin;
- (double)edgePanGestureWidth;
- (id)excludedToolbarButtonIdentifiersForTraitCollection:(id)a0;
- (id)fullscreenBackgroundColor;
- (void)handlePerformedKeyCommandIfNeeded:(id)a0;
- (void)hostApplicationDidEnterBackground:(id)a0;
- (void)hostSceneWillDeactivate;
- (void)notifyStateRestorationWithUserInfo:(id)a0;
- (id)parallaxView;
- (void)performFirstTimeAppearanceActions:(unsigned long long)a0;
- (void)prepareForActionSheetPresentation;
- (void)prepareForInvalidationWithCompletionHandler:(id /* block */)a0;
- (void)previewBecameFullScreen:(BOOL)a0 animated:(BOOL)a1;
- (void)previewDidAppear:(BOOL)a0;
- (void)previewDidDisappear:(BOOL)a0;
- (void)previewWillAppear:(BOOL)a0;
- (void)previewWillDisappear:(BOOL)a0;
- (void)previewWillFinishAppearing;
- (id)registeredKeyCommands;
- (void)requestLockForCurrentItem;
- (void)savePreviewEditedCopyWithCompletionHandler:(id /* block */)a0;
- (void)setAppearance:(id)a0 animated:(BOOL)a1;
- (BOOL)shouldAcceptTouch:(id)a0 ofGestureRecognizer:(id)a1;
- (BOOL)shouldRecognizeGestureRecognizer:(id)a0;
- (id)stateRestorationDictionary;
- (id)toolbarButtonsForTraitCollection:(id)a0;
- (void)transitionDidFinish:(BOOL)a0 didComplete:(BOOL)a1;
- (void)transitionDidStart:(BOOL)a0;
- (void)transitionWillFinish:(BOOL)a0 didComplete:(BOOL)a1;
- (void)showPreviewViewController:(id)a0;
- (void)showPreviewViewController:(id)a0 animatingWithCrossfade:(BOOL)a1;

@end
