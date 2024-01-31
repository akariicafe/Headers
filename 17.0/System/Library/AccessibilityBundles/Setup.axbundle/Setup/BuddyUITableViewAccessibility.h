@interface BuddyUITableViewAccessibility : __BuddyUITableViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (BOOL)isAccessibilityElement;
- (id)accessibilityElementAtIndex:(long long)a0;
- (long long)accessibilityElementCount;
- (long long)indexOfAccessibilityElement:(id)a0;
- (id)_accessibilitySupplementaryHeaderViews;
- (id)_accessibilityScannerGroupElements;
- (id)_axChoiceController;
- (id)_axPrimaryChoiceButton;
- (id)_axSecondaryChoiceButton;
- (id)_axSortedAccessibleSubviews;

@end
