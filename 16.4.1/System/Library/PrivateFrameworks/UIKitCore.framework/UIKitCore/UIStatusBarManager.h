@class UIWindowScene, UIScene, NSDictionary, NSString;

@interface UIStatusBarManager : NSObject <_UISceneComponentProviding>

@property (retain, nonatomic) UIWindowScene *windowScene;
@property (readonly, nonatomic) NSDictionary *statusBarPartStyles;
@property (readonly, nonatomic, getter=isInStatusBarFadeAnimation) BOOL inStatusBarFadeAnimation;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } _statusBarFrameIgnoringVisibility;
@property (nonatomic, getter=_isOverridingStatusBarHidden, setter=_setOverridingStatusBarHidden:) BOOL _overriddingStatusBarHidden;
@property (readonly, nonatomic) double statusBarAlpha;
@property (readonly, nonatomic) double statusBarHeight;
@property (readonly, nonatomic) double defaultStatusBarHeight;
@property (copy, nonatomic) id /* block */ debugMenuHandler;
@property (readonly, nonatomic) long long statusBarStyle;
@property (readonly, nonatomic, getter=isStatusBarHidden) BOOL statusBarHidden;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } statusBarFrame;
@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_implicitStatusBarAnimationParametersWithClass:(Class)a0;

- (BOOL)statusBarHidden;
- (id /* block */)updateStatusBarAppearanceWithClientSettings:(id)a0 transitionContext:(id)a1;
- (id)initWithScene:(id)a0;
- (id)_settingsDiffActionsForScene:(id)a0;
- (BOOL)_updateAlpha;
- (void)_handleScrollToTopAtXPosition:(double)a0;
- (struct CGPoint { double x0; double x1; })_adjustedLocationForXPosition:(double)a0;
- (BOOL)_updateVisibilityForWindow:(id)a0 targetOrientation:(long long)a1 animationParameters:(id *)a2;
- (void)updateStatusBarAppearance;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })statusBarFrameForStatusBarHeight:(double)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })statusBarFrameForStatusBarHeight:(double)a0 inOrientation:(long long)a1;
- (double)defaultStatusBarHeightInOrientation:(long long)a0;
- (id)createLocalStatusBar;
- (void)updateStatusBarAppearanceWithAnimationParameters:(id)a0;
- (void)handleTapAction:(id)a0;
- (void)_visibilityChangedWithOriginalOrientation:(long long)a0 targetOrientation:(long long)a1 animationParameters:(id)a2;
- (id /* block */)_updateStatusBarAppearanceWithClientSettings:(id)a0 transitionContext:(id)a1 animationParameters:(id)a2;
- (void)_setOverridingStatusBarHidden:(BOOL)a0 animationParameters:(id)a1;
- (void).cxx_destruct;
- (BOOL)_updateStyleForWindow:(id)a0 animationParameters:(id *)a1;

@end
