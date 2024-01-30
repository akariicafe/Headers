@class NSString, SBDeviceApplicationSceneHandle, SBDeviceApplicationSceneView, UIView, SBUISizeObservingView;
@protocol SBSwitcherLiveContentOverlayDelegate;

@interface SBShelfLiveContentOverlay : NSObject <SBSwitcherLiveContentOverlay, SBSceneViewPresentationConfiguring, SBUISizeObservingViewDelegate> {
    SBDeviceApplicationSceneView *_sceneView;
    SBUISizeObservingView *_sizeObservingView;
}

@property (readonly, nonatomic) SBDeviceApplicationSceneHandle *sceneHandle;
@property (nonatomic) unsigned long long displayMode;
@property (nonatomic, getter=isPendingSwitcherSnapshotCacheUpdate) BOOL pendingSwitcherSnapshotCacheUpdate;
@property (weak, nonatomic) id<SBSwitcherLiveContentOverlayDelegate> delegate;
@property (readonly, nonatomic) UIView *contentOverlayView;
@property (nonatomic, getter=isInsetForHomeAffordance) BOOL insetForHomeAffordance;
@property (readonly, nonatomic, getter=isAsyncRenderingEnabled) BOOL asyncRenderingEnabled;
@property (readonly, nonatomic) BOOL requiresLegacyRotationSupport;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)trailingStatusBarStyle;
- (id)sceneViewPresentationIdentifier:(id)a0;
- (long long)leadingStatusBarStyle;
- (void)setDimmed:(BOOL)a0;
- (long long)sceneViewPresentationPriority:(id)a0;
- (long long)preferredInterfaceOrientation;
- (unsigned long long)_debugPostModernRotationSupportedInterfaceOrientations;
- (void)setStatusBarHidden:(BOOL)a0 nubViewHidden:(BOOL)a1 animator:(id /* block */)a2;
- (void)setBlurViewIconScale:(double)a0;
- (double)currentStatusBarHeight;
- (void)noteKeyboardFocusDidChangeToSceneID:(id)a0;
- (void)disableAsynchronousRenderingForNextCommit;
- (BOOL)isContentUpdating;
- (void)setAsyncRenderingEnabled:(BOOL)a0 withMinificationFilterEnabled:(BOOL)a1;
- (void)setMatchMovedToScene:(BOOL)a0;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (void)setUsesBrightSceneViewBackgroundMaterial:(BOOL)a0;
- (void)setLiveContentBlurEnabled:(BOOL)a0 duration:(double)a1 blurDelay:(double)a2 iconViewScale:(double)a3 began:(id /* block */)a4 completion:(id /* block */)a5;
- (void)sizeObservingView:(id)a0 didChangeSize:(struct CGSize { double x0; double x1; })a1;
- (id)initWithSceneHandle:(id)a0 referenceSize:(struct CGSize { double x0; double x1; })a1 referenceOrientation:(long long)a2 livePortalView:(id)a3 isInsetForHomeAffordance:(BOOL)a4;
- (void)_updateSceneViewInSideSizeObserveringViewIfNecessary;

@end
