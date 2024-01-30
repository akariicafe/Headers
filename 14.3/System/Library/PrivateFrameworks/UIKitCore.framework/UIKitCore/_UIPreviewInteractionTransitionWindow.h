@interface _UIPreviewInteractionTransitionWindow : UIWindow

+ (BOOL)_isSystemWindow;

- (BOOL)_canActAsKeyWindowForScreen:(id)a0;
- (BOOL)isInternalWindow;
- (BOOL)_canBecomeKeyWindow;
- (BOOL)_canAffectStatusBarAppearance;
- (id)init;
- (void)_setFirstResponder:(id)a0;
- (BOOL)_isSettingFirstResponder;

@end
