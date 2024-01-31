@interface UITabBarItemAccessibility : __UITabBarItemAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)setAccessibilityLabel:(id)a0;
- (void)setAccessibilityAttributedValue:(id)a0;
- (id)selectedImage;
- (void)setAccessibilityHint:(id)a0;
- (void)setAccessibilityAttributedLabel:(id)a0;
- (void)setAccessibilityAttributedHint:(id)a0;
- (id)accessibilityLocalizedStringKey;
- (id)unselectedImage;
- (id)_createViewForTabBar:(id)a0 asProxyView:(BOOL)a1;
- (void)setAccessibilityValue:(id)a0;
- (id)accessibilityLocalizationBundleID;
- (id)accessibilityLocalizationBundlePath;
- (id)accessibilityLocalizedStringTableName;

@end
