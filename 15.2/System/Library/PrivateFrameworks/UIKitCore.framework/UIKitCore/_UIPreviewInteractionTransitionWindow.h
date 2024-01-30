@interface _UIPreviewInteractionTransitionWindow : UIWindow

+ (BOOL)_isSystemWindow;

- (BOOL)_canAffectStatusBarAppearance;
- (BOOL)_canActAsKeyWindowForScreen:(id)a0;
- (id)_roleHint;
- (void)_setFirstResponder:(id)a0;
- (BOOL)canBecomeKeyWindow;
- (BOOL)isInternalWindow;
- (id)init;
- (BOOL)_isSettingFirstResponder;

@end
