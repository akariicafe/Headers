@interface _UIBannerWindow : UIWindow

+ (BOOL)_isSystemWindow;

- (BOOL)_canActAsKeyWindowForScreen:(id)a0;
- (id)init;
- (BOOL)_shouldAdjustSizeClassesAndResizeWindow;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)_shouldForceTraitPropagationThroughHierarchy;

@end
