@class SBInlineAppExposeContainerViewController, NSString, UIView;

@interface SBFloatingApplicationInlineAppExposeLiveContentOverlayView : NSObject <SBFloatingApplicationLiveContentOverlayView>

@property (readonly, nonatomic) SBInlineAppExposeContainerViewController *inlineAppExposeContainerViewController;
@property (readonly, nonatomic) UIView *contentOverlayView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setUsesBrightSceneViewBackgroundMaterial:(BOOL)a0;
- (void)noteKeyboardFocusDidChangeToSceneID:(id)a0;
- (long long)rasterizationStyle;
- (void)setRasterizationStyle:(long long)a0 withMinificationFilterEnabled:(BOOL)a1;
- (void).cxx_destruct;
- (id)contentViewController;
- (void)setLiveContentRasterizationDisabled:(BOOL)a0;
- (void)setHomeGrabberHidden:(BOOL)a0 animated:(BOOL)a1;
- (void)disableAsynchronousRenderingForNextCommit;
- (void)setStatusBarHidden:(BOOL)a0 nubViewHidden:(BOOL)a1 animator:(id /* block */)a2;
- (void)invalidate;
- (void)configureWithWorkspaceEntity:(id)a0 referenceFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 interfaceOrientation:(long long)a2;

@end
