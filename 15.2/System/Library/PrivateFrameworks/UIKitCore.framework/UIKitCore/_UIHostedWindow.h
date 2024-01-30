@class UIColor, _UIHostedWindowHostingHandle, UITraitCollection;
@protocol _UIHostedWindowDelegate;

@interface _UIHostedWindow : UIWindow {
    BOOL __hostViewUnderlapsStatusBar;
}

@property (nonatomic, setter=_setHostTintAdjustmentMode:) long long _hostTintAdjustmentMode;
@property (retain, nonatomic, setter=_setHostTraitCollection:) UITraitCollection *_hostTraitCollection;
@property (nonatomic, setter=_setWantsTraitPropagation:) BOOL _wantsTraitPropagation;
@property (retain, nonatomic, setter=_setHostTintColor:) UIColor *_hostTintColor;
@property (weak, nonatomic) id<_UIHostedWindowDelegate> _hostedWindowDelegate;
@property (readonly, nonatomic) _UIHostedWindowHostingHandle *hostingHandle;

- (void)__setHostViewUnderlapsStatusBar:(BOOL)a0;
- (BOOL)_needsShakesWhenInactive;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_allowsLinkPreviewInteractionInViewServices;
- (long long)_orientationForRootTransform;
- (unsigned int)contextID;
- (long long)_orientationForViewTransform;
- (void)didSetResponderTargetForCalloutBar:(id)a0;
- (void)_setFirstResponder:(id)a0;
- (void).cxx_destruct;
- (void)_didMoveFromScreen:(id)a0 toScreen:(id)a1;
- (BOOL)_preventsRootPresentationController;
- (void)_didCreateRootPresentationController;
- (BOOL)_updatesSafeAreaInsetsOnRead;
- (BOOL)_isWindowServerHostingManaged;
- (void)_updateWindowTraitsAndNotify:(BOOL)a0;
- (BOOL)_shouldPropagateTraitCollectionChanges;
- (id)_traitCollectionForSize:(struct CGSize { double x0; double x1; })a0 parentCollection:(id)a1;
- (BOOL)_canPromoteFromKeyWindowStack;
- (void)_registerScrollToTopView:(id)a0;
- (void)_unregisterScrollToTopView:(id)a0;
- (long long)_orientationForSceneTransform;
- (BOOL)_extendsScreenSceneLifetime;
- (void)dealloc;
- (void)_configureContextOptions:(id)a0;
- (BOOL)_usesWindowServerHitTesting;
- (id)_normalInheritedTintColor;
- (long long)_defaultTintAdjustmentMode;
- (BOOL)__hostViewUnderlapsStatusBar;

@end
