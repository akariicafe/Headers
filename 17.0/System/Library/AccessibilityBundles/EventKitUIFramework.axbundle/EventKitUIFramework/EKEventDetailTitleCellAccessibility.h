@interface EKEventDetailTitleCellAccessibility : __EKEventDetailTitleCellAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (id)accessibilityCustomActions;
- (void)addLocation:(id)a0;
- (BOOL)isAccessibilityElement;
- (id)_accessibilitySupplementaryFooterViews;
- (id)accessibilityCustomContent;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)_accessibilityImageLabelforAttributedLocationName:(id)a0 andLocationStatus:(long long)a1;
- (id)_accessibilityImageLabelforStatus:(long long)a0;
- (id)_addCustomActionToActionsArray:(id)a0 forControl:(id)a1 actionBlock:(id /* block */)a2;
- (void)_axAnnotateLocationViewsIfNeeded;

@end
