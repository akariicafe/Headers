@interface UILabelAccessibility : __UILabelAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (BOOL)accessibilityRespondsToUserInteraction;
- (unsigned long long)accessibilityTraits;
- (unsigned long long)_accessibilityAutomationType;
- (id)accessibilityLocalizedStringKey;
- (id)accessibilityCustomRotors;
- (BOOL)isAccessibilityElement;
- (id)accessibilityAttributedLabel;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (BOOL)_accessibilityOverridesPotentiallyAttributedAPISelector:(SEL)a0;
- (id)accessibilityLocalizationBundleID;
- (id)accessibilityLocalizationBundlePath;
- (id)accessibilityLocalizedStringTableName;
- (double)_accessibilityFontSize;
- (id)_accessibilityForegroundTextColorAttribute;
- (id)_accessibilityBackgroundTextColorAttribute;
- (id)copyAttributedText:(id)a0 withAttributes:(id)a1;

@end
