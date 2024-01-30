@interface UIButtonAccessibility : __UIButtonAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (unsigned long long)accessibilityTraits;
- (id)_accessibilityUserTestingChildren;
- (unsigned long long)_accessibilityAutomationType;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (BOOL)accessibilityPerformEscape;
- (id)_contentForState:(unsigned long long)a0;
- (id)accessibilityPath;
- (BOOL)isAccessibilityElement;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (BOOL)_accessibilityOverridesInvalidFrames;
- (id)_accessibilityAuditIssuesWithOptions:(id)a0;
- (BOOL)_accessibilityElementHasImage;
- (unsigned long long)_accessibilityNativeTraits;
- (id)_accessibilityImagePath;
- (BOOL)_accessibilityIsEmptyShellOfAButton;
- (id)_accessibilityButtonMacCatalystPopupButtonCell;
- (BOOL)_axButtonTypeIsModernCircle;
- (BOOL)_accessibilityUseAccessibilityFrameForHittest;

@end
