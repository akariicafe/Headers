@interface UITableViewWrapperViewAccessibility : __UITableViewWrapperViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_accessibilityContentFrame;
- (BOOL)_accessibilityScrollingEnabled;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_accessibilityVisibleContentInset;

@end
