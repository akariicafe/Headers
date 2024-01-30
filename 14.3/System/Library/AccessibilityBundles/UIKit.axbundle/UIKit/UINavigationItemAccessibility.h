@interface UINavigationItemAccessibility : __UINavigationItemAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)setTitleView:(id)a0;
- (void)_accessibilityLoadAccessibilityInformation;
- (BOOL)_axDidOverrideHidesSearchBarWhenScrolling;
- (void)_axSetDidOverrideHidesSearchBarWhenScrolling:(BOOL)a0;
- (void)_axSetOriginalHidesSearchBarWhenScrolling:(BOOL)a0;
- (BOOL)_axOriginalHidesSearchBarWhenScrolling;

@end
