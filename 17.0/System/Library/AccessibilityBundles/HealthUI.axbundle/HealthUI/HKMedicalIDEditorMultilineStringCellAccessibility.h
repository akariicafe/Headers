@interface HKMedicalIDEditorMultilineStringCellAccessibility : __HKMedicalIDEditorMultilineStringCellAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (void)setStringValue:(id)a0;
- (void)setPlaceholder:(id)a0;
- (void)setLabel:(id)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (BOOL)isAccessibilityElement;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_accessibilityUpdateTextViewLabel;

@end
