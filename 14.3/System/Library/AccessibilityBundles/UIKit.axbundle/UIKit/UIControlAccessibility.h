@interface UIControlAccessibility : __UIControlAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;

- (BOOL)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (id)_accessibilityObscuredScreenAllowedViews;
- (BOOL)_accessibilitySupportsActivateAction;
- (BOOL)accessibilityActivate;
- (id)_accessibilityAuditIssuesWithOptions:(id)a0;

@end
