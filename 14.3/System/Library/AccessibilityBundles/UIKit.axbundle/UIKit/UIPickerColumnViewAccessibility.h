@interface UIPickerColumnViewAccessibility : __UIPickerColumnViewAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)_accessibilityMoveFocusWithHeading:(unsigned long long)a0;
- (id)_accessibilityKeyCommands;
- (id)accessibilityPath;
- (id)_accessibilityNativeFocusPreferredElement;
- (id)_viewToAddFocusLayer;
- (void)_fkaScrollToPreviousRow;
- (void)_fkaScrollToNextRow;
- (void)_fkaMoveToPreviousColumn;
- (void)_fkaMoveToNextColumn;

@end
