@interface _UISnapshotWindow : UIWindow

+ (BOOL)_isSystemWindow;

- (BOOL)_alwaysGetsContexts;
- (BOOL)_canActAsKeyWindowForScreen:(id)a0;
- (void)_setFirstResponder:(id)a0;
- (BOOL)canBecomeKeyWindow;
- (BOOL)_isSettingFirstResponder;
- (double)_adjustedWindowLevelFromLevel:(double)a0;

@end
