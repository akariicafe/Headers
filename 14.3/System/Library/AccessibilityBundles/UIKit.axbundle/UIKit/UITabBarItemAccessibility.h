@interface UITabBarItemAccessibility : __UITabBarItemAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)setAccessibilityAttributedLabel:(id)a0;
- (void)setAccessibilityAttributedValue:(id)a0;
- (void)setAccessibilityAttributedHint:(id)a0;
- (id)accessibilityLocalizedStringKey;
- (void)setAccessibilityLabel:(id)a0;
- (id)selectedImage;
- (void)setAccessibilityHint:(id)a0;
- (void)setAccessibilityValue:(id)a0;
- (id)unselectedImage;
- (id)accessibilityLocalizationBundleID;
- (id)accessibilityLocalizationBundlePath;
- (id)accessibilityLocalizedStringTableName;
- (id)_createViewForTabBar:(id)a0 asProxyView:(BOOL)a1;

@end
