@class NSString, SBSceneLayoutAnimationWrapperView, UIView;

@interface SBAnimationWrapperViewLiveContentOverlay : NSObject <SBSwitcherLiveContentOverlay>

@property (readonly, nonatomic) SBSceneLayoutAnimationWrapperView *animationWrapperView;
@property (nonatomic) long long containerOrientation;
@property (readonly, nonatomic) UIView *contentOverlayView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setUsesBrightSceneViewBackgroundMaterial:(BOOL)a0;
- (void)noteKeyboardFocusDidChangeToSceneID:(id)a0;
- (long long)rasterizationStyle;
- (void)setRasterizationStyle:(long long)a0 withMinificationFilterEnabled:(BOOL)a1;
- (id)initWithAnimationWrapperView:(id)a0;
- (void).cxx_destruct;
- (void)setHomeGrabberHidden:(BOOL)a0 animated:(BOOL)a1;
- (void)disableAsynchronousRenderingForNextCommit;
- (void)setStatusBarHidden:(BOOL)a0 nubViewHidden:(BOOL)a1 animator:(id /* block */)a2;

@end
