@interface UISystemKeyboardDockControllerAccessibility : __UISystemKeyboardDockControllerAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)loadView;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)updateDockItemsVisibility;
- (BOOL)_axShowsGlobeKeyAsEmoji;
- (void)_accessibilityMarkupDockItems;
- (void)_axUpdateGlobeKeyLabel;

@end
