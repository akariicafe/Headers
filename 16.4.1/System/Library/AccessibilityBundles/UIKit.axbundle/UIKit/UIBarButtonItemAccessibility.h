@interface UIBarButtonItemAccessibility : __UIBarButtonItemAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (BOOL)_isSerializableAccessibilityElement;

- (id)accessibilityLabel;
- (void)setAccessibilityAttributedValue:(id)a0;
- (void)setAccessibilityTraits:(unsigned long long)a0;
- (void)setView:(id)a0;
- (void)setAccessibilityLabel:(id)a0;
- (void)setAccessibilityHint:(id)a0;
- (void)setAccessibilityAttributedLabel:(id)a0;
- (void)setCustomView:(id)a0;
- (void)dealloc;
- (void)setAccessibilityIdentifier:(id)a0;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (void)setTitle:(id)a0;
- (id)accessibilityLocalizedStringKey;
- (void)setAccessibilityAttributedHint:(id)a0;
- (id)createViewForNavigationItem:(id)a0;
- (id)createViewForToolbar:(id)a0;
- (id)initWithImage:(id)a0 landscapeImagePhone:(id)a1 style:(long long)a2 target:(id)a3 action:(SEL)a4;
- (id)initWithImage:(id)a0 style:(long long)a1 target:(id)a2 action:(SEL)a3;
- (void)setAccessibilityValue:(id)a0;
- (void)setIsAccessibilityElement:(BOOL)a0;
- (void)_setAccessibilityHintBlock:(id /* block */)a0;
- (void)_setAccessibilityLabelBlock:(id /* block */)a0;
- (void)_setAccessibilityValueBlock:(id /* block */)a0;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_setAccessibilityIsNotFirstElement:(BOOL)a0;
- (id)accessibilityLocalizationBundleID;
- (id)accessibilityLocalizationBundlePath;
- (id)accessibilityLocalizedStringTableName;

@end
