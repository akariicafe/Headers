@interface NSObjectAccessibility : __NSObjectAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;

- (id)accessibilityElements;
- (BOOL)isAccessibilityElement;
- (BOOL)accessibilityElementsHidden;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)storedShouldGroupAccessibilityChildren;
- (BOOL)accessibilityRespondsToUserInteraction;
- (id)storedAccessibilityElementsHidden;
- (BOOL)shouldGroupAccessibilityChildren;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityPath;
- (id)accessibilityLabel;
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
- (id)storedAccessibilityViewIsModal;
- (id)accessibilityLocalizedStringKey;
- (long long)accessibilityElementCount;
- (void)setAccessibilityElements:(id)a0;
- (id)accessibilityHeaderElements;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (long long)accessibilityNavigationStyle;
- (void)setAccessibilityLabel:(id)a0;
- (id)accessibilityElementAtIndex:(long long)a0;
- (long long)indexOfAccessibilityElement:(id)a0;
- (BOOL)accessibilityViewIsModal;
- (BOOL)accessibilityPerformEscape;
- (id)accessibilityIdentifier;
- (id)accessibilityLanguage;
- (id)accessibilityCustomActions;
- (void)setAccessibilityHint:(id)a0;
- (BOOL)accessibilityActivate;
- (void)setAccessibilityValue:(id)a0;
- (id)accessibilityHint;
- (id)accessibilityValue;
- (id)accessibilityLocalizationBundleID;
- (id)accessibilityLocalizationBundlePath;
- (id)accessibilityLocalizedStringTableName;
- (id)_accessibilityCapturedImages;

@end
