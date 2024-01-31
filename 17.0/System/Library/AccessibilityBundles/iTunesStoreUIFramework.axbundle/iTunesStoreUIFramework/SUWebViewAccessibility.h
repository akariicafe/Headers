@interface SUWebViewAccessibility : __SUWebViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (BOOL)accessibilityPerformEscape;
- (BOOL)accessibilityScroll:(long long)a0;
- (BOOL)_accessibilityIsScrollAncestor;
- (BOOL)accessibilityScrollRightPage;
- (BOOL)_accessibilitySUWebViewIsScrollAncestor;

@end
