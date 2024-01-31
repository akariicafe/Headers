@interface CNAccountsAndGroupsCellAccessibility : __CNAccountsAndGroupsCellAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityCustomActions;
- (BOOL)isAccessibilityElement;
- (id)accessibilityValue;
- (void)beginEditingName;
- (id)_accessibilityTextViewTextOperationResponder;
- (id)_accessibilitySafeDelegate;
- (id)_accessibilitySafeItem;
- (BOOL)_axIsEditing;
- (BOOL)_axIsPlaceholderCell;

@end
