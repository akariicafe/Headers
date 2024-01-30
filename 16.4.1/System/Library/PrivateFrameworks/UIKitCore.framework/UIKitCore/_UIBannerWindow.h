@interface _UIBannerWindow : UIWindow

+ (BOOL)_isSystemWindow;

- (BOOL)_canActAsKeyWindowForScreen:(id)a0;
- (BOOL)_shouldForceTraitPropagationThroughHierarchy;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)_roleHint;
- (id)init;
- (BOOL)_shouldAdjustSizeClassesAndResizeWindow;

@end
