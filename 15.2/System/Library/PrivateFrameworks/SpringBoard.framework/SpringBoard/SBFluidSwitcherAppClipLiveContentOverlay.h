@class SBAppClipOverlayViewController, NSString, UIStatusBar, SBUISizeObservingView, UIView, FBDisplayLayoutElement, UIViewController;
@protocol SBSwitcherLiveContentOverlayDelegate;

@interface SBFluidSwitcherAppClipLiveContentOverlay : NSObject <SBUISizeObservingViewDelegate, SBFullScreenSwitcherSceneLiveContentOverlay> {
    NSString *_bundleIdentifier;
    NSString *_sceneIdentifier;
    SBAppClipOverlayViewController *_placeholderViewController;
    UIStatusBar *_statusBar;
    SBUISizeObservingView *_containerView;
    BOOL _isPendingUpdate;
}

@property (readonly, nonatomic) UIViewController *contentViewController;
@property (readonly, nonatomic) FBDisplayLayoutElement *displayLayoutElement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SBSwitcherLiveContentOverlayDelegate> delegate;
@property (readonly, nonatomic) UIView *contentOverlayView;
@property (nonatomic, getter=isInsetForHomeAffordance) BOOL insetForHomeAffordance;
@property (readonly, nonatomic, getter=isAsyncRenderingEnabled) BOOL asyncRenderingEnabled;
@property (readonly, nonatomic) BOOL requiresLegacyRotationSupport;

- (long long)trailingStatusBarStyle;
- (void)_installedApplicationsDidChange:(id)a0;
- (long long)leadingStatusBarStyle;
- (void)setDimmed:(BOOL)a0;
- (long long)preferredInterfaceOrientation;
- (unsigned long long)_debugPostModernRotationSupportedInterfaceOrientations;
- (void)setStatusBarHidden:(BOOL)a0 nubViewHidden:(BOOL)a1 animator:(id /* block */)a2;
- (void)setBlurViewIconScale:(double)a0;
- (long long)overlayType;
- (double)currentStatusBarHeight;
- (void)noteKeyboardFocusDidChangeToSceneID:(id)a0;
- (void)disableAsynchronousRenderingForNextCommit;
- (BOOL)isContentUpdating;
- (void)setAsyncRenderingEnabled:(BOOL)a0 withMinificationFilterEnabled:(BOOL)a1;
- (void)setMatchMovedToScene:(BOOL)a0;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (void)configureWithWorkspaceEntity:(id)a0 referenceFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 interfaceOrientation:(long long)a2 layoutRole:(long long)a3 spaceConfiguration:(long long)a4 floatingConfiguration:(long long)a5 hasClassicAppOrientationMismatch:(BOOL)a6;
- (void)setContentReferenceSize:(struct CGSize { double x0; double x1; })a0 interfaceOrientation:(long long)a1;
- (void)invalidate;
- (void)setUsesBrightSceneViewBackgroundMaterial:(BOOL)a0;
- (void)dealloc;
- (void)setLiveContentBlurEnabled:(BOOL)a0 duration:(double)a1 blurDelay:(double)a2 iconViewScale:(double)a3 began:(id /* block */)a4 completion:(id /* block */)a5;
- (void)sizeObservingView:(id)a0 didChangeSize:(struct CGSize { double x0; double x1; })a1;
- (id)initWithPlaceholderEntity:(id)a0;
- (void)_createAndConfigureStatusBar;
- (void)_beginPollingUpdateStillAvailable;
- (void)_launchApplication:(id)a0;

@end
