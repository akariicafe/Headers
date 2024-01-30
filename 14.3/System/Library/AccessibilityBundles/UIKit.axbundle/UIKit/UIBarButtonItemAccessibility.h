@interface UIBarButtonItemAccessibility : __UIBarButtonItemAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (BOOL)_isSerializableAccessibilityElement;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)setView:(id)a0;
- (BOOL)isAccessibilityElement;
- (id)initWithImage:(id)a0 landscapeImagePhone:(id)a1 style:(long long)a2 target:(id)a3 action:(SEL)a4;
- (void)setAccessibilityIdentifier:(id)a0;
- (void)dealloc;
- (void)_setAccessibilityIsNotFirstElement:(BOOL)a0;
- (void)setAccessibilityAttributedLabel:(id)a0;
- (void)setAccessibilityAttributedValue:(id)a0;
- (unsigned long long)accessibilityTraits;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)accessibilityLabel;
- (void)_setAccessibilityLabelBlock:(id /* block */)a0;
- (id)initWithImage:(id)a0 style:(long long)a1 target:(id)a2 action:(SEL)a3;
- (void)_setAccessibilityHintBlock:(id /* block */)a0;
- (void)_setAccessibilityValueBlock:(id /* block */)a0;
- (void)setTitle:(id)a0;
- (void)setAccessibilityAttributedHint:(id)a0;
- (id)accessibilityLocalizedStringKey;
- (void)setAccessibilityLabel:(id)a0;
- (void)setIsAccessibilityElement:(BOOL)a0;
- (void)setAccessibilityHint:(id)a0;
- (void)setAccessibilityValue:(id)a0;
- (id)createViewForNavigationItem:(id)a0;
- (id)accessibilityLocalizationBundleID;
- (id)accessibilityLocalizationBundlePath;
- (id)accessibilityLocalizedStringTableName;
- (void)setAccessibilityTraits:(unsigned long long)a0;
- (id)createViewForToolbar:(id)a0;
- (void)setCustomView:(id)a0;
- (void)_accessibilityAddIdForView:(id)a0;
- (id)_accessibilityIdentifierForImage:(id)a0;
- (id)_axBarButtonImagePath;
- (void)_axRememberTargetter:(id)a0;
- (void)_updateAccessibilityLabelForImage:(id)a0;
- (void)_setAXBarButtonImagePath:(id)a0;

@end
