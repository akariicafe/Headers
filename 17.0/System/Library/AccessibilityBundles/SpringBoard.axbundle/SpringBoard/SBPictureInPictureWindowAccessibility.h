@interface SBPictureInPictureWindowAccessibility : __SBPictureInPictureWindowAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityIdentifier;
- (id)_accessibilityElementCommunityIdentifier;
- (BOOL)_accessibilityIsIsolatedWindow;
- (BOOL)_accessibilityUseWindowBoundsForOutOfBoundsChecking;

@end
