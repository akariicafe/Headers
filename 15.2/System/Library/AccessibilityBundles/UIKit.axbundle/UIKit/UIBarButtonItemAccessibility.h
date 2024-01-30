@interface UIBarButtonItemAccessibility : __UIBarButtonItemAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (BOOL)_isSerializableAccessibilityElement;

- (void)setCustomView:(id)a0;
- (id)initWithImage:(id)a0 landscapeImagePhone:(id)a1 style:(long long)a2 target:(id)a3 action:(SEL)a4;
- (void)setAccessibilityIdentifier:(id)a0;
- (void)setAccessibilityAttributedLabel:(id)a0;
- (unsigned long long)accessibilityTraits;
- (void)setAccessibilityLabel:(id)a0;
- (void)setAccessibilityAttributedValue:(id)a0;
- (void)setAccessibilityAttributedHint:(id)a0;
- (id)accessibilityLocalizedStringKey;
- (void)setView:(id)a0;
- (void)setIsAccessibilityElement:(BOOL)a0;
- (void)setAccessibilityHint:(id)a0;
- (BOOL)isAccessibilityElement;
- (void)setAccessibilityValue:(id)a0;
- (id)initWithImage:(id)a0 style:(long long)a1 target:(id)a2 action:(SEL)a3;
- (void)setAccessibilityTraits:(unsigned long long)a0;
- (void)setTitle:(id)a0;
- (void)dealloc;
- (id)createViewForNavigationItem:(id)a0;
- (id)accessibilityLabel;
- (id)createViewForToolbar:(id)a0;
- (id)accessibilityLocalizationBundleID;
- (id)accessibilityLocalizationBundlePath;
- (id)accessibilityLocalizedStringTableName;
- (void)_setAccessibilityIsNotFirstElement:(BOOL)a0;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_setAccessibilityLabelBlock:(id /* block */)a0;
- (void)_setAccessibilityHintBlock:(id /* block */)a0;
- (void)_setAccessibilityValueBlock:(id /* block */)a0;

@end
