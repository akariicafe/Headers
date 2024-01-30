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

- (id)draggableView;
- (id)accessoryView;
- (long long)preferredWhitePointAdaptivityStyle;
- (id)transitioningView;
- (id)scrollView;
- (void).cxx_destruct;
- (id)printer;
- (void)previewBecameFullScreen:(BOOL)a0 animated:(BOOL)a1;
- (BOOL)shouldAcceptTouch:(id)a0 ofGestureRecognizer:(id)a1;
- (id)fullscreenBackgroundColor;
- (void)prepareForActionSheetPresentation;
- (id)toolbarButtonsForTraitCollection:(id)a0;
- (id)excludedToolbarButtonIdentifiersForTraitCollection:(id)a0;
- (void)handlePerformedKeyCommandIfNeeded:(id)a0;
- (id)parallaxView;
- (void)prepareForInvalidationWithCompletionHandler:(id /* block */)a0;
- (void)buttonPressedWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)savePreviewEditedCopyWithCompletionHandler:(id /* block */)a0;
- (BOOL)canSwipeToDismiss;
- (BOOL)canPinchToDismiss;
- (BOOL)canEnterFullScreen;
- (BOOL)automaticallyUpdateScrollViewContentOffset;
- (BOOL)automaticallyUpdateScrollViewContentInset;
- (BOOL)automaticallyUpdateScrollViewIndicatorInset;
- (BOOL)canClickToToggleFullscreen;
- (id)appearance;
- (void)transitionWillFinish:(BOOL)a0 didComplete:(BOOL)a1;
- (void)transitionDidFinish:(BOOL)a0 didComplete:(BOOL)a1;
- (void)transitionDidStart:(BOOL)a0;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)setAppearance:(id)a0 animated:(BOOL)a1;
- (id)registeredKeyCommands;
- (BOOL)shouldRecognizeGestureRecognizer:(id)a0;
- (BOOL)canToggleFullScreen;
- (void)previewIsAppearingWithProgress:(double)a0;
- (void)previewWillFinishAppearing;
- (void)showPreviewViewController:(id)a0;
- (void)showPreviewViewController:(id)a0 animatingWithCrossfade:(BOOL)a1;
- (void)previewWillAppear:(BOOL)a0;
- (void)previewDidAppear:(BOOL)a0;
- (void)previewWillDisappear:(BOOL)a0;
- (void)previewDidDisappear:(BOOL)a0;
- (BOOL)canPerformFirstTimeAppearanceActions:(unsigned long long)a0;
- (void)performFirstTimeAppearanceActions:(unsigned long long)a0;
- (BOOL)canShowNavBar;
- (void)setDelegate:(id)a0;
- (BOOL)canShowToolBar;
- (id)title;
- (id)safeAreaLayoutGuide;
- (void)hostApplicationDidEnterBackground:(id)a0;
- (void)hostApplicationDidBecomeActive;
- (id)delegate;

@end
