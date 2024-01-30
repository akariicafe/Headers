@interface _UISnapshotWindow : UIWindow

+ (BOOL)_isSystemWindow;

- (BOOL)_canActAsKeyWindowForScreen:(id)a0;
- (BOOL)_canBecomeKeyWindow;
- (void)_setFirstResponder:(id)a0;
- (BOOL)_isSettingFirstResponder;
- (BOOL)_alwaysGetsContexts;
- (double)_adjustedWindowLevelFromLevel:(double)a0;

@end
