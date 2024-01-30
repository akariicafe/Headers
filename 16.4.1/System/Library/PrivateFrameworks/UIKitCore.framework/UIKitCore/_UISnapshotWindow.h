@interface _UISnapshotWindow : UIWindow

@property BOOL _extendsScreenSceneLifetime;

+ (BOOL)_isSystemWindow;

- (double)_adjustedWindowLevelFromLevel:(double)a0;
- (BOOL)_alwaysGetsContexts;
- (BOOL)_canActAsKeyWindowForScreen:(id)a0;
- (void)_setFirstResponder:(id)a0;
- (BOOL)_isSettingFirstResponder;
- (BOOL)_canDisableMirroring;
- (BOOL)canBecomeKeyWindow;
- (BOOL)_shouldAdjustSizeClassesAndResizeWindow;

@end
