@interface SBAppThumbnailViewAccessibility : __SBAppThumbnailViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (BOOL)_accessibilityServesAsFirstElement;
- (void)_showQuitButton:(BOOL)a0;

@end
