@interface _UIPreviewInteractionTransitionWindow : UIWindow

+ (BOOL)_isSystemWindow;

- (BOOL)isInternalWindow;
- (BOOL)_canActAsKeyWindowForScreen:(id)a0;
- (BOOL)_canAffectStatusBarAppearance;
- (void)_setFirstResponder:(id)a0;
- (BOOL)_isSettingFirstResponder;
- (BOOL)canBecomeKeyWindow;
- (id)_roleHint;
- (id)init;

@end
