@interface UIPickerColumnViewAccessibility : __UIPickerColumnViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)_viewToAddFocusLayer;
- (id)accessibilityPath;
- (id)_accessibilityKeyCommands;
- (id)_accessibilityNativeFocusPreferredElement;
- (void)_fkaMoveToNextColumn;
- (void)_fkaMoveToPreviousColumn;
- (void)_fkaScrollToNextRow;
- (void)_fkaScrollToPreviousRow;

@end
