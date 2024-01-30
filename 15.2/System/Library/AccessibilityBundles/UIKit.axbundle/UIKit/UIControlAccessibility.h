@interface UIControlAccessibility : __UIControlAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (unsigned long long)accessibilityTraits;
- (BOOL)accessibilityActivate;
- (BOOL)isAccessibilityElement;
- (id)_systemDefaultFocusGroupIdentifier;
- (id)accessibilityLabel;
- (id)_accessibilityObscuredScreenAllowedViews;
- (BOOL)_accessibilitySupportsActivateAction;
- (id)_accessibilityAuditIssuesWithOptions:(id)a0;

@end
