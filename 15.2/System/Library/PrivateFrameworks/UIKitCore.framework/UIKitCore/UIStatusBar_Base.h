@class UIColor, UIStatusBarServer, NSArray, UIStatusBarWindow, UIStatusBarStyleRequest, UIView, NSString;
@protocol UIStatusBarCarPlayDockDataProviding, UIStatusBarStyleDelegate, UIViewControllerTransitionCoordinator, UIStatusBarStateProvider, UIStatusBarManager;

@interface UIStatusBar_Base : _UIScrollsToTopInitiatorView <UIStatusBarServerClient, UIStatusBarStateObserver>

@property (class, retain, getter=_implementationClass, setter=_setImplementationClass:) Class implementationClass;

@property (retain, nonatomic) UIStatusBarServer *statusBarServer;
@property (nonatomic) BOOL foreground;
@property (nonatomic) BOOL hidden;
@property (nonatomic) BOOL registered;
@property (retain, nonatomic) id<UIStatusBarStateProvider> inProcessStateProvider;
@property (readonly, nonatomic) struct { BOOL x0[44]; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; unsigned char x9 : 2; unsigned char x10 : 1; unsigned char x11 : 1; unsigned char x12 : 1; unsigned char x13 : 1; unsigned char x14 : 1; unsigned char x15 : 1; unsigned char x16 : 1; unsigned char x17 : 1; unsigned char x18 : 1; unsigned char x19 : 1; unsigned char x20 : 1; unsigned char x21 : 1; unsigned char x22 : 1; unsigned char x23 : 1; unsigned char x24 : 1; unsigned char x25 : 1; unsigned char x26 : 1; unsigned int x27; unsigned char x28 : 1; unsigned char x29 : 1; unsigned char x30 : 1; unsigned char x31 : 1; unsigned char x32 : 1; unsigned char x33 : 1; unsigned char x34 : 1; unsigned char x35 : 1; struct { BOOL x0[44]; char x1[64]; char x2[64]; char x3[256]; int x4; int x5; int x6; int x7; char x8[100]; char x9[100]; char x10[100]; char x11[100]; char x12[2][100]; char x13[1024]; unsigned int x14; unsigned int x15; unsigned char x16 : 1; unsigned char x17 : 1; int x18; int x19; unsigned char x20 : 1; unsigned int x21; unsigned int x22; int x23; unsigned int x24; char x25[150]; int x26; int x27; unsigned char x28 : 1; unsigned char x29 : 1; unsigned char x30 : 1; char x31[256]; unsigned char x32 : 1; unsigned char x33 : 1; unsigned char x34 : 1; unsigned char x35 : 2; unsigned char x36 : 2; unsigned char x37 : 1; unsigned int x38; unsigned char x39 : 1; unsigned char x40 : 1; unsigned char x41 : 1; char x42[256]; char x43[256]; char x44[100]; unsigned char x45 : 1; unsigned char x46 : 1; unsigned char x47 : 1; unsigned char x48 : 1; unsigned char x49 : 1; double x50; unsigned char x51 : 1; unsigned char x52 : 1; char x53[100]; char x54[100]; char x55[256]; char x56[256]; } x36; } *localDataOverrides;
@property (nonatomic) BOOL serverUpdatesDisabled;
@property (nonatomic, getter=_requestStyle, setter=_setRequestedStyle:) long long requestedStyle;
@property (weak, nonatomic) id<UIViewControllerTransitionCoordinator> _transitionCoordinator;
@property (nonatomic) BOOL suppressesHiddenSideEffects;
@property (nonatomic) BOOL homeItemsDisabled;
@property (nonatomic, setter=_setDisablesRasterization:) BOOL disablesRasterization;
@property (retain, nonatomic) UIColor *foregroundColor;
@property (nonatomic) long long legibilityStyle;
@property (copy, nonatomic) UIStatusBarStyleRequest *styleRequest;
@property (nonatomic) unsigned long long activeStyleOverride;
@property (nonatomic) long long mode;
@property (copy, nonatomic) NSArray *enabledPartIdentifiers;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } avoidanceFrame;
@property (weak, nonatomic) id<UIStatusBarManager> manager;
@property (weak, nonatomic) UIView *sensorActivityIndicator;
@property (weak, nonatomic) id<UIStatusBarStyleDelegate> styleDelegate;
@property (weak, nonatomic) id<UIStatusBarCarPlayDockDataProviding> dockDataProvider;
@property (readonly, weak, nonatomic) UIStatusBarWindow *statusBarWindow;
@property (nonatomic) BOOL persistentAnimationsEnabled;
@property (readonly, nonatomic) unsigned long long styleOverrides;
@property (nonatomic) long long orientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameInSceneReferenceSpaceForStyle:(long long)a0 orientation:(long long)a1 inSceneWithReferenceSize:(struct CGSize { double x0; double x1; })a2;
+ (double)_heightForStyle:(long long)a0 orientation:(long long)a1 forStatusBarFrame:(BOOL)a2 inWindow:(id)a3;
+ (double)_viewControllerAdjustmentForOrientation:(long long)a0 inWindow:(id)a1;
+ (long long)_defaultStyleForRequestedStyle:(long long)a0 styleOverrides:(unsigned long long)a1;
+ (double)_heightForStyle:(long long)a0 orientation:(long long)a1 forStatusBarFrame:(BOOL)a2 inWindow:(id)a3 isAzulBLinked:(BOOL)a4;
+ (double)heightForStyle:(long long)a0 orientation:(long long)a1 inWindow:(id)a2;
+ (double)heightForStyle:(long long)a0 orientation:(long long)a1 inWindow:(id)a2 isAzulBLinked:(BOOL)a3;
+ (double)heightForStyle:(long long)a0 orientation:(long long)a1;
+ (long long)_defaultStyleForRequestedStyle:(long long)a0 styleOverrides:(unsigned long long)a1 activeStyleOverride:(unsigned long long *)a2;

- (long long)currentStyle;
- (double)currentHeight;
- (BOOL)isTranslucent;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForPartWithIdentifier:(id)a0;
- (void)forceUpdateToData:(const struct { BOOL x0[44]; char x1[64]; char x2[64]; char x3[256]; int x4; int x5; int x6; int x7; char x8[100]; char x9[100]; char x10[100]; char x11[100]; char x12[2][100]; char x13[1024]; unsigned int x14; unsigned int x15; unsigned char x16 : 1; unsigned char x17 : 1; int x18; int x19; unsigned char x20 : 1; unsigned int x21; unsigned int x22; int x23; unsigned int x24; char x25[150]; int x26; int x27; unsigned char x28 : 1; unsigned char x29 : 1; unsigned char x30 : 1; char x31[256]; unsigned char x32 : 1; unsigned char x33 : 1; unsigned char x34 : 1; unsigned char x35 : 2; unsigned char x36 : 2; unsigned char x37 : 1; unsigned int x38; unsigned char x39 : 1; unsigned char x40 : 1; unsigned char x41 : 1; char x42[256]; char x43[256]; char x44[100]; unsigned char x45 : 1; unsigned char x46 : 1; unsigned char x47 : 1; unsigned char x48 : 1; unsigned char x49 : 1; double x50; unsigned char x51 : 1; unsigned char x52 : 1; char x53[100]; char x54[100]; char x55[256]; char x56[256]; } *)a0 animated:(BOOL)a1;
- (BOOL)isDoubleHeight;
- (void)jiggleLockIcon;
- (void)setOffset:(struct UIOffset { double x0; double x1; })a0 forPartWithIdentifier:(id)a1;
- (void)statusBarServer:(id)a0 didReceiveDoubleHeightStatusString:(id)a1 forStyle:(long long)a2;
- (void)animateUnlock;
- (void)statusBarServer:(id)a0 didReceiveStyleOverrides:(unsigned long long)a1;
- (void)requestStyle:(long long)a0;
- (void)didMoveToSuperview;
- (void)requestStyle:(long long)a0 partStyles:(id)a1 animationParameters:(id)a2 forced:(BOOL)a3;
- (void)_performBlockWhileIgnoringForegroundViewChanges:(id /* block */)a0;
- (BOOL)_shouldSeekHigherPriorityTouchTarget;
- (void)setAlpha:(double)a0 forPartWithIdentifier:(id)a1;
- (void)setEnabledCenterItems:(id)a0 duration:(double)a1;
- (void)setShowsOnlyCenterItems:(BOOL)a0;
- (void)statusBarServer:(id)a0 didReceiveStatusBarData:(const struct { BOOL x0[44]; char x1[64]; char x2[64]; char x3[256]; int x4; int x5; int x6; int x7; char x8[100]; char x9[100]; char x10[100]; char x11[100]; char x12[2][100]; char x13[1024]; unsigned int x14; unsigned int x15; unsigned char x16 : 1; unsigned char x17 : 1; int x18; int x19; unsigned char x20 : 1; unsigned int x21; unsigned int x22; int x23; unsigned int x24; char x25[150]; int x26; int x27; unsigned char x28 : 1; unsigned char x29 : 1; unsigned char x30 : 1; char x31[256]; unsigned char x32 : 1; unsigned char x33 : 1; unsigned char x34 : 1; unsigned char x35 : 2; unsigned char x36 : 2; unsigned char x37 : 1; unsigned int x38; unsigned char x39 : 1; unsigned char x40 : 1; unsigned char x41 : 1; char x42[256]; char x43[256]; char x44[100]; unsigned char x45 : 1; unsigned char x46 : 1; unsigned char x47 : 1; unsigned char x48 : 1; unsigned char x49 : 1; double x50; unsigned char x51 : 1; unsigned char x52 : 1; char x53[100]; char x54[100]; char x55[256]; char x56[256]; } *)a1 withActions:(int)a2;
- (void)setTintColor:(id)a0 withDuration:(double)a1;
- (void)setHidden:(BOOL)a0 animated:(BOOL)a1;
- (void)_statusBarWillAnimateRotation;
- (void)setAlpha:(double)a0;
- (void)_noteStyleOverridesChangedLocally;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setOverrideHeight:(double)a0;
- (void)_didEnterBackground:(id)a0;
- (void)_statusBarDidAnimateRotation;
- (void)forceUpdateData:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 showForegroundView:(BOOL)a1;
- (double)defaultDoubleHeight;
- (void)_requestStyle:(long long)a0 partStyles:(id)a1 animationParameters:(id)a2 forced:(BOOL)a3;
- (void)_evaluateServerRegistration;
- (void)requestStyle:(long long)a0 animationParameters:(id)a1;
- (void)_getStyle:(long long *)a0 andActiveOverride:(unsigned long long *)a1 forRequestedStyle:(long long)a2;
- (void)_performAnimations:(id /* block */)a0 withParameters:(id)a1 completion:(id /* block */)a2;
- (void)requestStyle:(long long)a0 animated:(BOOL)a1;
- (long long)styleForRequestedStyle:(long long)a0;
- (void)setForegroundAlpha:(double)a0 animationParameters:(id)a1;
- (void)setAction:(id)a0 forPartWithIdentifier:(id)a1;
- (id)actionForPartWithIdentifier:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })currentFrame;
- (void)_setHidden:(BOOL)a0 animationParameters:(id)a1;
- (void).cxx_destruct;
- (id)activeTintColor;
- (void)forceUpdateDoubleHeightStatus;
- (void)_willEnterForeground:(id)a0;
- (void)forgetEitherSideHistory;
- (BOOL)_isTransparent;
- (void)_styleOverridesDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 showForegroundView:(BOOL)a1 inProcessStateProvider:(id)a2;
- (BOOL)_usesModernBar;
- (double)heightForOrientation:(long long)a0 isAzulBLinked:(BOOL)a1;
- (void)requestStyle:(long long)a0 animationParameters:(id)a1 forced:(BOOL)a2;
- (void)requestStyle:(long long)a0 animated:(BOOL)a1 forced:(BOOL)a2;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_hiddenTransformForHideAnimationParameters:(id)a0;
- (double)_hiddenAlphaForHideAnimationParameters:(id)a0;
- (BOOL)_canShowInOrientation:(long long)a0;
- (void)setLocalDataOverrides:(struct { BOOL x0[44]; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; unsigned char x9 : 2; unsigned char x10 : 1; unsigned char x11 : 1; unsigned char x12 : 1; unsigned char x13 : 1; unsigned char x14 : 1; unsigned char x15 : 1; unsigned char x16 : 1; unsigned char x17 : 1; unsigned char x18 : 1; unsigned char x19 : 1; unsigned char x20 : 1; unsigned char x21 : 1; unsigned char x22 : 1; unsigned char x23 : 1; unsigned char x24 : 1; unsigned char x25 : 1; unsigned char x26 : 1; unsigned int x27; unsigned char x28 : 1; unsigned char x29 : 1; unsigned char x30 : 1; unsigned char x31 : 1; unsigned char x32 : 1; unsigned char x33 : 1; unsigned char x34 : 1; unsigned char x35 : 1; struct { BOOL x0[44]; char x1[64]; char x2[64]; char x3[256]; int x4; int x5; int x6; int x7; char x8[100]; char x9[100]; char x10[100]; char x11[100]; char x12[2][100]; char x13[1024]; unsigned int x14; unsigned int x15; unsigned char x16 : 1; unsigned char x17 : 1; int x18; int x19; unsigned char x20 : 1; unsigned int x21; unsigned int x22; int x23; unsigned int x24; char x25[150]; int x26; int x27; unsigned char x28 : 1; unsigned char x29 : 1; unsigned char x30 : 1; char x31[256]; unsigned char x32 : 1; unsigned char x33 : 1; unsigned char x34 : 1; unsigned char x35 : 2; unsigned char x36 : 2; unsigned char x37 : 1; unsigned int x38; unsigned char x39 : 1; unsigned char x40 : 1; unsigned char x41 : 1; char x42[256]; char x43[256]; char x44[100]; unsigned char x45 : 1; unsigned char x46 : 1; unsigned char x47 : 1; unsigned char x48 : 1; unsigned char x49 : 1; double x50; unsigned char x51 : 1; unsigned char x52 : 1; char x53[100]; char x54[100]; char x55[256]; char x56[256]; } x36; } *)a0;
- (BOOL)showsContentsOnScreen;
- (void)setTintColor:(id)a0;
- (BOOL)_rectIntersectsTimeItem:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct UIOffset { double x0; double x1; })offsetForPartWithIdentifier:(id)a0;
- (double)heightForOrientation:(long long)a0;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 showForegroundView:(BOOL)a1 wantsServer:(BOOL)a2 inProcessStateProvider:(id)a3;
- (void)statusBarServer:(id)a0 didReceiveGlowAnimationState:(BOOL)a1 forStyle:(long long)a2;
- (void)_clearOverrideHeight;
- (void)setHidden:(BOOL)a0 animationParameters:(id)a1;
- (void)dealloc;
- (void)requestStyle:(long long)a0 animation:(int)a1 startTime:(double)a2 duration:(double)a3 curve:(long long)a4;
- (void)setStyleRequest:(id)a0 animationParameters:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForOrientation:(long long)a0;
- (void)setLegibilityStyle:(long long)a0 animationParameters:(id)a1;
- (void)setForegroundColor:(id)a0 animationParameters:(id)a1;
- (BOOL)isHidden;
- (double)alphaForPartWithIdentifier:(id)a0;
- (void)statusBarStateProvider:(id)a0 didPostStatusBarData:(const struct { BOOL x0[44]; char x1[64]; char x2[64]; char x3[256]; int x4; int x5; int x6; int x7; char x8[100]; char x9[100]; char x10[100]; char x11[100]; char x12[2][100]; char x13[1024]; unsigned int x14; unsigned int x15; unsigned char x16 : 1; unsigned char x17 : 1; int x18; int x19; unsigned char x20 : 1; unsigned int x21; unsigned int x22; int x23; unsigned int x24; char x25[150]; int x26; int x27; unsigned char x28 : 1; unsigned char x29 : 1; unsigned char x30 : 1; char x31[256]; unsigned char x32 : 1; unsigned char x33 : 1; unsigned char x34 : 1; unsigned char x35 : 2; unsigned char x36 : 2; unsigned char x37 : 1; unsigned int x38; unsigned char x39 : 1; unsigned char x40 : 1; unsigned char x41 : 1; char x42[256]; char x43[256]; char x44[100]; unsigned char x45 : 1; unsigned char x46 : 1; unsigned char x47 : 1; unsigned char x48 : 1; unsigned char x49 : 1; double x50; unsigned char x51 : 1; unsigned char x52 : 1; char x53[100]; char x54[100]; char x55[256]; char x56[256]; } *)a1 withActions:(int)a2;
- (void)forceUpdate:(BOOL)a0;
- (void)forceUpdateStyleOverrides:(BOOL)a0;
- (double)defaultHeight;

@end
