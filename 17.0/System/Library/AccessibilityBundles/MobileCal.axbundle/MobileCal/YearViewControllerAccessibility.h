@interface YearViewControllerAccessibility : __YearViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)viewDidLoad;
- (id)scrollView;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)accessibilityScrollStatusForScrollView:(id)a0;
- (void)_axAnnotateView;
- (void)showDate:(id)a0 animated:(BOOL)a1 completionBlock:(id /* block */)a2;

@end
