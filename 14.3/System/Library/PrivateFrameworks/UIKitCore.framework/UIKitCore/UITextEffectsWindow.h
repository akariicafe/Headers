@class UIWindowScene, NSString, NSDictionary, UIEditingOverlayViewController, NSLayoutConstraint;

@interface UITextEffectsWindow : UIAutoRotatingWindow <_UICanvasBasedObject> {
    BOOL _inDealloc;
    unsigned long long _activeEffectsCount;
    NSDictionary *_perCanvasOptions;
    UIWindowScene *__intendedWindowScene;
    unsigned long long _activeRemoteViewCount;
    unsigned long long _windowLevelCount;
    double _windowLevelStack[5];
    BOOL _manualHostingOverride;
    NSLayoutConstraint *_bottomConstraint;
}

@property (readonly) UIWindowScene *_intendedCanvas;
@property (readonly) NSDictionary *_options;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIEditingOverlayViewController *editingOverlayViewController;
@property (readonly) unsigned int contextID;
@property (readonly, nonatomic) BOOL isFullscreen;
@property (nonatomic) double defaultWindowLevel;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } keyboardScreenReferenceSize;
@property (readonly, nonatomic) double keyboardWidthForCurrentDevice;
@property (nonatomic) struct CGPoint { double x; double y; } hostedWindowOffset;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } hostedFrame;
@property (nonatomic) struct CGSize { double width; double height; } hostedSceneSize;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } hostedSafeInsets;

+ (BOOL)_isSecure;
+ (id)sharedTextEffectsWindowForScreen:(id)a0;
+ (id)activeTextEffectsWindowForCanvas:(id)a0;
+ (id)_sharedTextEffectsWindowforWindowScene:(id)a0 allowHosted:(BOOL)a1 matchesStatusBarOrientationOnAccess:(BOOL)a2 shouldCreateIfNecessary:(BOOL)a3;
+ (void)releaseSharedInstances;
+ (id)sharedTextEffectsWindowForWindowScene:(id)a0;
+ (id)_canvasForScreen:(id)a0;
+ (void)raiseTextEffectsWindowsForShowNotificationCenter;
+ (id)activeTextEffectsWindowForScreen:(id)a0;
+ (void)lowerTextEffectsWindowsForHideNotificationCenter;
+ (id)sharedTextEffectsWindowAboveStatusBar;
+ (id)sharedTextEffectsWindow;
+ (id)activeTextEffectsWindowForWindowScene:(id)a0;
+ (id)sharedTextEffectsWindowForCanvas:(id)a0;
+ (BOOL)_shouldSoftAssertOnSetScreen;

- (void)_updateTransformLayer;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })actualSceneFrameForOrientation:(long long)a0;
- (id)_initBasicWithCanvas:(id)a0 options:(id)a1;
- (void)delayHideWindow;
- (void)_setWindowLevel:(double)a0;
- (BOOL)_shouldTextEffectsWindowBeHostedForView:(id)a0;
- (void)setEnableRemoteHosting:(BOOL)a0;
- (void)becomeKeyWindow;
- (void)sendSubviewToBack:(id)a0;
- (void)_updateRootViewConstraintsForInterfaceOrientationAndStatusBarHeight;
- (BOOL)_shouldAutorotateToInterfaceOrientation:(long long)a0;
- (void)updateForOrientation:(long long)a0 forceResetTransform:(BOOL)a1;
- (void)_commonInitWithOptions:(id)a0;
- (void)sortSubviews;
- (void)_sortSubviewsOfView:(id)a0;
- (id)_inputWindowController;
- (id)_initWithCanvas:(id)a0 options:(id)a1;
- (struct CGPoint { double x0; double x1; })_forHostedProcessConvertPoint:(struct CGPoint { double x0; double x1; })a0 forWindow:(id)a1 wasFromWindow:(BOOL)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toWindow:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_sceneReferenceBounds;
- (void)updateEditingOverlayContainer;
- (void)_didSnapshot;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })actualSceneBoundsForLandscape:(BOOL)a0;
- (void)_restoreWindowLevel;
- (void)updateSubviewOrdering;
- (BOOL)_canActAsKeyWindowForScreen:(id)a0;
- (void)_sceneBoundsDidChange;
- (void)_willSnapshot;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })actualSceneFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })actualSceneBounds;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 fromView:(id)a1;
- (BOOL)_isTextEffectsWindow;
- (void)_matchDeviceOrientation;
- (id)aboveStatusBarWindow;
- (void)_createSystemGestureGateGestureRecognizerIfNeeded;
- (BOOL)enableRemoteHosting;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 fromWindow:(id)a1;
- (BOOL)_shouldResizeWithScene;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_usableSceneBounds;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 toWindow:(id)a1;
- (BOOL)_isFullscreen;
- (double)slideOverWindowVerticalOffset;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_forHostedProcessConvertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forWindow:(id)a1 wasFromWindow:(BOOL)a2;
- (void)_configureContextOptions:(id)a0;
- (void)resetTransform;
- (BOOL)isInternalWindow;
- (BOOL)_extendsScreenSceneLifetime;
- (BOOL)_matchingOptions:(id)a0;
- (void)addBottomPadding:(double)a0;
- (long long)actualSceneOrientation;
- (void)handleStatusBarChangeFromHeight:(double)a0 toHeight:(double)a1;
- (BOOL)_shouldInstallRootPresentationController;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_sceneBounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toView:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromView:(id)a1;
- (void)updateForOrientation:(long long)a0;
- (BOOL)_canAffectStatusBarAppearance;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 toView:(id)a1;
- (void)_didRemoveSubview:(id)a0;
- (void)_commonTextEffectsInit;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 attached:(BOOL)a1;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 debugName:(id)a1 windowScene:(id)a2;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didAddSubview:(id)a0;
- (long long)interfaceOrientation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)bringSubviewToFront:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromWindow:(id)a1;

@end
