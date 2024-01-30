@class NSString;

@interface _UIUserDefaultsActivityNavigationController : UINavigationController <_UIAppearanceRestriction>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_preventsAppearanceProxyCustomization;

- (struct CGSize { double x0; double x1; })preferredContentSize;
- (double)_statusBarHeightAdjustmentForCurrentOrientation;
- (BOOL)_shouldUseContentOverlayInsetsAsStatusBarUnderlapHeight;
- (void)setPreferredContentSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)_viewControllerUnderlapsStatusBar;

@end
