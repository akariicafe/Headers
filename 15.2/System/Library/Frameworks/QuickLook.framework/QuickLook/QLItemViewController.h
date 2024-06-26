@class UIView, NSString, NSArray, QLPreviewContext, UIDragInteraction, NSObject, PUProgressIndicatorView, NSMutableArray, QLAppearance;
@protocol QLItemViewControllerPresentingDelegate, OS_dispatch_queue, QLPreviewItemViewControllerDelegate;

@interface QLItemViewController : UIViewController <UIDragInteractionDelegate_Private, QLLocalPreviewingController, QLToolbarButtonAction> {
    NSMutableArray *_completionBlocks;
    long long _lastScrollViewUpdateInterfaceOrientation;
}

@property (retain, nonatomic) UIDragInteraction *dragInteraction;
@property BOOL didAppearOnce;
@property BOOL isLoaded;
@property BOOL isLoading;
@property BOOL loadingFailed;
@property (retain) id contents;
@property (retain) QLPreviewContext *context;
@property (retain, nonatomic) QLAppearance *appearance;
@property (weak, nonatomic) id<QLItemViewControllerPresentingDelegate> presentingDelegate;
@property (retain, nonatomic) PUProgressIndicatorView *saveEditProgressView;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *saveEditsQueue;
@property (nonatomic) BOOL isSavingEdits;
@property (readonly, nonatomic) UIView *accessoryView;
@property (readonly, nonatomic) NSArray *registeredKeyCommands;
@property (weak, nonatomic) id<QLPreviewItemViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldBeRemoteForMediaContentType:(id)a0;
+ (id)supportedAudiovisualContentTypes;

- (long long)preferredWhitePointAdaptivityStyle;
- (id)transitioningView;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)draggableView;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (id)scrollView;
- (void).cxx_destruct;
- (id)init;
- (id)dragInteraction:(id)a0 itemsForBeginningSession:(id)a1;
- (long long)_dragInteraction:(id)a0 dataOwnerForSession:(id)a1;
- (void)loadPreviewControllerWithContents:(id)a0 context:(id)a1 completionHandler:(id /* block */)a2;
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
- (BOOL)presenterShouldHandleLoadingView:(id)a0 readyToDisplay:(id /* block */)a1;
- (void)preloadViewControllerForContext:(id)a0;
- (void)loadPreviewControllerIfNeededWithContents:(id)a0 context:(id)a1 completionHandler:(id /* block */)a2;
- (void)previewWillAppear:(BOOL)a0;
- (void)previewDidAppear:(BOOL)a0;
- (void)previewWillDisappear:(BOOL)a0;
- (void)previewDidDisappear:(BOOL)a0;
- (id)additionalItemViewControllerDescription;
- (void)previewBecameFullScreen:(BOOL)a0 animated:(BOOL)a1;
- (BOOL)shouldAcceptTouch:(id)a0 ofGestureRecognizer:(id)a1;
- (void)notifyDelegatesDidFailWithError:(id)a0;
- (void)buttonPressedWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)automaticallyUpdateScrollViewContentOffset;
- (BOOL)automaticallyUpdateScrollViewContentInset;
- (BOOL)automaticallyUpdateScrollViewIndicatorInset;
- (BOOL)canClickToToggleFullscreen;
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
- (void)updateScrollViewContentOffset:(BOOL)a0 withPreviousAppearance:(id)a1;
- (void)_addDragInteractionIfNeeded;
- (void)performCompletionBlocksWithError:(id)a0;
- (BOOL)supportsScrollingUpAndDownUsingKeyCommands;
- (void)_scrollScrollViewDown;
- (void)_scrollScrollViewUp;
- (void)_scrollScrollViewByPercentualOffset:(double)a0;
- (BOOL)draggableViewShouldStartDragSession:(id)a0;
- (id)editProgressIndicatorMessage;
- (void)updateInterfaceForSavingEdits;
- (void)updateInterfaceAfterSavingEdits;
- (void)updateScrollViewContentOffset;
- (id)_cancelTouchToken;
- (BOOL)shouldAlwaysRunFullscreen;
- (void)performFirstTimeAppearanceActionsIfNeeded:(unsigned long long)a0;
- (void)notifyStateRestorationWithUserInfoIfNeeded:(id)a0;
- (void)editedCopyToSaveChangesWithOutputType:(id)a0 completionHandler:(id /* block */)a1;
- (void)showSaveEditsProgressIndicatorAfterDelay;
- (void)hideSaveEditProgressIndicator;
- (void)didStartSavingEdits;
- (void)didFinishSavingEdits;

@end
