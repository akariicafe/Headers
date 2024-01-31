@interface CardViewAccessibility : __CardViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (long long)accessibilityContainerType;
- (void)layoutSubviews;
- (BOOL)accessibilityPerformEscape;
- (BOOL)accessibilityViewIsModal;
- (BOOL)shouldGroupAccessibilityChildren;
- (id)_accessibilityContaineeViewController;
- (unsigned long long)_accessibilityContaineeLayout;
- (BOOL)_axCollapseCard;
- (id)_accessibilityContainerViewController;
- (BOOL)_axExpandCard;

@end
