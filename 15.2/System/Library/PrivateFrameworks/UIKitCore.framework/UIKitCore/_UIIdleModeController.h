@class UIScreen, UIWindow, UIImageView, NSMapTable;

@interface _UIIdleModeController : NSObject {
    BOOL _didApplyVisualEffects;
    unsigned long long _dismissalTransactionID;
    UIWindow *_backgroundWindow;
    UIImageView *_vignetteView;
    BOOL _keyWindowAllowedGroupBlending;
    UIWindow *_keyWindow;
    NSMapTable *_viewsToCAFilters;
    NSMapTable *_viewsToAttributes;
    NSMapTable *_viewsToOriginalAttributes;
}

@property (nonatomic, getter=isIdleModeEnabled) BOOL idleModeEnabled;
@property (readonly, nonatomic) UIScreen *screen;
@property (nonatomic) unsigned long long style;

- (void).cxx_destruct;
- (double)_dismissalAnimationDuration;
- (id)initWithScreen:(id)a0;
- (void)_animateDismissal;
- (void)_completeDismissal;
- (void)_exitIdleModeWithOptions:(unsigned long long)a0;
- (void)_postWillEnterNotification;
- (void)_enterIdleModeWithOptions:(unsigned long long)a0;
- (void)_postWillExitNotification;
- (BOOL)_recordLayoutAttributesStartingAtView:(id)a0;
- (void)_animatePresentation;
- (void)_prepareForPresentationWithKeyWindow:(id)a0 focusedView:(id)a1;
- (id)_imageForTraitCollection:(id)a0;
- (id)_originalAttributesForView:(id)a0 comparedToIdleModeAttributes:(id)a1;
- (id)_vignetteImageAroundFocusedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_applyPresentationLayoutAttributesToViews;
- (double)_vignetteAlphaForUserInterfaceStyle:(long long)a0;
- (double)_dimmingOverlayWhiteValueForUserInterfaceStyle:(long long)a0;
- (void)_applyDismissalLayoutAttributesToViews;
- (void)dealloc;
- (void)_exitIdleMode;
- (double)_presentationAnimationDuration;
- (void)_enterIdleMode;
- (void)_applyLayoutAttributes:(id)a0 toView:(id)a1;

@end
