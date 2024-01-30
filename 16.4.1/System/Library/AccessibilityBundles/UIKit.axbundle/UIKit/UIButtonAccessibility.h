@interface UIButtonAccessibility : __UIButtonAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)accessibilityLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)_contentForState:(unsigned long long)a0;
- (id)_accessibilityUserTestingChildren;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)accessibilityPath;
- (BOOL)accessibilityPerformEscape;
- (id)accessibilityValue;
- (unsigned long long)_accessibilityAutomationType;
- (id)_accessibilityAuditIssuesWithOptions:(id)a0;
- (BOOL)_accessibilityElementHasImage;
- (BOOL)_accessibilityIsMacVisualAppearance;
- (unsigned long long)_accessibilityNativeTraits;
- (BOOL)_accessibilityOverridesInvalidFrames;
- (BOOL)_accessibilityUseAccessibilityFrameForHittest;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_accessibilityButtonChildrenCombinedFrame;
- (id)_accessibilityButtonMacCatalystPopupButtonCell;
- (id)_accessibilityImagePath;
- (BOOL)_accessibilityIsEmptyShellOfAButton;
- (BOOL)_axButtonTypeIsModernCircle;

@end
