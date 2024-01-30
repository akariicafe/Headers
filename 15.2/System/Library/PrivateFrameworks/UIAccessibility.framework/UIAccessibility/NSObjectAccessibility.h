@interface NSObjectAccessibility : __NSObjectAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityIdentifier;
- (id)storedShouldGroupAccessibilityChildren;
- (BOOL)accessibilityRespondsToUserInteraction;
- (BOOL)shouldGroupAccessibilityChildren;
- (unsigned long long)accessibilityTraits;
- (void)setAccessibilityLabel:(id)a0;
- (id)storedAccessibilityElementsHidden;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityLocalizedStringKey;
- (id)storedAccessibilityViewIsModal;
- (BOOL)accessibilityPerformEscape;
- (BOOL)accessibilityViewIsModal;
- (long long)accessibilityElementCount;
- (void)setAccessibilityElements:(id)a0;
- (id)accessibilityLanguage;
- (void)setAccessibilityHint:(id)a0;
- (BOOL)accessibilityActivate;
- (id)accessibilityHint;
- (id)accessibilityPath;
- (BOOL)isAccessibilityElement;
- (void)setAccessibilityValue:(id)a0;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (long long)accessibilityNavigationStyle;
- (BOOL)accessibilityElementsHidden;
- (id)accessibilityHeaderElements;
- (id)accessibilityElementAtIndex:(long long)a0;
- (long long)indexOfAccessibilityElement:(id)a0;
- (id)accessibilityValue;
- (id)accessibilityElements;
- (id)accessibilityLabel;
- (id)accessibilityCustomActions;
- (id)accessibilityLocalizationBundleID;
- (id)accessibilityLocalizationBundlePath;
- (id)accessibilityLocalizedStringTableName;
- (id)_accessibilityCapturedImages;
- (id)accessibilityUserDefinedLabel;
- (id)accessibilityUserDefinedValue;
- (id)accessibilityUserDefinedHint;
- (id)accessibilityUserDefinedFrame;
- (id)accessibilityUserDefinedTraits;
- (id)isAccessibilityUserDefinedElement;
- (id)accessibilityUserDefinedLanguage;
- (id)accessibilityUserDefinedIdentifier;
- (id)accessibilityUserDefinedActivationPoint;
- (id)accessibilityUserDefinedShouldGroupChildren;
- (id)accessibilityUserDefinedContainer;
- (id)accessibilityUserDefinedDragSourceDescriptors;
- (id)accessibilityUserDefinedDropPointDescriptors;

@end
