@interface UIButtonAccessibility : __UIButtonAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)isAccessibilityElement;
- (unsigned long long)_accessibilityAutomationType;
- (id)_contentForState:(unsigned long long)a0;
- (unsigned long long)_accessibilityNativeTraits;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityPath;
- (id)accessibilityLabel;
- (id)_accessibilityUserTestingChildren;
- (BOOL)accessibilityPerformEscape;
- (id)_accessibilityAuditIssuesWithOptions:(id)a0;
- (id)accessibilityValue;
- (id)_accessibilityImagePath;
- (id)_accessibilityButtonMacCatalystPopupButtonCell;
- (BOOL)_axButtonTypeIsModernCircle;

@end
