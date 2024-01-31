@interface UIPickerColumnViewAccessibility : __UIPickerColumnViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)_viewToAddFocusLayer;
- (id)accessibilityPath;
- (id)_accessibilityKeyCommands;
- (id)_accessibilityNativeFocusPreferredElement;
- (void)_fkaMoveToNextColumn;
- (void)_fkaMoveToPreviousColumn;
- (void)_fkaScrollToNextRow;
- (void)_fkaScrollToPreviousRow;

@end
