@class QLRemotePreviewHostViewController, NSString, NSDictionary, QLCustomItemViewControllerHostProxy, NSLayoutConstraint, NSExtension, QLPreviewExtensionHostContext;
@protocol QLRemotePopoverTracker, QLPrintingProtocol;

@interface QLRemoteItemViewController : QLItemViewController <QLPrintingProtocol, QLCustomItemViewControllerHost, QLRemotePopoverTracker> {
    NSExtension *_extension;
    QLPreviewExtensionHostContext *_hostContext;
    NSDictionary *_hostConfiguration;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_bottomConstraint;
    id<QLPrintingProtocol> _printer;
    id<QLRemotePopoverTracker> _popoverTracker;
    QLCustomItemViewControllerHostProxy *_hostViewControllerProxy;
    BOOL _isVisible;
    BOOL _isAppearing;
    BOOL _fullScreen;
    BOOL _needsSetup;
    BOOL _readyToLoad;
    id /* block */ _readyToDisplay;
    id /* block */ _loadHandler;
}

@property (retain, nonatomic) QLRemotePreviewHostViewController *remoteViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setFullScreen:(BOOL)a0;
- (id)init;
- (void).cxx_destruct;
- (id)printer;
- (void)previewControllerWantsFullScreen:(BOOL)a0;
- (void)previewControllerDidUpdateTitle:(id)a0;
- (void)previewControllerDidUpdatePreferredContentSize:(id)a0;
- (void)_loadRemoteViewControllerForContext:(id)a0;
- (void)_registerLoadingHandler:(id /* block */)a0;
- (void)_performSetUpWithRemoteViewController:(id)a0 extension:(id)a1 request:(id)a2 hostContext:(id)a3;
- (void)_performLoadHandlerIfNeeded;
- (void)dealloc;
- (id)fullscreenBackgroundColor;
- (void)dismissQuickLook;
- (void)loadPreviewControllerWithContents:(id)a0 context:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)canSwipeToDismiss;
- (BOOL)canPinchToDismiss;
- (BOOL)canEnterFullScreen;
- (void)numberOfPagesWithSize:(struct CGSize { double x0; double x1; })a0 completionHandler:(id /* block */)a1;
- (void)prepareForDrawingPages:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 ofSize:(struct CGSize { double x0; double x1; })a1;
- (void)pdfDataForPageAtIndex:(long long)a0 withCompletionHandler:(id /* block */)a1;
- (void)provideCurrentPageAndVisibleRectWithCompletionHandler:(id /* block */)a0;
- (BOOL)canClickToToggleFullscreen;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)getFrameWithCompletionBlock:(id /* block */)a0;
- (void)setAppearance:(id)a0 animated:(BOOL)a1;
- (BOOL)presenterShouldHandleLoadingView:(id)a0 readyToDisplay:(id /* block */)a1;
- (void)preloadViewControllerForContext:(id)a0;
- (void)previewWillAppear:(BOOL)a0;
- (void)previewDidAppear:(BOOL)a0;
- (void)previewWillDisappear:(BOOL)a0;
- (void)previewDidDisappear:(BOOL)a0;
- (BOOL)canShowNavBar;
- (void)presentShareSheetWithPopoverTracker:(id)a0 customSharedURL:(id)a1 dismissCompletion:(id /* block */)a2;
- (void)forwardMessageToHostOfCustomViewController:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)canShowToolBar;

@end
