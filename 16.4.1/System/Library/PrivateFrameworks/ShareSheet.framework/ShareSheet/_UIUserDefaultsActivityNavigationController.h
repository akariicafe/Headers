@class NSString;

@interface _UIUserDefaultsActivityNavigationController : UINavigationController <_UIAppearanceRestriction>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_preventsAppearanceProxyCustomization;

- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)setPreferredContentSize:(struct CGSize { double x0; double x1; })a0;
- (double)_statusBarHeightAdjustmentForCurrentOrientation;
- (BOOL)_viewControllerUnderlapsStatusBar;
- (BOOL)_shouldUseContentOverlayInsetsAsStatusBarUnderlapHeight;

@end
