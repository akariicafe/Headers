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

- (long long)_orientationForSceneTransform;
- (BOOL)_isWindowServerHostingManaged;
- (long long)_orientationForViewTransform;
- (BOOL)_usesWindowServerHitTesting;
- (void)_configureContextOptions:(id)a0;
- (BOOL)_extendsScreenSceneLifetime;
- (BOOL)_canPromoteFromKeyWindowStack;
- (long long)_orientationForRootTransform;
- (void)_registerScrollToTopView:(id)a0;
- (BOOL)_preventsRootPresentationController;
- (void)_didMoveFromScreen:(id)a0 toScreen:(id)a1;
- (void).cxx_destruct;
- (BOOL)_needsShakesWhenInactive;
- (void)_updateWindowTraitsAndNotify:(BOOL)a0;
- (void)dealloc;
- (id)_traitCollectionForSize:(struct CGSize { double x0; double x1; })a0 parentCollection:(id)a1;
- (BOOL)_allowsLinkPreviewInteractionInViewServices;
- (unsigned int)contextID;
- (void)didSetResponderTargetForCalloutBar:(id)a0;
- (void)__setHostViewUnderlapsStatusBar:(BOOL)a0;
- (void)_setFirstResponder:(id)a0;
- (void)_unregisterScrollToTopView:(id)a0;
- (id)_normalInheritedTintColor;
- (BOOL)__hostViewUnderlapsStatusBar;
- (long long)_defaultTintAdjustmentMode;
- (BOOL)_shouldPropagateTraitCollectionChanges;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_updatesSafeAreaInsetsOnRead;
- (void)_didCreateRootPresentationController;

@end
