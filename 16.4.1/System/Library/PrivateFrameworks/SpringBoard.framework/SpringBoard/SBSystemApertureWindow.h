@interface SBSystemApertureWindow : SBFSecureTouchPassThroughWindow

- (BOOL)accessibilityIgnoresInvertColors;
- (void)accessibilityApplyInvertFilter;
- (void)setAutorotates:(BOOL)a0 forceUpdateInterfaceOrientation:(BOOL)a1;
- (BOOL)_accessibilityInvertColorsIsDarkWindow;

@end
