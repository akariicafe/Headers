@interface UITabBarItemAccessibility : __UITabBarItemAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)setAccessibilityAttributedLabel:(id)a0;
- (void)setAccessibilityLabel:(id)a0;
- (void)setAccessibilityAttributedValue:(id)a0;
- (void)setAccessibilityAttributedHint:(id)a0;
- (id)accessibilityLocalizedStringKey;
- (void)setAccessibilityHint:(id)a0;
- (void)setAccessibilityValue:(id)a0;
- (id)selectedImage;
- (id)_createViewForTabBar:(id)a0 asProxyView:(BOOL)a1;
- (id)unselectedImage;
- (id)accessibilityLocalizationBundleID;
- (id)accessibilityLocalizationBundlePath;
- (id)accessibilityLocalizedStringTableName;

@end
