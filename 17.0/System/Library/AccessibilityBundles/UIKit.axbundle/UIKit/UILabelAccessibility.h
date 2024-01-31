@interface UILabelAccessibility : __UILabelAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityAttributedLabel;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLocalizedStringKey;
- (id)accessibilityCustomRotors;
- (BOOL)accessibilityRespondsToUserInteraction;
- (id)accessibilityValue;
- (unsigned long long)_accessibilityAutomationType;
- (id)_accessibilityBackgroundTextColorAttribute;
- (double)_accessibilityFontSize;
- (id)_accessibilityForegroundTextColorAttribute;
- (BOOL)_accessibilityOverridesPotentiallyAttributedAPISelector:(SEL)a0;
- (id)accessibilityLocalizationBundleID;
- (id)accessibilityLocalizationBundlePath;
- (id)accessibilityLocalizedStringTableName;
- (id)copyAttributedText:(id)a0 withAttributes:(id)a1;

@end
