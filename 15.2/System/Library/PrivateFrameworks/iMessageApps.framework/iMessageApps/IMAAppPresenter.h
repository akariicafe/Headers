@class CKBrowserTransitionCoordinator, NSString, CKBrowserSwitcherViewController, IMBalloonPlugin, CKExpandedAppViewController, UIViewController;
@protocol IMAAppPresenterDelegate;

@interface IMAAppPresenter : NSObject <CKBrowserViewControllerSendDelegate, CKBrowserSwitcherViewControllerDelegate, CKExpandedAppViewControllerDelegate, CKBrowserDragControllerTranscriptDelegate, CKBrowserTransitionCoordinatorDelegate> {
    IMBalloonPlugin *_currentBalloonPlugin;
    CKExpandedAppViewController *_expandedAppViewController;
    CKBrowserTransitionCoordinator *_transitionCoordinator;
    BOOL _isTransitioningPresentationStyles;
}

@property (retain, nonatomic) CKBrowserSwitcherViewController *switcherViewController;
@property (weak, nonatomic) id<IMAAppPresenterDelegate> delegate;
@property (nonatomic) double compactHeight;
@property (nonatomic) BOOL alwaysPresentAppsExpanded;
@property (readonly, nonatomic) UIViewController *currentAppViewController;
@property (nonatomic) BOOL hidesCompactAppForStickerDrag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)disableAutomaticAppDiscovery;
+ (void)loadAppWithIdentifierIfNeeded:(id)a0;

- (void)startEditingPayload:(id)a0;
- (id)dragControllerTranscriptDelegate;
- (void)commitPayload:(id)a0;
- (void)startEditingPayload:(id)a0 dismiss:(BOOL)a1;
- (void)openURL:(id)a0 pluginID:(id)a1 completionHandler:(id /* block */)a2;
- (void)commitSticker:(id)a0;
- (void)openURL:(id)a0 applicationIdentifier:(id)a1 pluginID:(id)a2 completionHandler:(id /* block */)a3;
- (void)presentAlertWithTitle:(id)a0 message:(id)a1 buttonTitle:(id)a2 completion:(id /* block */)a3;
- (void)dismissToKeyboard:(BOOL)a0;
- (void)commitSticker:(id)a0 withDragTarget:(id)a1;
- (void)dragManagerDidEndDragging:(id)a0;
- (void)dragManagerDidBeginDragging:(id)a0;
- (void)dragManager:(id)a0 draggedItemWithTarget:(id)a1;
- (void)requestPresentationStyleFullScreenModalForPlugin:(id)a0;
- (int)dragManager:(id)a0 dropAreaForDragTarget:(id)a1;
- (void)dragManager:(id)a0 overrideDropPointForTarget:(id)a1 completion:(id /* block */)a2;
- (void)dismiss;
- (void)dismissAndReloadInputViews:(BOOL)a0 forPlugin:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)switcherViewControllerDidCollapse:(id)a0;
- (void)switcherViewControllerDidFinishSwitching:(id)a0 toViewController:(id)a1;
- (BOOL)switcherViewControllerShouldShowIconAndTitleWhenCompact:(id)a0;
- (void)browserTransitionCoordinatorWillTransitionOrPresentToFullscreen:(id)a0 withReason:(long long)a1;
- (void)browserTransitionCoordinatorWillCollapseOrDismiss:(id)a0 withReason:(long long)a1;
- (void)browserTransitionCoordinatorDidTransitionOrPresentToFullscreen:(id)a0 withReason:(long long)a1;
- (void)browserTransitionCoordinatorDidCollapseOrDismiss:(id)a0 withReason:(long long)a1;
- (id)transitionsPresentationViewController;
- (struct CGSize { double x0; double x1; })browserTransitionCoordinator:(id)a0 preferredSizeForBrowser:(id)a1;
- (double)browserTransitionCoordinatorCollapsedContentHeight:(id)a0;
- (BOOL)browserTransitionCoordinatorShouldDismissOnDragSuccess:(id)a0;
- (void)setLocalUserIsTyping:(BOOL)a0;
- (void)dealloc;
- (void)dismissAndReloadInputViews:(BOOL)a0;
- (BOOL)shouldAlwaysShowAppTitle;
- (void)requestPresentationStyleExpanded:(BOOL)a0;
- (void)hideAppViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)notifyDelegateOfSelectedPlugin:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })alwaysExpandedAppViewControllerFrame;
- (BOOL)addSwitcher;
- (void)positionSwitcherOffscreen:(BOOL)a0;
- (void)animateSwitcherOffscreen:(BOOL)a0 completion:(id /* block */)a1;
- (void)_hideCompactBrowserAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)updateSwitcherViewFrame;
- (id)appViewControllerPresenter;
- (double)switcherHeight;
- (BOOL)isAppCompact;
- (BOOL)isSwitcherOffscreen;
- (void)presentAppWithBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)presentFullScreenModalAppWithBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)updateAppFrameForRotation;

@end
