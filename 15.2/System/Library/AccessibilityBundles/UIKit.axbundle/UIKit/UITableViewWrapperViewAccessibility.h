@interface UITableViewWrapperViewAccessibility : __UITableViewWrapperViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)_accessibilityScrollingEnabled;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_accessibilityContentFrame;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_accessibilityVisibleContentInset;

@end
