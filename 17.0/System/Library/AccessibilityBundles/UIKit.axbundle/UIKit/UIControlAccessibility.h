@interface UIControlAccessibility : __UIControlAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)_systemDefaultFocusGroupIdentifier;
- (BOOL)isAccessibilityElement;
- (BOOL)accessibilityActivate;
- (BOOL)_accessibilitySupportsActivateAction;
- (id)_accessibilityAuditIssuesWithOptions:(id)a0;
- (id)_accessibilityObscuredScreenAllowedViews;

@end
