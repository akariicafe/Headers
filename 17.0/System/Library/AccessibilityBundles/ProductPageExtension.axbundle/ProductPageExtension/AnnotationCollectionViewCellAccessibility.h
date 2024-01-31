@interface AnnotationCollectionViewCellAccessibility : __AnnotationCollectionViewCellAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityCustomActions;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (BOOL)_accessibilityOverridesInstructionsHint;
- (BOOL)_accessibilityPerformLinkAction:(id)a0;
- (BOOL)_axIsAnnotationCellExpanded;
- (BOOL)_axIsSummaryExpandable;
- (id)_axLinkLabel;

@end
