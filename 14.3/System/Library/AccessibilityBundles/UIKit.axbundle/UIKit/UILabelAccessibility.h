@interface UILabelAccessibility : __UILabelAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;

- (BOOL)isAccessibilityElement;
- (unsigned long long)_accessibilityAutomationType;
- (BOOL)accessibilityRespondsToUserInteraction;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (id)accessibilityCustomRotors;
- (id)accessibilityLocalizedStringKey;
- (id)accessibilityAttributedLabel;
- (BOOL)_accessibilityOverridesPotentiallyAttributedAPISelector:(SEL)a0;
- (id)accessibilityValue;
- (double)_accessibilityFontSize;
- (id)accessibilityLocalizationBundleID;
- (id)accessibilityLocalizationBundlePath;
- (id)accessibilityLocalizedStringTableName;
- (id)_accessibilityLabel:(BOOL)a0;
- (id)_axOriginalLabelText:(BOOL)a0;
- (id)_axCleanupNewlines:(id)a0;
- (id)copyAttributedText:(id)a0 withAttributes:(id)a1;

@end
