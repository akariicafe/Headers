@interface SFAirDropActivityViewControllerAccessibility : __SFAirDropActivityViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)viewWillAppear:(BOOL)a0;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)setSharedItemsAvailable:(BOOL)a0;
- (void)updateContentAreaAnimated:(BOOL)a0;
- (void)_axAddIfVisible:(id)a0 toArray:(id)a1;
- (void)_axAnnotateCollectionViewCellIfNeeded;
- (BOOL)_axDidPostScreenChangeAfterAppearance;
- (void)_axSetDidPostScreenChangeAfterAppearance:(BOOL)a0;

@end
