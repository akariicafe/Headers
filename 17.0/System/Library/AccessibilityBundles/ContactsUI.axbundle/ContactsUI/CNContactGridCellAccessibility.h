@interface CNContactGridCellAccessibility : __CNContactGridCellAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (id)accessibilityCustomActions;
- (id)_accessibilityUserTestingChildren;
- (BOOL)isAccessibilityElement;
- (BOOL)accessibilityActivate;
- (BOOL)_accessibilitySupportsActivateAction;
- (void)_createViewsIfNeeded;
- (void)_axPerformCustomAction:(id)a0;

@end
