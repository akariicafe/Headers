@interface UIControlAccessibility : __UIControlAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)_systemDefaultFocusGroupIdentifier;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (BOOL)accessibilityActivate;
- (BOOL)_accessibilitySupportsActivateAction;
- (id)_accessibilityAuditIssuesWithOptions:(id)a0;
- (id)_accessibilityObscuredScreenAllowedViews;

@end
